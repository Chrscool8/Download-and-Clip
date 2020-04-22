#include "Download_and_Clip.h"
#include "qwidget.h"
#include "curl/curl.h"
#include <fstream>
#include "zlib.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <direct.h>

#include <atlbase.h>
#include <atlconv.h>
#include <iostream>

#include <filesystem>  
namespace fs = std::filesystem;
fs::path working_dir("working_directory/");

std::string status = "";
QString dark_stylesheet;

std::string downloaded_video;
std::string downloaded_thumb;

void Download_and_Clip::check_for_downloaded_files()
{
	downloaded_thumb = "";
	downloaded_video = "";

	for (auto& p : fs::directory_iterator("working_directory/"))
	{
		std::string file = p.path().string();
		if (file.find("downloaded_thumb") != std::string::npos)
		{
			downloaded_thumb = file;
		}

		if (file.find("downloaded_video") != std::string::npos)
		{
			downloaded_video = file;
		}
	}

	if (!downloaded_thumb.empty())
	{
		QPixmap image(downloaded_thumb.c_str());

		int w = ui.label_thumb_download->width();
		int h = ui.label_thumb_download->height();
		ui.label_thumb_download->setPixmap(image.scaled(w, h, Qt::KeepAspectRatioByExpanding));
	}

	std::ifstream infile("working_directory/info.txt");
	std::string url;
	infile >> url;
	infile.close();
	ui.textedit_videoid->setPlainText(url.c_str());

}

void Download_and_Clip::update_status(std::string str)
{
	status += str;
	status += "\n";

	ui.textedit_status_box->setPlainText(QString::fromStdString(status));
}

static size_t write_data(void* ptr, size_t size, size_t nmemb, void* stream)
{
	size_t written = fwrite(ptr, size, nmemb, (FILE*)stream);
	return written;
}

int Download_and_Clip::download_file(std::string _url, std::string _file) {
	CURL* curl;
	FILE* fp;

	curl = curl_easy_init();
	if (curl)
	{
		fp = fopen(_file.c_str(), "wb");
		curl_easy_setopt(curl, CURLOPT_URL, _url);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, FALSE);
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1);
		update_status("Started downloading from: ");
		update_status(_url);
		curl_easy_perform(curl);
		update_status("Done.");
		curl_easy_cleanup(curl);
		fclose(fp);
	}
	return 0;
}

void Download_and_Clip::check_for_ytdl()
{
	if (fs::exists(fs::path("youtube-dl.exe")))
	{
		update_status("youtube-dl.exe found.");
		ui.textedit_videoid->setEnabled(true);
		ui.button_download->setEnabled(true);
		//ui.button_downloadytdl->setEnabled(true);
		ui.button_downloadytdl->setText("Update Youtube-DL");
	}
	else
	{
		update_status("youtube-dl.exe not found.");
		ui.textedit_videoid->setEnabled(false);
		ui.button_download->setEnabled(false);
		//ui.button_downloadytdl->setEnabled(true);
		ui.button_downloadytdl->setText("Download Youtube-DL");
	}
}

void Download_and_Clip::check_for_ffmpeg()
{
	if (fs::exists(fs::path("ffmpeg.exe")))
	{
		update_status("ffmpeg.exe found.");
		ui.button_downloadffmpeg->setEnabled(false);
		ui.button_downloadffmpeg->setText("Update ffmpeg");
		ui.textedit_starttime->setEnabled(false);
		ui.textedit_endtime->setEnabled(false);
		ui.textedit_starttime->setEnabled(true);
		ui.textedit_endtime->setEnabled(true);
		ui.slider_quality->setEnabled(true);
		ui.spinbox_quality->setEnabled(true);
		ui.textedit_outputname->setEnabled(true);
		ui.button_clip->setEnabled(true);
	}
	else
	{
		update_status("ffmpeg.exe not found.");
		ui.button_downloadffmpeg->setEnabled(false);
		ui.button_downloadffmpeg->setText("Download ffmpeg");
		ui.slider_quality->setEnabled(false);
		ui.spinbox_quality->setEnabled(false);
		ui.textedit_outputname->setEnabled(false);
		ui.button_clip->setEnabled(false);
	}
}

QProcess* process_ytdl;
QProcess* process_ffmpeg;

void Download_and_Clip::download_ytdl()
{
	ui.button_downloadytdl->setEnabled(false);
	download_file("https://yt-dl.org/latest/youtube-dl.exe", "youtube-dl.exe");
	check_for_ytdl();
}

