#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Download_and_Clip.h"
#include <QtCore>
#include <QtWidgets>
#include "Task_Man.h"

class Download_and_Clip : public QMainWindow
{
	Q_OBJECT

public:
	Download_and_Clip(QWidget* parent = Q_NULLPTR);
	~Download_and_Clip();

	std::vector<QProcess*> QProcesses;

	std::string get_setting(int setting);
	void set_setting(int setting, std::string value);
	void load_downloaded_thumbnail();
	void load_local_thumbnail();
	std::string find_fuzzy(std::string path, std::string filename);
	void check_full_download();
	void check_full_local();
	void load_video_info();
	void load_downloaded_video();
	void encode_video_done();
	void encode_audio_done();
	void probe_download_video();
	void probe_local_video();
	void start_new_process(std::string program, QStringList args, std::string tag, QTextEdit* box, QString out, bool to_file);
	void check_for_downloaded_files();
	void update_status(std::string str, QTextEdit* box);
	int download_file(std::string _url, std::string _file);
	void check_for_ytdl();
	void check_for_ffmpeg();
	void download_exe_ffmpeg();
	void remove_fuzzy(std::string file);
	void uncheck_themes();
	std::string get_ext(std::string type);
	QString Download_and_Clip::choose_directory(std::string hint, QString starting_dir);
	void collapse_panel(QTabWidget* toolbox);
	void expand_panel(QTabWidget* toolbox);
	void init_settings();
	void file_load_settings();
	void file_save_settings();
	void update_ui_from_settings();
	QString choose_file(std::string hint, QString starting_dir, std::string exts);

	QPropertyAnimation* animation;
	QMovie* gif_loading;
	void load_if_valid(int setting, QLineEdit* destination);

	Task_Man window_tm;

private slots:
	void download_exe_ytdl();
	void execute_ytdl_download();
	void processOutput(std::string tag, QProcess* proc, QTextEdit* box);
	void processErrOutput(std::string tag, QProcess* proc, QTextEdit* box);

	void expand_left();
	void expand_right();
	void expand_both();

	void set_theme_dark();
	void set_theme_light();

	void execute_ffmpeg_encode();
	void execute_audio_encode();

	void typing_clip_name();

	void show_folder_working();
	void show_folder_output();

	void choose_output_video_directory();
	void choose_output_audio_directory();
	void choose_local_video();

	void browse_for_ytdl();
	void browse_for_ffmpeg();
	void browse_for_ffprobe();

	void make_focus_local();
	void make_focus_download();

	void load_local();

	void toggle_focus_scroll();

	void toggle_default_expand();

	void launch_task_man();

	void processStateChange(std::string, QProcess::ProcessState newState, std::string tag, QTextEdit* box);

private:
	Ui::Download_and_ClipClass ui;
	void closeEvent(QCloseEvent* event);

protected:
	// 覧 events 覧覧覧覧覧覧覧覧覧覧覧覧覧�
	/*
	 * this event is called when the mouse enters the widgets area during a drag/drop operation
	 */
	void dragEnterEvent(QDragEnterEvent* event);

	/**
	 * this event is called when the mouse moves inside the widgets area during a drag/drop operation
	 */
	void dragMoveEvent(QDragMoveEvent* event);

	/**
	 * this event is called when the mouse leaves the widgets area during a drag/drop operation
	 */
	void dragLeaveEvent(QDragLeaveEvent* event);

	/**
	 * this event is called when the drop operation is initiated at the widget
	 */
	void dropEvent(QDropEvent* event);
};