void Download_and_Clip::download_ffmpeg()
{
	ui.button_downloadytdl->setEnabled(false);
	download_file("https://ffmpeg.zeranoe.com/builds/win64/static/ffmpeg-20200403-52523b6-win64-static.zip", "ffmpeg.zip");
	check_for_ffmpeg();
}

void Download_and_Clip::run_ytdl()
{
	update_status("Run YT-DL");
	remove(downloaded_video.c_str());
	remove(downloaded_thumb.c_str());

	//////////

	std::string url = ui.textedit_videoid->toPlainText().toStdString();
	std::ofstream out("working_directory/info.txt");
	out << url;
	out.close();

	QProcess* info = new QProcess(this);
	std::string program3 = "youtube-dl.exe";
	QStringList args3 = { ui.textedit_videoid->toPlainText(), "-o", "working_directory/downloaded_info", "--skip-download", "--no-playlist", "--write-info-json" };
	//mTranscodingProcess = new QProcess;
	info->setProgram(program3.c_str());
	info->setStandardErrorFile("stderr.txt");
	info->setStandardOutputFile("stdout.txt");
	info->setArguments(args3);
	info->start();

	QProcess* thumb = new QProcess(this);
	std::string program2 = "youtube-dl.exe";
	QStringList args2 = { ui.textedit_videoid->toPlainText(), "-o", "working_directory/downloaded_thumb", "--write-thumbnail", "--skip-download", "--no-playlist" };
	//mTranscodingProcess = new QProcess;
	thumb->setProgram(program2.c_str());
	thumb->setStandardErrorFile("stderr.txt");
	thumb->setStandardOutputFile("stdout.txt");
	thumb->setArguments(args2);
	thumb->start();

	//////////

	std::string program = "youtube-dl.exe";
	QStringList args = { ui.textedit_videoid->toPlainText(), "-o", "working_directory/downloaded_video", "-f", "bestvideo+bestaudio/best", "--no-playlist" };
	//mTranscodingProcess = new QProcess;
	process_ytdl->setProgram(program.c_str());
	process_ytdl->setStandardErrorFile("stderr.txt");
	process_ytdl->setStandardOutputFile("stdout.txt");
	process_ytdl->setArguments(args);
	process_ytdl->start();

	ui.button_download->setEnabled(false);

	ui.progressBar->setValue(0);

	//myProcess->start(program.c_str());
	//mTranscodingProcess->start(program, args, om);

}

void Download_and_Clip::processStarted_ytdl()
{
	update_status("Process Started.");
}

void Download_and_Clip::readyReadStandardOutput_ytdl()
{
	update_status("Output.");
}

void Download_and_Clip::downloadFinished_ytdl()
{
	update_status("Done.");
	ui.button_download->setEnabled(true);

	check_for_downloaded_files();

	check_for_ffmpeg();

	ui.progressBar->setValue(100);
}


void Download_and_Clip::run_ffmpeg()
{
	if (ui.textedit_outputname->toPlainText().length() > 0)
		remove(("working_directory/" + ((std::string)ui.textedit_outputname->toPlainText().toStdString()) + ".mp4").c_str());

	update_status("Run FFMPEG");
	std::string program = "ffmpeg.exe";
	QStringList args = { "-i", downloaded_video.c_str(), "-c:v", "libx264", "-crf", std::to_string(ui.slider_quality->value()).c_str(), "-preset", "ultrafast", "-c:a", "aac", "-strict", "experimental",
		"-b:a", "192k", "-ss", ui.textedit_starttime->toPlainText(), "-to", ui.textedit_endtime->toPlainText(), "-ac", "2", "working_directory/" + ui.textedit_outputname->toPlainText() + ".mp4" };

	process_ffmpeg->setProgram(program.c_str());
	process_ffmpeg->setStandardErrorFile("stderr.txt");
	process_ffmpeg->setStandardOutputFile("stdout.txt");
	process_ffmpeg->setArguments(args);
	process_ffmpeg->start();

	ui.button_download->setEnabled(false);
	ui.button_clip->setEnabled(false);

	ui.progressBar->setValue(0);
}

void Download_and_Clip::processStarted_ffmpeg()
{
	update_status("Process Started.");
}

void Download_and_Clip::readyReadStandardOutput_ffmpeg()
{
	update_status("Output.");
}

void Download_and_Clip::encodingFinished_ffmpeg()
{
	update_status("Done.");
	ui.button_download->setEnabled(true);
	ui.button_clip->setEnabled(true);
	update_status("Your clip was saved to: ");
	std::string s = ui.textedit_outputname->toPlainText().toStdString() + ".mp4";
	update_status(s);
	ui.progressBar->setValue(100);

	//

	if (fs::exists("working_directory/" + s))
	{
		QLocale locale = this->locale();
		QString valueText = locale.formattedDataSize(fs::file_size(("working_directory/" + s).c_str()));
		update_status(valueText.toStdString());

		ui.table_clipinfo->setItem(0, 0, new QTableWidgetItem(s.c_str()));
		ui.table_clipinfo->setItem(0, 1, new QTableWidgetItem(valueText));



	}
}

void Download_and_Clip::darkmode_toggle(bool state)
{
	darkmode(state);
}

void Download_and_Clip::clear_download()
{
	update_status("Clear");
	//fs::remove_all(working_dir);
	remove(downloaded_thumb.c_str());
	remove(downloaded_video.c_str());

	ui.button_downloadffmpeg->setEnabled(false);
	ui.button_downloadffmpeg->setText("Download ffmpeg");
	ui.slider_quality->setEnabled(false);
	ui.spinbox_quality->setEnabled(false);
	ui.textedit_outputname->setEnabled(false);
	ui.button_clip->setEnabled(false);
}

void Download_and_Clip::darkmode(bool on)
{
	if (on)
		this->setStyleSheet(dark_stylesheet);
	else
		this->setStyleSheet("");
}

void Download_and_Clip::typing_clip_name()
{
	const int m_maxDescriptionLength = 10;
	const int m_maxTextEditLength = 2;
	if (ui.textedit_outputname->toPlainText().length() > m_maxDescriptionLength)
	{
		int diff = ui.textedit_outputname->toPlainText().length() - m_maxTextEditLength; //m_maxTextEditLength - just an integer
		QString newStr = ui.textedit_outputname->toPlainText();
		newStr.chop(diff);
		ui.textedit_outputname->setPlainText(newStr);
		QTextCursor cursor(ui.textedit_outputname->textCursor());
		cursor.movePosition(QTextCursor::End, QTextCursor::MoveAnchor);
		ui.textedit_outputname->setTextCursor(cursor);
	}
}

void Download_and_Clip::show_folder()
{
	system("explorer .");
}

//Init
Download_and_Clip::Download_and_Clip(QWidget* parent) :QMainWindow(parent)
{
	setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);

	ui.setupUi(this);

	dark_stylesheet = this->styleSheet();

	connect(ui.button_downloadytdl, SIGNAL(clicked()), this, SLOT(download_ytdl()));
	connect(ui.button_downloadffmpeg, SIGNAL(clicked()), this, SLOT(download_ffmpeg()));
	connect(ui.button_download, SIGNAL(clicked()), this, SLOT(run_ytdl()));
	connect(ui.button_clip, SIGNAL(clicked()), this, SLOT(run_ffmpeg()));
	connect(ui.button_cleardownload, SIGNAL(clicked()), this, SLOT(clear_download()));
	connect(ui.button_showfolder, SIGNAL(clicked()), this, SLOT(show_folder()));

	connect(ui.slider_quality, SIGNAL(valueChanged(int)), ui.spinbox_quality, SLOT(setValue(int)));
	connect(ui.spinbox_quality, SIGNAL(valueChanged(int)), ui.slider_quality, SLOT(setValue(int)));

	connect(ui.checkbox_dark, SIGNAL(clicked(bool)), this, SLOT(darkmode_toggle(bool)));

	connect(ui.textedit_outputname, SIGNAL(textChanged()), this, SLOT(typing_clip_name()));



	check_for_ytdl();

	process_ytdl = new QProcess(this);
	process_ffmpeg = new QProcess(this);

	connect(process_ytdl, SIGNAL(started()), this, SLOT(processStarted_ytdl()));
	connect(process_ytdl, SIGNAL(readyReadStandardOutput()), this, SLOT(readyReadStandardOutput_ytdl()));
	connect(process_ytdl, SIGNAL(finished(int)), this, SLOT(downloadFinished_ytdl()));

	connect(process_ffmpeg, SIGNAL(started()), this, SLOT(processStarted_ffmpeg()));
	connect(process_ffmpeg, SIGNAL(readyReadStandardOutput()), this, SLOT(readyReadStandardOutput_ffmpeg()));
	connect(process_ffmpeg, SIGNAL(finished(int)), this, SLOT(encodingFinished_ffmpeg()));

	if (!(fs::exists(working_dir)))
	{
		fs::create_directory(working_dir);
	}

	ui.label_thumb_download->setText("");
	ui.label_thumb_local->setText("");

	check_for_downloaded_files();

	if (!downloaded_video.empty())
	{
		check_for_ffmpeg();
	}

	ui.table_clipinfo->resizeRowsToContents();
	//ui.table_clipinfo->resizeColumnsToContents();

}