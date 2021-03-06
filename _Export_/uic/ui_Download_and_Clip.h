/********************************************************************************
** Form generated from reading UI file 'Download_and_Clip.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOAD_AND_CLIP_H
#define UI_DOWNLOAD_AND_CLIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Download_and_ClipClass
{
public:
    QAction *actionExit;
    QAction *menu_actionThemeLight;
    QAction *menu_actionThemeDark;
    QAction *menu_actionExit;
    QAction *menu_setting_scroll_focus;
    QAction *menu_setting_expand_default;
    QAction *menu_exit;
    QAction *menu_about;
    QAction *menu_task_man;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_6;
    QTabWidget *import_toolbox;
    QWidget *import_toolboxPage1;
    QGridLayout *gridLayout_2;
    QLabel *setup_ytdl_label;
    QLineEdit *setup_ytdl_lineedit;
    QPushButton *setup_ytdl_button;
    QLabel *setup_ffprobe_label;
    QPushButton *setup_ffprobe_button;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QPushButton *setup_show_working_dir;
    QSpacerItem *horizontalSpacer;
    QPushButton *setup_show_output_dir;
    QSpacerItem *verticalSpacer;
    QLineEdit *setup_ffprobe_lineedit;
    QWidget *import_toolboxPage2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *download_image;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *download_video_gif;
    QLabel *download_thumb_gif;
    QLabel *download_description_gif;
    QLabel *download_probe_gif;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *download_check_video;
    QCheckBox *download_check_thumb;
    QCheckBox *download_check_description;
    QCheckBox *download_check_probe;
    QLabel *download_label;
    QTableWidget *download_table;
    QTextEdit *download_status;
    QSpacerItem *verticalSpacer_4;
    QPushButton *download_button;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *download_linedit;
    QPushButton *download_button_focus;
    QWidget *import_toolboxPage3;
    QGridLayout *gridLayout_4;
    QLineEdit *local_lineedit;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QLabel *local_label;
    QTableWidget *local_table;
    QPushButton *local_load;
    QHBoxLayout *horizontalLayout_5;
    QLabel *local_image;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *local_video_gif;
    QLabel *local_thumb_gif;
    QLabel *local_probe_gif;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *local_check_video;
    QCheckBox *local_check_thumb;
    QCheckBox *local_check_probe;
    QTextEdit *local_status;
    QPushButton *local_button;
    QPushButton *local_button_focus;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *expand_left;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *focus_image;
    QLineEdit *focus_lineedit;
    QTableWidget *focus_table;
    QTextEdit *setup_status;
    QPushButton *expand_right;
    QPushButton *expand_both;
    QTabWidget *export_toolbox;
    QWidget *export_toolboxPage1;
    QGridLayout *gridLayout_6;
    QLabel *setup_ffmpeg_label;
    QLineEdit *setup_ffmpeg_lineedit;
    QPushButton *setup_ffmpeg_button;
    QSpacerItem *verticalSpacer_9;
    QWidget *export_toolboxPage2;
    QGridLayout *gridLayout_5;
    QTextEdit *encode_video_status;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *verticalSpacer_10;
    QComboBox *encode_video_combo;
    QLineEdit *encode_video_lineedit_filename;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *encode_video_starttime;
    QLabel *label_2;
    QLineEdit *encode_video_endtime;
    QLabel *encode_video_image;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *encode_video_go;
    QSpacerItem *verticalSpacer_12;
    QLabel *encode_label_2;
    QLineEdit *encode_video_lineedit_directory;
    QPushButton *encode_video_browse;
    QLabel *encode_label;
    QGridLayout *gridLayout_3;
    QLabel *label_quality_smallest;
    QLabel *label_7;
    QSpinBox *encode_video_spinbox;
    QSlider *encode_video_slider;
    QSpacerItem *verticalSpacer_7;
    QWidget *export_toolboxPage3;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_8;
    QLabel *encode_audio_label_3;
    QLineEdit *encode_audio_lineedit_directory;
    QPushButton *encode_audio_browse;
    QLabel *encode_audio_label_4;
    QLineEdit *encode_audio_lineedit_filename;
    QComboBox *encode_audio_combo;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *encode_audio_starttime;
    QLabel *label_4;
    QLineEdit *encode_audio_endtime;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *encode_audio_go;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *encode_audio_status;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTheme;
    QMenu *menuSettings;
    QMenu *menuHelp;

    void setupUi(QMainWindow *Download_and_ClipClass)
    {
        if (Download_and_ClipClass->objectName().isEmpty())
            Download_and_ClipClass->setObjectName(QString::fromUtf8("Download_and_ClipClass"));
        Download_and_ClipClass->setEnabled(true);
        Download_and_ClipClass->resize(1348, 838);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Download_and_ClipClass->sizePolicy().hasHeightForWidth());
        Download_and_ClipClass->setSizePolicy(sizePolicy);
        Download_and_ClipClass->setMinimumSize(QSize(0, 838));
        Download_and_ClipClass->setStyleSheet(QString::fromUtf8("/* Dark Theme */\n"
"\n"
"/*Copyright (c) DevSec Studio. All rights reserved.\n"
"\n"
"MIT License\n"
"\n"
"Permission is hereby granted, free of charge, to any person obtaining a copy\n"
"of this software and associated documentation files (the \"Software\"), to deal\n"
"in the Software without restriction, including without limitation the rights\n"
"to use, copy, modify, merge, publish, distribute, sublicense, and/or sell\n"
"copies of the Software, and to permit persons to whom the Software is\n"
"furnished to do so, subject to the following conditions:\n"
"\n"
"The above copyright notice and this permission notice shall be included in all\n"
"copies or substantial portions of the Software.\n"
"\n"
"THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR\n"
"IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,\n"
"FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE\n"
"AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER\n"
"LI"
                        "ABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,\n"
"OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.\n"
"*/\n"
"\n"
"/*-----QWidget-----*/\n"
"QWidget\n"
"{\n"
"	background-color: #3a3a3a;\n"
"	color: #fff;\n"
"	selection-background-color: #b78620;\n"
"	selection-color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QMenuBar-----*/\n"
"QMenuBar \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(57, 57, 57, 255),stop:1 rgba(50, 50, 50, 255));\n"
"	border: 1px solid #000;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item \n"
"{\n"
"	background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:selected \n"
"{\n"
"	background-color: rgba(183, 134, 32, 20%);\n"
"	border: 1px solid #b78620;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenuBar::item:pressed \n"
"{\n"
"	background-col"
                        "or: rgb(183, 134, 32);\n"
"	border: 1px solid #b78620;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QMenu-----*/\n"
"QMenu\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(57, 57, 57, 255),stop:1 rgba(50, 50, 50, 255));\n"
"    border: 1px solid #222;\n"
"    padding: 4px;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    background-color: transparent;\n"
"    padding: 2px 20px 2px 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::separator\n"
"{\n"
"   	background-color: rgb(183, 134, 32);\n"
"	height: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:disabled\n"
"{\n"
"    color: #555;\n"
"    background-color: transparent;\n"
"    padding: 2px 20px 2px 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"	background-color: rgba(183, 134, 32, 20%);\n"
"	border: 1px solid #b78620;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolBar-----*/\n"
"QToolBar\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0"
                        " rgba(69, 69, 69, 255),stop:1 rgba(58, 58, 58, 255));\n"
"	border-top: none;\n"
"	border-bottom: 1px solid #4f4f4f;\n"
"	border-left: 1px solid #4f4f4f;\n"
"	border-right: 1px solid #4f4f4f;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolBar::separator\n"
"{\n"
"	background-color: #2e2e2e;\n"
"	width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QToolButton-----*/\n"
"QToolButton \n"
"{\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"	padding: 5px;\n"
"	padding-left: 8px;\n"
"	padding-right: 8px;\n"
"	margin-left: 1px;\n"
"}\n"
"\n"
"\n"
"QToolButton:hover\n"
"{\n"
"	background-color: rgba(183, 134, 32, 20%);\n"
"	border: 1px solid #b78620;\n"
"	color: #fff;\n"
"	\n"
"}\n"
"\n"
"\n"
"QToolButton:pressed\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(57, 57, 57, 255),stop:1 rgba(50, 50, 50, 255));\n"
"	border: 1px solid #b78620;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolButton:checked\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(57, 57, 57"
                        ", 255),stop:1 rgba(50, 50, 50, 255));\n"
"	border: 1px solid #222;\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
" background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(84, 84, 84, 255),stop:1 rgba(59, 59, 59, 255));\n"
"	/*background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(84, 84, 84, 255),stop:1 rgba(59, 59, 59, 255));*/\n"
"	/*background-color: #222222;*/\n"
"	/*min-width: 80px;*/\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 2px;\n"
"	border-color: #555555;\n"
"	/*padding: 5px;*/\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::flat\n"
"{\n"
"	background-color: transparent;\n"
"	border: none;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: rgba(183, 134, 32, 20%);\n"
"	border: 1px solid #b78620;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton"
                        "::pressed\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(74, 74, 74, 255),stop:1 rgba(49, 49, 49, 255));\n"
"	border: 1px solid #b78620;\n"
"\n"
"}\n"
"\n"
"\n"
"QPushButton::checked\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(74, 74, 74, 255),stop:1 rgba(49, 49, 49, 255));\n"
"	border: 1px solid #222;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"	background-color: #131313;\n"
"	color : #eee;\n"
"	border: 1px solid #343434;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"	padding-left: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPlainTExtEdit-----*/\n"
"QPlainTextEdit\n"
"{\n"
"	background-color: #131313;\n"
"	color : #eee;\n"
"	border: 1px solid #343434;\n"
"	border-radius: 2px;\n"
"	padding: 3px;\n"
"	padding-left: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTabBar-----*/\n"
"QTabBar::tab\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(84, 84, 84"
                        ", 255),stop:1 rgba(59, 59, 59, 255));\n"
"	color: #ffffff;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-color: #666;\n"
"	border-bottom: none;\n"
"	padding: 5px;\n"
"	padding-left: 15px;\n"
"	padding-right: 15px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabWidget::pane \n"
"{\n"
"	background-color: red;\n"
"	border: 1px solid #666;\n"
"	top: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"	margin-right: 0; \n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
"	background-color: #0c0c0d;\n"
"	margin-left: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"	color: #b1b1b1;\n"
"	border-bottom-style: solid;\n"
"	background-color: #0c0c0d;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"	margin-bottom: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"	border-top-color: #b78620;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QComboBox-----*/\n"
"QComboBox\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(84, 84, 84, 255"
                        "),stop:1 rgba(59, 59, 59, 255));\n"
"    border: 1px solid #000;\n"
"    padding-left: 6px;\n"
"    color: #ffffff;\n"
"    /*height: 20px;*/\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::disabled\n"
"{\n"
"	background-color: #404040;\n"
"	color: #656565;\n"
"	border-color: #051a39;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #b78620;\n"
"	color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    background-color: #383838;\n"
"    color: #ffffff;\n"
"    border: 1px solid black;\n"
"    selection-background-color: #b78620;\n"
"    outline: 0;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(57, 57, 57, 255),stop:1 rgba(50, 50, 50, 255));\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    /*width: 15px;*/\n"
"    border-left-width: 1px;\n"
"    border-left-color: black;\n"
"    border-left-style: solid; \n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow"
                        "\n"
"{\n"
"    /*image: url(://arrow-down.png);*/\n"
"    /*width: 8px;\n"
"    height: 8px;*/\n"
"}\n"
"\n"
"\n"
"/*-----QSpinBox & QDateTimeEdit-----*/\n"
"QSpinBox,\n"
"QDateTimeEdit \n"
"{\n"
"    background-color: #131313;\n"
"	color : #eee;\n"
"	border: 1px solid #343434;\n"
"	padding: 3px;\n"
"	padding-left: 5px;\n"
"    border-radius : 2px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button, \n"
"QDateTimeEdit::up-button\n"
"{\n"
"	border-top-right-radius:2px;\n"
"	background-color: #777777;\n"
"    /*width: 16px; */\n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:hover, \n"
"QDateTimeEdit::up-button:hover\n"
"{\n"
"	background-color: #585858;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::up-button:pressed, \n"
"QDateTimeEdit::up-button:pressed\n"
"{\n"
"	background-color: #252525;\n"
"    width: 16px; \n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*QSpinBox::up-arrow,\n"
"QDateTimeEdit::up-arrow\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"\n"
""
                        "}*/\n"
"\n"
"\n"
"QSpinBox::down-button, \n"
"QDateTimeEdit::down-button\n"
"{\n"
"	border-bottom-right-radius:2px;\n"
"	background-color: #777777;\n"
"    /*width: 16px; */\n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-button:hover, \n"
"QDateTimeEdit::down-button:hover\n"
"{\n"
"	background-color: #585858;\n"
"\n"
"}\n"
"\n"
"\n"
"QSpinBox::down-button:pressed, \n"
"QDateTimeEdit::down-button:pressed\n"
"{\n"
"	background-color: #252525;\n"
"    /*width: 16px; */\n"
"    border-width: 1px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*QSpinBox::down-arrow,\n"
"QDateTimeEdit::down-arrow\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 7px;\n"
"    height: 7px;\n"
"\n"
"}*/\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"    border: 1px solid;\n"
"    border-color: #666666;\n"
"	border-radius: 5px;\n"
"    margin-top: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QGroupBox::title  \n"
"{\n"
"    background-color: transparent;\n"
"    color: #eee;\n"
"    subcontrol-origin: margin;\n"
"    padding:"
                        " 5px;\n"
"	border-top-left-radius: 3px;\n"
"	border-top-right-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QHeaderView-----*/\n"
"QHeaderView::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(60, 60, 60, 255),stop:1 rgba(50, 50, 50, 255));\n"
"	border: 1px solid #000;\n"
"    color: #fff;\n"
"    text-align: left;\n"
"	padding: 4px;\n"
"	\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:disabled\n"
"{\n"
"    background-color: #525251;\n"
"    color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section:checked\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(60, 60, 60, 255),stop:1 rgba(50, 50, 50, 255));\n"
"    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical::first,\n"
"QHeaderView::section::vertical::only-one\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::vertical\n"
"{\n"
"    border-top: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderVi"
                        "ew::section::horizontal::first,\n"
"QHeaderView::section::horizontal::only-one\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QHeaderView::section::horizontal\n"
"{\n"
"    border-left: 1px solid #353635;\n"
"\n"
"}\n"
"\n"
"\n"
"QTableCornerButton::section\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(60, 60, 60, 255),stop:1 rgba(50, 50, 50, 255));\n"
"	border: 1px solid #000;\n"
"    color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QTreeWidget-----*/\n"
"QTreeView\n"
"{\n"
"	show-decoration-selected: 1;\n"
"	alternate-background-color: #3a3a3a;\n"
"	selection-color: #fff;\n"
"	background-color: #2d2d2d;\n"
"	border: 1px solid gray;\n"
"	padding-top : 5px;\n"
"	color: #fff;\n"
"	font: 8pt;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:selected\n"
"{\n"
"	color:#fff;\n"
"	background-color: #b78620;\n"
"	border-radius: 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::item:!selected:hover\n"
"{\n"
"    background-color: #262626;\n"
"    border: none;\n"
""
                        "    color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"/*QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings \n"
"{\n"
"	image: url(://tree-closed.png);\n"
"\n"
"}\n"
"\n"
"\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings  \n"
"{\n"
"	image: url(://tree-open.png);\n"
"\n"
"}*/\n"
"\n"
"\n"
"/*-----QListView-----*/\n"
"QListView \n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(83, 83, 83, 255),stop:0.293269 rgba(81, 81, 81, 255),stop:0.634615 rgba(79, 79, 79, 255),stop:1 rgba(83, 83, 83, 255));\n"
"    border : none;\n"
"    color: white;\n"
"    show-decoration-selected: 1; \n"
"    outline: 0;\n"
"	border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::disabled \n"
"{\n"
"	background-color: #656565;\n"
"	color: #1b1b1b;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item \n"
"{\n"
"	background-color: #2d2d2d;\n"
"    padding: 1px;\n"
""
                        "\n"
"}\n"
"\n"
"\n"
"QListView::item:alternate \n"
"{\n"
"    background-color: #3a3a3a;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:selected \n"
"{\n"
"	background-color: #b78620;\n"
"	border: 1px solid #b78620;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:selected:!active \n"
"{\n"
"	background-color: #b78620;\n"
"	border: 1px solid #b78620;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:selected:active \n"
"{\n"
"	background-color: #b78620;\n"
"	border: 1px solid #b78620;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"QListView::item:hover {\n"
"    background-color: #262626;\n"
"    border: none;\n"
"    color: white;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QCheckBox-----*/\n"
"QCheckBox\n"
"{\n"
"	background-color: transparent;\n"
"    color: lightgray;\n"
"	border: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator\n"
"{\n"
"    background-color: #323232;\n"
"    border: 1px solid darkgray;\n"
"    /*width: 12px;\n"
"    height: 12px;*/\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:checked\n"
""
                        "{\n"
"    image:url(\"./ressources/check.png\");\n"
"	background-color: #b78620;\n"
"    border: 1px solid #3a546e;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:unchecked:hover\n"
"{\n"
"	border: 1px solid #b78620; \n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::disabled\n"
"{\n"
"	color: #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled\n"
"{\n"
"	background-color: #656565;\n"
"	color: #656565;\n"
"    border: 1px solid #656565;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QRadioButton-----*/\n"
"QRadioButton \n"
"{\n"
"	color: lightgray;\n"
"	background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked:hover \n"
"{\n"
"	background-color: lightgray;\n"
"	border: 2px solid #b78620;\n"
"	border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::checked \n"
"{\n"
"	border: 2px solid #b78620;\n"
"	border-radius: 6px;\n"
"	background-color: rgba(183,134,32,20%);  \n"
"	/*width: 9px; \n"
"	height: 9px; */\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QSlider-----*/\n"
"QSlider::groove:horizontal \n"
""
                        "{\n"
"	background-color: transparent;\n"
"	height: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal \n"
"{\n"
"	background-color: #b78620;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal \n"
"{\n"
"	background-color: #131313;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal \n"
"{\n"
"	background-color: #b78620;\n"
"	width: 14px;\n"
"	margin-top: -6px;\n"
"	margin-bottom: -6px;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:hover \n"
"{\n"
"	background-color: #d89e25;\n"
"	border-radius: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::sub-page:horizontal:disabled \n"
"{\n"
"	background-color: #bbb;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border-color: #999;\n"
"\n"
"}\n"
"\n"
"\n"
"QSlider::handle:horizontal:disabled \n"
"{\n"
"	background-color: #eee;\n"
"	border: 1px solid #aaa;\n"
"	border-radius: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QScrollBar-----*/\n"
"QScrollBar:horizontal\n"
""
                        "{\n"
"    border: 1px solid #222222;\n"
"    background-color: #3d3d3d;\n"
"    height: 15px;\n"
"    margin: 0px 16px 0 16px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(97, 97, 97, 255),stop:1 rgba(90, 90, 90, 255));\n"
"	border: 1px solid #2d2d2d;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:horizontal\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(97, 97, 97, 255),stop:1 rgba(90, 90, 90, 255));\n"
"	border: 1px solid #2d2d2d;\n"
"    width: 15px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:horizontal\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(97, 97, 97, 255),stop:1 rgba(90, 90, 90, 255));\n"
"	border: 1px solid #2d2d2d;\n"
"    width: 15px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: "
                        "margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::right-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-right.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::left-arrow:horizontal\n"
"{\n"
"    image: url(://arrow-left.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"    background-color: #3d3d3d;\n"
"    width: 16px;\n"
"	border: 1px solid #2d2d2d;\n"
"    margin: 16px 0px 16px 0px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"    background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(97, 97, 97, 255),stop:1 rgba(90, 90, 90, 255));\n"
"	border: 1px solid #2d2d2d;\n"
"    min-height: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(97, 97, 97, 255),sto"
                        "p:1 rgba(90, 90, 90, 255));\n"
"	border: 1px solid #2d2d2d;\n"
"    height: 15px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"	background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(97, 97, 97, 255),stop:1 rgba(90, 90, 90, 255));\n"
"	border: 1px solid #2d2d2d;\n"
"    height: 15px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::up-arrow:vertical\n"
"{\n"
"    image: url(://arrow-up.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::down-arrow:vertical\n"
"{\n"
"    image: url(://arrow-down.png);\n"
"    width: 6px;\n"
"    height: 6px;\n"
"\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"    background: none;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QProgressBar-----*/\n"
"QProgressBar\n"
"{\n"
"    border: 1px solid #666666;\n"
"    text-align: center;\n"
"	color:"
                        " #000;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #b78620;\n"
"    width: 30px;\n"
"    margin: 0.5px;\n"
"\n"
"}\n"
"\n"
"\n"
"QToolBox\n"
"{\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 3px;\n"
"	border-color: #666666;\n"
"}"));
        actionExit = new QAction(Download_and_ClipClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        menu_actionThemeLight = new QAction(Download_and_ClipClass);
        menu_actionThemeLight->setObjectName(QString::fromUtf8("menu_actionThemeLight"));
        menu_actionThemeLight->setCheckable(true);
        menu_actionThemeDark = new QAction(Download_and_ClipClass);
        menu_actionThemeDark->setObjectName(QString::fromUtf8("menu_actionThemeDark"));
        menu_actionThemeDark->setCheckable(true);
        menu_actionExit = new QAction(Download_and_ClipClass);
        menu_actionExit->setObjectName(QString::fromUtf8("menu_actionExit"));
        menu_setting_scroll_focus = new QAction(Download_and_ClipClass);
        menu_setting_scroll_focus->setObjectName(QString::fromUtf8("menu_setting_scroll_focus"));
        menu_setting_scroll_focus->setCheckable(true);
        menu_setting_expand_default = new QAction(Download_and_ClipClass);
        menu_setting_expand_default->setObjectName(QString::fromUtf8("menu_setting_expand_default"));
        menu_setting_expand_default->setCheckable(true);
        menu_exit = new QAction(Download_and_ClipClass);
        menu_exit->setObjectName(QString::fromUtf8("menu_exit"));
        menu_about = new QAction(Download_and_ClipClass);
        menu_about->setObjectName(QString::fromUtf8("menu_about"));
        menu_task_man = new QAction(Download_and_ClipClass);
        menu_task_man->setObjectName(QString::fromUtf8("menu_task_man"));
        menu_task_man->setCheckable(true);
        centralWidget = new QWidget(Download_and_ClipClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        horizontalLayout_6 = new QHBoxLayout(centralWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        import_toolbox = new QTabWidget(centralWidget);
        import_toolbox->setObjectName(QString::fromUtf8("import_toolbox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(import_toolbox->sizePolicy().hasHeightForWidth());
        import_toolbox->setSizePolicy(sizePolicy1);
        import_toolbox->setMinimumSize(QSize(450, 500));
        import_toolbox->setTabShape(QTabWidget::Rounded);
        import_toolbox->setTabsClosable(false);
        import_toolbox->setTabBarAutoHide(false);
        import_toolboxPage1 = new QWidget();
        import_toolboxPage1->setObjectName(QString::fromUtf8("import_toolboxPage1"));
        gridLayout_2 = new QGridLayout(import_toolboxPage1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        setup_ytdl_label = new QLabel(import_toolboxPage1);
        setup_ytdl_label->setObjectName(QString::fromUtf8("setup_ytdl_label"));

        gridLayout_2->addWidget(setup_ytdl_label, 0, 0, 1, 2);

        setup_ytdl_lineedit = new QLineEdit(import_toolboxPage1);
        setup_ytdl_lineedit->setObjectName(QString::fromUtf8("setup_ytdl_lineedit"));
        setup_ytdl_lineedit->setReadOnly(true);

        gridLayout_2->addWidget(setup_ytdl_lineedit, 0, 2, 1, 1);

        setup_ytdl_button = new QPushButton(import_toolboxPage1);
        setup_ytdl_button->setObjectName(QString::fromUtf8("setup_ytdl_button"));
        setup_ytdl_button->setMinimumSize(QSize(60, 24));

        gridLayout_2->addWidget(setup_ytdl_button, 0, 3, 1, 1);

        setup_ffprobe_label = new QLabel(import_toolboxPage1);
        setup_ffprobe_label->setObjectName(QString::fromUtf8("setup_ffprobe_label"));

        gridLayout_2->addWidget(setup_ffprobe_label, 1, 0, 1, 1);

        setup_ffprobe_button = new QPushButton(import_toolboxPage1);
        setup_ffprobe_button->setObjectName(QString::fromUtf8("setup_ffprobe_button"));
        setup_ffprobe_button->setMinimumSize(QSize(60, 24));

        gridLayout_2->addWidget(setup_ffprobe_button, 1, 3, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_8, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        setup_show_working_dir = new QPushButton(import_toolboxPage1);
        setup_show_working_dir->setObjectName(QString::fromUtf8("setup_show_working_dir"));
        setup_show_working_dir->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(setup_show_working_dir);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        setup_show_output_dir = new QPushButton(import_toolboxPage1);
        setup_show_output_dir->setObjectName(QString::fromUtf8("setup_show_output_dir"));
        setup_show_output_dir->setMinimumSize(QSize(0, 24));

        horizontalLayout->addWidget(setup_show_output_dir);


        gridLayout_2->addLayout(horizontalLayout, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 2, 1, 1);

        setup_ffprobe_lineedit = new QLineEdit(import_toolboxPage1);
        setup_ffprobe_lineedit->setObjectName(QString::fromUtf8("setup_ffprobe_lineedit"));
        setup_ffprobe_lineedit->setReadOnly(true);

        gridLayout_2->addWidget(setup_ffprobe_lineedit, 1, 2, 1, 1);

        import_toolbox->addTab(import_toolboxPage1, QString());
        import_toolboxPage2 = new QWidget();
        import_toolboxPage2->setObjectName(QString::fromUtf8("import_toolboxPage2"));
        gridLayout = new QGridLayout(import_toolboxPage2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        download_image = new QLabel(import_toolboxPage2);
        download_image->setObjectName(QString::fromUtf8("download_image"));
        sizePolicy.setHeightForWidth(download_image->sizePolicy().hasHeightForWidth());
        download_image->setSizePolicy(sizePolicy);
        download_image->setMinimumSize(QSize(165, 92));
        download_image->setMaximumSize(QSize(165, 92));
        download_image->setScaledContents(true);

        horizontalLayout_4->addWidget(download_image);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        download_video_gif = new QLabel(import_toolboxPage2);
        download_video_gif->setObjectName(QString::fromUtf8("download_video_gif"));
        sizePolicy.setHeightForWidth(download_video_gif->sizePolicy().hasHeightForWidth());
        download_video_gif->setSizePolicy(sizePolicy);
        download_video_gif->setMinimumSize(QSize(18, 18));
        download_video_gif->setScaledContents(true);
        download_video_gif->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(download_video_gif);

        download_thumb_gif = new QLabel(import_toolboxPage2);
        download_thumb_gif->setObjectName(QString::fromUtf8("download_thumb_gif"));
        sizePolicy.setHeightForWidth(download_thumb_gif->sizePolicy().hasHeightForWidth());
        download_thumb_gif->setSizePolicy(sizePolicy);
        download_thumb_gif->setMinimumSize(QSize(18, 18));
        download_thumb_gif->setScaledContents(true);
        download_thumb_gif->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(download_thumb_gif);

        download_description_gif = new QLabel(import_toolboxPage2);
        download_description_gif->setObjectName(QString::fromUtf8("download_description_gif"));
        sizePolicy.setHeightForWidth(download_description_gif->sizePolicy().hasHeightForWidth());
        download_description_gif->setSizePolicy(sizePolicy);
        download_description_gif->setMinimumSize(QSize(18, 18));
        download_description_gif->setScaledContents(true);
        download_description_gif->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(download_description_gif);

        download_probe_gif = new QLabel(import_toolboxPage2);
        download_probe_gif->setObjectName(QString::fromUtf8("download_probe_gif"));
        sizePolicy.setHeightForWidth(download_probe_gif->sizePolicy().hasHeightForWidth());
        download_probe_gif->setSizePolicy(sizePolicy);
        download_probe_gif->setMinimumSize(QSize(18, 18));
        download_probe_gif->setScaledContents(true);
        download_probe_gif->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(download_probe_gif);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        download_check_video = new QCheckBox(import_toolboxPage2);
        download_check_video->setObjectName(QString::fromUtf8("download_check_video"));
        download_check_video->setEnabled(true);
        download_check_video->setMinimumSize(QSize(80, 18));

        verticalLayout_2->addWidget(download_check_video);

        download_check_thumb = new QCheckBox(import_toolboxPage2);
        download_check_thumb->setObjectName(QString::fromUtf8("download_check_thumb"));
        download_check_thumb->setEnabled(true);
        download_check_thumb->setMinimumSize(QSize(80, 18));

        verticalLayout_2->addWidget(download_check_thumb);

        download_check_description = new QCheckBox(import_toolboxPage2);
        download_check_description->setObjectName(QString::fromUtf8("download_check_description"));
        download_check_description->setEnabled(true);
        download_check_description->setMinimumSize(QSize(80, 18));

        verticalLayout_2->addWidget(download_check_description);

        download_check_probe = new QCheckBox(import_toolboxPage2);
        download_check_probe->setObjectName(QString::fromUtf8("download_check_probe"));
        download_check_probe->setEnabled(true);
        download_check_probe->setMinimumSize(QSize(80, 18));

        verticalLayout_2->addWidget(download_check_probe);


        horizontalLayout_4->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 3);

        download_label = new QLabel(import_toolboxPage2);
        download_label->setObjectName(QString::fromUtf8("download_label"));

        gridLayout->addWidget(download_label, 1, 0, 1, 1);

        download_table = new QTableWidget(import_toolboxPage2);
        if (download_table->columnCount() < 1)
            download_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        download_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (download_table->rowCount() < 3)
            download_table->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        download_table->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        download_table->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        download_table->setVerticalHeaderItem(2, __qtablewidgetitem3);
        download_table->setObjectName(QString::fromUtf8("download_table"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(download_table->sizePolicy().hasHeightForWidth());
        download_table->setSizePolicy(sizePolicy2);
        download_table->setMinimumSize(QSize(0, 150));
        download_table->setMaximumSize(QSize(16777215, 16777215));
        download_table->setInputMethodHints(Qt::ImhNoEditMenu);
        download_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        download_table->setAlternatingRowColors(false);
        download_table->setCornerButtonEnabled(false);
        download_table->horizontalHeader()->setVisible(false);
        download_table->horizontalHeader()->setCascadingSectionResizes(false);
        download_table->horizontalHeader()->setHighlightSections(false);
        download_table->horizontalHeader()->setStretchLastSection(true);
        download_table->verticalHeader()->setCascadingSectionResizes(false);
        download_table->verticalHeader()->setMinimumSectionSize(25);
        download_table->verticalHeader()->setDefaultSectionSize(25);
        download_table->verticalHeader()->setHighlightSections(false);

        gridLayout->addWidget(download_table, 4, 0, 1, 3);

        download_status = new QTextEdit(import_toolboxPage2);
        download_status->setObjectName(QString::fromUtf8("download_status"));
        download_status->setEnabled(true);
        sizePolicy2.setHeightForWidth(download_status->sizePolicy().hasHeightForWidth());
        download_status->setSizePolicy(sizePolicy2);
        download_status->setMaximumSize(QSize(16777215, 16777215));
        download_status->setLineWrapMode(QTextEdit::NoWrap);
        download_status->setReadOnly(true);

        gridLayout->addWidget(download_status, 7, 0, 2, 3);

        verticalSpacer_4 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        download_button = new QPushButton(import_toolboxPage2);
        download_button->setObjectName(QString::fromUtf8("download_button"));
        download_button->setMinimumSize(QSize(65, 24));

        gridLayout->addWidget(download_button, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        download_linedit = new QLineEdit(import_toolboxPage2);
        download_linedit->setObjectName(QString::fromUtf8("download_linedit"));
        download_linedit->setReadOnly(false);

        gridLayout->addWidget(download_linedit, 1, 1, 1, 1);

        download_button_focus = new QPushButton(import_toolboxPage2);
        download_button_focus->setObjectName(QString::fromUtf8("download_button_focus"));
        sizePolicy.setHeightForWidth(download_button_focus->sizePolicy().hasHeightForWidth());
        download_button_focus->setSizePolicy(sizePolicy);
        download_button_focus->setMinimumSize(QSize(60, 24));
        download_button_focus->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(download_button_focus, 5, 2, 1, 1);

        import_toolbox->addTab(import_toolboxPage2, QString());
        import_toolboxPage3 = new QWidget();
        import_toolboxPage3->setObjectName(QString::fromUtf8("import_toolboxPage3"));
        gridLayout_4 = new QGridLayout(import_toolboxPage3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        local_lineedit = new QLineEdit(import_toolboxPage3);
        local_lineedit->setObjectName(QString::fromUtf8("local_lineedit"));
        local_lineedit->setReadOnly(true);

        gridLayout_4->addWidget(local_lineedit, 1, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout_4->addItem(verticalSpacer_6, 7, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_5, 0, 1, 1, 1);

        local_label = new QLabel(import_toolboxPage3);
        local_label->setObjectName(QString::fromUtf8("local_label"));

        gridLayout_4->addWidget(local_label, 1, 0, 1, 1);

        local_table = new QTableWidget(import_toolboxPage3);
        if (local_table->columnCount() < 1)
            local_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        local_table->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        if (local_table->rowCount() < 3)
            local_table->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        local_table->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        local_table->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        local_table->setVerticalHeaderItem(2, __qtablewidgetitem7);
        local_table->setObjectName(QString::fromUtf8("local_table"));
        sizePolicy2.setHeightForWidth(local_table->sizePolicy().hasHeightForWidth());
        local_table->setSizePolicy(sizePolicy2);
        local_table->setMinimumSize(QSize(0, 92));
        local_table->setMaximumSize(QSize(16777215, 16777215));
        local_table->setInputMethodHints(Qt::ImhNoEditMenu);
        local_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        local_table->setAlternatingRowColors(false);
        local_table->setCornerButtonEnabled(false);
        local_table->horizontalHeader()->setVisible(false);
        local_table->horizontalHeader()->setCascadingSectionResizes(false);
        local_table->horizontalHeader()->setHighlightSections(false);
        local_table->horizontalHeader()->setStretchLastSection(true);
        local_table->verticalHeader()->setCascadingSectionResizes(false);
        local_table->verticalHeader()->setMinimumSectionSize(25);
        local_table->verticalHeader()->setDefaultSectionSize(25);
        local_table->verticalHeader()->setHighlightSections(false);

        gridLayout_4->addWidget(local_table, 5, 0, 1, 3);

        local_load = new QPushButton(import_toolboxPage3);
        local_load->setObjectName(QString::fromUtf8("local_load"));
        local_load->setMinimumSize(QSize(60, 24));

        gridLayout_4->addWidget(local_load, 2, 2, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        local_image = new QLabel(import_toolboxPage3);
        local_image->setObjectName(QString::fromUtf8("local_image"));
        sizePolicy.setHeightForWidth(local_image->sizePolicy().hasHeightForWidth());
        local_image->setSizePolicy(sizePolicy);
        local_image->setMinimumSize(QSize(165, 92));
        local_image->setMaximumSize(QSize(165, 92));
        local_image->setScaledContents(true);

        horizontalLayout_5->addWidget(local_image);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        local_video_gif = new QLabel(import_toolboxPage3);
        local_video_gif->setObjectName(QString::fromUtf8("local_video_gif"));
        sizePolicy.setHeightForWidth(local_video_gif->sizePolicy().hasHeightForWidth());
        local_video_gif->setSizePolicy(sizePolicy);
        local_video_gif->setMinimumSize(QSize(18, 18));
        local_video_gif->setScaledContents(true);
        local_video_gif->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(local_video_gif);

        local_thumb_gif = new QLabel(import_toolboxPage3);
        local_thumb_gif->setObjectName(QString::fromUtf8("local_thumb_gif"));
        sizePolicy.setHeightForWidth(local_thumb_gif->sizePolicy().hasHeightForWidth());
        local_thumb_gif->setSizePolicy(sizePolicy);
        local_thumb_gif->setMinimumSize(QSize(18, 18));
        local_thumb_gif->setScaledContents(true);
        local_thumb_gif->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(local_thumb_gif);

        local_probe_gif = new QLabel(import_toolboxPage3);
        local_probe_gif->setObjectName(QString::fromUtf8("local_probe_gif"));
        sizePolicy.setHeightForWidth(local_probe_gif->sizePolicy().hasHeightForWidth());
        local_probe_gif->setSizePolicy(sizePolicy);
        local_probe_gif->setMinimumSize(QSize(18, 18));
        local_probe_gif->setScaledContents(true);
        local_probe_gif->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(local_probe_gif);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        local_check_video = new QCheckBox(import_toolboxPage3);
        local_check_video->setObjectName(QString::fromUtf8("local_check_video"));
        local_check_video->setEnabled(true);
        local_check_video->setMinimumSize(QSize(80, 18));

        verticalLayout_5->addWidget(local_check_video);

        local_check_thumb = new QCheckBox(import_toolboxPage3);
        local_check_thumb->setObjectName(QString::fromUtf8("local_check_thumb"));
        local_check_thumb->setEnabled(true);
        local_check_thumb->setMinimumSize(QSize(80, 18));
        local_check_thumb->setTristate(false);

        verticalLayout_5->addWidget(local_check_thumb);

        local_check_probe = new QCheckBox(import_toolboxPage3);
        local_check_probe->setObjectName(QString::fromUtf8("local_check_probe"));
        local_check_probe->setEnabled(true);
        local_check_probe->setMinimumSize(QSize(80, 18));

        verticalLayout_5->addWidget(local_check_probe);


        horizontalLayout_5->addLayout(verticalLayout_5);


        gridLayout_4->addLayout(horizontalLayout_5, 3, 0, 1, 3);

        local_status = new QTextEdit(import_toolboxPage3);
        local_status->setObjectName(QString::fromUtf8("local_status"));
        local_status->setMaximumSize(QSize(16777215, 16777215));
        local_status->setLineWrapMode(QTextEdit::NoWrap);
        local_status->setReadOnly(true);

        gridLayout_4->addWidget(local_status, 8, 0, 1, 3);

        local_button = new QPushButton(import_toolboxPage3);
        local_button->setObjectName(QString::fromUtf8("local_button"));
        local_button->setMinimumSize(QSize(60, 24));

        gridLayout_4->addWidget(local_button, 1, 2, 1, 1);

        local_button_focus = new QPushButton(import_toolboxPage3);
        local_button_focus->setObjectName(QString::fromUtf8("local_button_focus"));
        sizePolicy.setHeightForWidth(local_button_focus->sizePolicy().hasHeightForWidth());
        local_button_focus->setSizePolicy(sizePolicy);
        local_button_focus->setMinimumSize(QSize(60, 24));
        local_button_focus->setMaximumSize(QSize(80, 16777215));

        gridLayout_4->addWidget(local_button_focus, 6, 2, 1, 1);

        import_toolbox->addTab(import_toolboxPage3, QString());

        horizontalLayout_6->addWidget(import_toolbox);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        expand_left = new QPushButton(centralWidget);
        expand_left->setObjectName(QString::fromUtf8("expand_left"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(expand_left->sizePolicy().hasHeightForWidth());
        expand_left->setSizePolicy(sizePolicy3);
        expand_left->setMinimumSize(QSize(18, 20));
        expand_left->setMaximumSize(QSize(20, 16777215));
        expand_left->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(expand_left);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        groupBox->setMinimumSize(QSize(350, 0));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 20, -1, -1);
        focus_image = new QLabel(groupBox);
        focus_image->setObjectName(QString::fromUtf8("focus_image"));
        sizePolicy.setHeightForWidth(focus_image->sizePolicy().hasHeightForWidth());
        focus_image->setSizePolicy(sizePolicy);
        focus_image->setMinimumSize(QSize(330, 185));
        focus_image->setMaximumSize(QSize(330, 185));
        focus_image->setScaledContents(true);

        verticalLayout->addWidget(focus_image);

        focus_lineedit = new QLineEdit(groupBox);
        focus_lineedit->setObjectName(QString::fromUtf8("focus_lineedit"));
        focus_lineedit->setEnabled(true);
        focus_lineedit->setReadOnly(true);

        verticalLayout->addWidget(focus_lineedit);

        focus_table = new QTableWidget(groupBox);
        if (focus_table->columnCount() < 1)
            focus_table->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        focus_table->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        if (focus_table->rowCount() < 3)
            focus_table->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        focus_table->setVerticalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        focus_table->setVerticalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        focus_table->setVerticalHeaderItem(2, __qtablewidgetitem11);
        focus_table->setObjectName(QString::fromUtf8("focus_table"));
        focus_table->setInputMethodHints(Qt::ImhNoEditMenu);
        focus_table->setAlternatingRowColors(false);
        focus_table->horizontalHeader()->setVisible(false);
        focus_table->horizontalHeader()->setHighlightSections(false);
        focus_table->horizontalHeader()->setStretchLastSection(true);
        focus_table->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(focus_table);

        setup_status = new QTextEdit(groupBox);
        setup_status->setObjectName(QString::fromUtf8("setup_status"));
        setup_status->setEnabled(true);
        setup_status->setMinimumSize(QSize(0, 60));
        setup_status->setMaximumSize(QSize(16777215, 16777215));
        setup_status->setLineWrapMode(QTextEdit::NoWrap);
        setup_status->setReadOnly(true);

        verticalLayout->addWidget(setup_status);


        horizontalLayout_2->addWidget(groupBox);

        expand_right = new QPushButton(centralWidget);
        expand_right->setObjectName(QString::fromUtf8("expand_right"));
        sizePolicy3.setHeightForWidth(expand_right->sizePolicy().hasHeightForWidth());
        expand_right->setSizePolicy(sizePolicy3);
        expand_right->setMinimumSize(QSize(18, 0));
        expand_right->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_2->addWidget(expand_right);


        verticalLayout_6->addLayout(horizontalLayout_2);

        expand_both = new QPushButton(centralWidget);
        expand_both->setObjectName(QString::fromUtf8("expand_both"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(expand_both->sizePolicy().hasHeightForWidth());
        expand_both->setSizePolicy(sizePolicy5);
        expand_both->setMinimumSize(QSize(0, 18));
        expand_both->setMaximumSize(QSize(16777215, 16777215));
        expand_both->setFlat(false);

        verticalLayout_6->addWidget(expand_both);


        horizontalLayout_6->addLayout(verticalLayout_6);

        export_toolbox = new QTabWidget(centralWidget);
        export_toolbox->setObjectName(QString::fromUtf8("export_toolbox"));
        export_toolbox->setEnabled(true);
        sizePolicy1.setHeightForWidth(export_toolbox->sizePolicy().hasHeightForWidth());
        export_toolbox->setSizePolicy(sizePolicy1);
        export_toolbox->setMinimumSize(QSize(450, 450));
        export_toolbox->setMaximumSize(QSize(16777215, 16777215));
        export_toolboxPage1 = new QWidget();
        export_toolboxPage1->setObjectName(QString::fromUtf8("export_toolboxPage1"));
        gridLayout_6 = new QGridLayout(export_toolboxPage1);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        setup_ffmpeg_label = new QLabel(export_toolboxPage1);
        setup_ffmpeg_label->setObjectName(QString::fromUtf8("setup_ffmpeg_label"));

        gridLayout_6->addWidget(setup_ffmpeg_label, 0, 0, 1, 1);

        setup_ffmpeg_lineedit = new QLineEdit(export_toolboxPage1);
        setup_ffmpeg_lineedit->setObjectName(QString::fromUtf8("setup_ffmpeg_lineedit"));
        setup_ffmpeg_lineedit->setReadOnly(true);

        gridLayout_6->addWidget(setup_ffmpeg_lineedit, 0, 1, 1, 1);

        setup_ffmpeg_button = new QPushButton(export_toolboxPage1);
        setup_ffmpeg_button->setObjectName(QString::fromUtf8("setup_ffmpeg_button"));
        setup_ffmpeg_button->setMinimumSize(QSize(60, 24));

        gridLayout_6->addWidget(setup_ffmpeg_button, 0, 2, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_9, 1, 1, 1, 1);

        export_toolbox->addTab(export_toolboxPage1, QString());
        export_toolboxPage2 = new QWidget();
        export_toolboxPage2->setObjectName(QString::fromUtf8("export_toolboxPage2"));
        gridLayout_5 = new QGridLayout(export_toolboxPage2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        encode_video_status = new QTextEdit(export_toolboxPage2);
        encode_video_status->setObjectName(QString::fromUtf8("encode_video_status"));
        encode_video_status->setEnabled(true);
        sizePolicy2.setHeightForWidth(encode_video_status->sizePolicy().hasHeightForWidth());
        encode_video_status->setSizePolicy(sizePolicy2);
        encode_video_status->setMaximumSize(QSize(16777215, 16777215));
        encode_video_status->setLineWrapMode(QTextEdit::NoWrap);
        encode_video_status->setReadOnly(true);

        gridLayout_5->addWidget(encode_video_status, 13, 0, 1, 3);

        verticalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_11, 2, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_10, 12, 1, 1, 1);

        encode_video_combo = new QComboBox(export_toolboxPage2);
        encode_video_combo->addItem(QString());
        encode_video_combo->addItem(QString());
        encode_video_combo->addItem(QString());
        encode_video_combo->setObjectName(QString::fromUtf8("encode_video_combo"));
        encode_video_combo->setMinimumSize(QSize(60, 24));

        gridLayout_5->addWidget(encode_video_combo, 1, 2, 1, 1);

        encode_video_lineedit_filename = new QLineEdit(export_toolboxPage2);
        encode_video_lineedit_filename->setObjectName(QString::fromUtf8("encode_video_lineedit_filename"));
        encode_video_lineedit_filename->setReadOnly(false);
        encode_video_lineedit_filename->setClearButtonEnabled(false);

        gridLayout_5->addWidget(encode_video_lineedit_filename, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(export_toolboxPage2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy6);
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_7->addWidget(horizontalSlider, 1, 0, 1, 3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        encode_video_starttime = new QLineEdit(groupBox_2);
        encode_video_starttime->setObjectName(QString::fromUtf8("encode_video_starttime"));
        encode_video_starttime->setEnabled(true);

        horizontalLayout_3->addWidget(encode_video_starttime);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        encode_video_endtime = new QLineEdit(groupBox_2);
        encode_video_endtime->setObjectName(QString::fromUtf8("encode_video_endtime"));
        encode_video_endtime->setEnabled(true);

        horizontalLayout_3->addWidget(encode_video_endtime);


        gridLayout_7->addLayout(horizontalLayout_3, 2, 0, 1, 3);

        encode_video_image = new QLabel(groupBox_2);
        encode_video_image->setObjectName(QString::fromUtf8("encode_video_image"));
        encode_video_image->setEnabled(true);
        encode_video_image->setMinimumSize(QSize(330, 185));
        encode_video_image->setMaximumSize(QSize(330, 185));
        encode_video_image->setScaledContents(true);
        encode_video_image->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(encode_video_image, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 9, 0, 1, 3);

        encode_video_go = new QPushButton(export_toolboxPage2);
        encode_video_go->setObjectName(QString::fromUtf8("encode_video_go"));
        encode_video_go->setMinimumSize(QSize(0, 24));

        gridLayout_5->addWidget(encode_video_go, 11, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_12, 4, 1, 1, 1);

        encode_label_2 = new QLabel(export_toolboxPage2);
        encode_label_2->setObjectName(QString::fromUtf8("encode_label_2"));

        gridLayout_5->addWidget(encode_label_2, 1, 0, 1, 1);

        encode_video_lineedit_directory = new QLineEdit(export_toolboxPage2);
        encode_video_lineedit_directory->setObjectName(QString::fromUtf8("encode_video_lineedit_directory"));
        encode_video_lineedit_directory->setReadOnly(true);
        encode_video_lineedit_directory->setClearButtonEnabled(false);

        gridLayout_5->addWidget(encode_video_lineedit_directory, 0, 1, 1, 1);

        encode_video_browse = new QPushButton(export_toolboxPage2);
        encode_video_browse->setObjectName(QString::fromUtf8("encode_video_browse"));
        encode_video_browse->setMinimumSize(QSize(60, 24));

        gridLayout_5->addWidget(encode_video_browse, 0, 2, 1, 1);

        encode_label = new QLabel(export_toolboxPage2);
        encode_label->setObjectName(QString::fromUtf8("encode_label"));

        gridLayout_5->addWidget(encode_label, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_quality_smallest = new QLabel(export_toolboxPage2);
        label_quality_smallest->setObjectName(QString::fromUtf8("label_quality_smallest"));
        label_quality_smallest->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_quality_smallest, 2, 0, 1, 1);

        label_7 = new QLabel(export_toolboxPage2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout_3->addWidget(label_7, 2, 1, 1, 1);

        encode_video_spinbox = new QSpinBox(export_toolboxPage2);
        encode_video_spinbox->setObjectName(QString::fromUtf8("encode_video_spinbox"));
        encode_video_spinbox->setEnabled(true);
        encode_video_spinbox->setMinimumSize(QSize(0, 25));
        encode_video_spinbox->setMaximumSize(QSize(40, 16777215));
        encode_video_spinbox->setMinimum(1);
        encode_video_spinbox->setMaximum(64);
        encode_video_spinbox->setValue(15);

        gridLayout_3->addWidget(encode_video_spinbox, 1, 2, 1, 1);

        encode_video_slider = new QSlider(export_toolboxPage2);
        encode_video_slider->setObjectName(QString::fromUtf8("encode_video_slider"));
        encode_video_slider->setEnabled(true);
        encode_video_slider->setLayoutDirection(Qt::RightToLeft);
        encode_video_slider->setMinimum(0);
        encode_video_slider->setMaximum(51);
        encode_video_slider->setValue(15);
        encode_video_slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(encode_video_slider, 1, 0, 1, 2);


        gridLayout_5->addLayout(gridLayout_3, 3, 0, 1, 3);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_7, 10, 1, 1, 1);

        export_toolbox->addTab(export_toolboxPage2, QString());
        export_toolboxPage3 = new QWidget();
        export_toolboxPage3->setObjectName(QString::fromUtf8("export_toolboxPage3"));
        verticalLayout_7 = new QVBoxLayout(export_toolboxPage3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        encode_audio_label_3 = new QLabel(export_toolboxPage3);
        encode_audio_label_3->setObjectName(QString::fromUtf8("encode_audio_label_3"));

        gridLayout_8->addWidget(encode_audio_label_3, 0, 0, 1, 1);

        encode_audio_lineedit_directory = new QLineEdit(export_toolboxPage3);
        encode_audio_lineedit_directory->setObjectName(QString::fromUtf8("encode_audio_lineedit_directory"));
        encode_audio_lineedit_directory->setReadOnly(true);
        encode_audio_lineedit_directory->setClearButtonEnabled(false);

        gridLayout_8->addWidget(encode_audio_lineedit_directory, 0, 1, 1, 1);

        encode_audio_browse = new QPushButton(export_toolboxPage3);
        encode_audio_browse->setObjectName(QString::fromUtf8("encode_audio_browse"));
        encode_audio_browse->setMinimumSize(QSize(60, 24));

        gridLayout_8->addWidget(encode_audio_browse, 0, 2, 1, 1);

        encode_audio_label_4 = new QLabel(export_toolboxPage3);
        encode_audio_label_4->setObjectName(QString::fromUtf8("encode_audio_label_4"));

        gridLayout_8->addWidget(encode_audio_label_4, 1, 0, 1, 1);

        encode_audio_lineedit_filename = new QLineEdit(export_toolboxPage3);
        encode_audio_lineedit_filename->setObjectName(QString::fromUtf8("encode_audio_lineedit_filename"));
        encode_audio_lineedit_filename->setReadOnly(false);
        encode_audio_lineedit_filename->setClearButtonEnabled(false);

        gridLayout_8->addWidget(encode_audio_lineedit_filename, 1, 1, 1, 1);

        encode_audio_combo = new QComboBox(export_toolboxPage3);
        encode_audio_combo->addItem(QString());
        encode_audio_combo->addItem(QString());
        encode_audio_combo->addItem(QString());
        encode_audio_combo->addItem(QString());
        encode_audio_combo->setObjectName(QString::fromUtf8("encode_audio_combo"));
        encode_audio_combo->setMinimumSize(QSize(60, 24));

        gridLayout_8->addWidget(encode_audio_combo, 1, 2, 1, 1);


        verticalLayout_7->addLayout(gridLayout_8);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_13);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(export_toolboxPage3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        encode_audio_starttime = new QLineEdit(export_toolboxPage3);
        encode_audio_starttime->setObjectName(QString::fromUtf8("encode_audio_starttime"));
        encode_audio_starttime->setEnabled(true);

        horizontalLayout_7->addWidget(encode_audio_starttime);

        label_4 = new QLabel(export_toolboxPage3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        encode_audio_endtime = new QLineEdit(export_toolboxPage3);
        encode_audio_endtime->setObjectName(QString::fromUtf8("encode_audio_endtime"));
        encode_audio_endtime->setEnabled(true);

        horizontalLayout_7->addWidget(encode_audio_endtime);


        verticalLayout_7->addLayout(horizontalLayout_7);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_7->addItem(verticalSpacer_14);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        encode_audio_go = new QPushButton(export_toolboxPage3);
        encode_audio_go->setObjectName(QString::fromUtf8("encode_audio_go"));
        sizePolicy.setHeightForWidth(encode_audio_go->sizePolicy().hasHeightForWidth());
        encode_audio_go->setSizePolicy(sizePolicy);
        encode_audio_go->setMinimumSize(QSize(60, 24));
        encode_audio_go->setMaximumSize(QSize(60, 24));
        encode_audio_go->setCheckable(false);

        horizontalLayout_8->addWidget(encode_audio_go);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);


        verticalLayout_7->addLayout(horizontalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_7->addItem(verticalSpacer_2);

        encode_audio_status = new QTextEdit(export_toolboxPage3);
        encode_audio_status->setObjectName(QString::fromUtf8("encode_audio_status"));
        encode_audio_status->setMaximumSize(QSize(16777215, 16777215));
        encode_audio_status->setLineWrapMode(QTextEdit::NoWrap);
        encode_audio_status->setReadOnly(true);

        verticalLayout_7->addWidget(encode_audio_status);

        export_toolbox->addTab(export_toolboxPage3, QString());

        horizontalLayout_6->addWidget(export_toolbox);

        Download_and_ClipClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Download_and_ClipClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1348, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTheme = new QMenu(menuBar);
        menuTheme->setObjectName(QString::fromUtf8("menuTheme"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        Download_and_ClipClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTheme->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menu_exit);
        menuTheme->addAction(menu_actionThemeLight);
        menuTheme->addAction(menu_actionThemeDark);
        menuSettings->addAction(menu_setting_scroll_focus);
        menuSettings->addAction(menu_setting_expand_default);
        menuHelp->addAction(menu_task_man);

        retranslateUi(Download_and_ClipClass);

        import_toolbox->setCurrentIndex(1);
        expand_both->setDefault(false);
        export_toolbox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Download_and_ClipClass);
    } // setupUi

    void retranslateUi(QMainWindow *Download_and_ClipClass)
    {
        Download_and_ClipClass->setWindowTitle(QCoreApplication::translate("Download_and_ClipClass", "YesClip", nullptr));
        actionExit->setText(QCoreApplication::translate("Download_and_ClipClass", "Exit", nullptr));
        menu_actionThemeLight->setText(QCoreApplication::translate("Download_and_ClipClass", "Light", nullptr));
        menu_actionThemeDark->setText(QCoreApplication::translate("Download_and_ClipClass", "Dark", nullptr));
        menu_actionExit->setText(QCoreApplication::translate("Download_and_ClipClass", "Exit", nullptr));
        menu_setting_scroll_focus->setText(QCoreApplication::translate("Download_and_ClipClass", "Auto-Scroll When Focus", nullptr));
        menu_setting_expand_default->setText(QCoreApplication::translate("Download_and_ClipClass", "Expand Both Panels by Default", nullptr));
        menu_exit->setText(QCoreApplication::translate("Download_and_ClipClass", "Exit", nullptr));
        menu_about->setText(QCoreApplication::translate("Download_and_ClipClass", "About", nullptr));
        menu_task_man->setText(QCoreApplication::translate("Download_and_ClipClass", "Task Manager", nullptr));
        setup_ytdl_label->setText(QCoreApplication::translate("Download_and_ClipClass", "YouTube-DL: ", nullptr));
        setup_ytdl_button->setText(QCoreApplication::translate("Download_and_ClipClass", "Browse", nullptr));
        setup_ffprobe_label->setText(QCoreApplication::translate("Download_and_ClipClass", "ffprobe: ", nullptr));
        setup_ffprobe_button->setText(QCoreApplication::translate("Download_and_ClipClass", "Browse", nullptr));
        setup_show_working_dir->setText(QCoreApplication::translate("Download_and_ClipClass", "Show Working Dir", nullptr));
        setup_show_output_dir->setText(QCoreApplication::translate("Download_and_ClipClass", "Show Output Dir", nullptr));
        setup_ffprobe_lineedit->setText(QString());
        import_toolbox->setTabText(import_toolbox->indexOf(import_toolboxPage1), QCoreApplication::translate("Download_and_ClipClass", "Setup", nullptr));
        download_image->setText(QCoreApplication::translate("Download_and_ClipClass", "Image", nullptr));
        download_video_gif->setText(QCoreApplication::translate("Download_and_ClipClass", "[ ]", nullptr));
        download_thumb_gif->setText(QCoreApplication::translate("Download_and_ClipClass", "[ ]", nullptr));
        download_description_gif->setText(QCoreApplication::translate("Download_and_ClipClass", "[ ]", nullptr));
        download_probe_gif->setText(QCoreApplication::translate("Download_and_ClipClass", "[ ]", nullptr));
        download_check_video->setText(QCoreApplication::translate("Download_and_ClipClass", "Video", nullptr));
        download_check_thumb->setText(QCoreApplication::translate("Download_and_ClipClass", "Thumbnail", nullptr));
        download_check_description->setText(QCoreApplication::translate("Download_and_ClipClass", "Description", nullptr));
        download_check_probe->setText(QCoreApplication::translate("Download_and_ClipClass", "Info Probe", nullptr));
        download_label->setText(QCoreApplication::translate("Download_and_ClipClass", "URL: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = download_table->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Download_and_ClipClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = download_table->verticalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Download_and_ClipClass", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = download_table->verticalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Download_and_ClipClass", "Duration", nullptr));
        download_button->setText(QCoreApplication::translate("Download_and_ClipClass", "Download", nullptr));
        download_button_focus->setText(QCoreApplication::translate("Download_and_ClipClass", "> Focus >", nullptr));
        import_toolbox->setTabText(import_toolbox->indexOf(import_toolboxPage2), QCoreApplication::translate("Download_and_ClipClass", "Online", nullptr));
        local_label->setText(QCoreApplication::translate("Download_and_ClipClass", "Directory: ", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = local_table->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Download_and_ClipClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = local_table->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Download_and_ClipClass", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = local_table->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Download_and_ClipClass", "Duration", nullptr));
        local_load->setText(QCoreApplication::translate("Download_and_ClipClass", "Load", nullptr));
        local_image->setText(QCoreApplication::translate("Download_and_ClipClass", "Image", nullptr));
        local_video_gif->setText(QCoreApplication::translate("Download_and_ClipClass", "[ ]", nullptr));
        local_thumb_gif->setText(QCoreApplication::translate("Download_and_ClipClass", "[ ]", nullptr));
        local_probe_gif->setText(QCoreApplication::translate("Download_and_ClipClass", "[ ]", nullptr));
        local_check_video->setText(QCoreApplication::translate("Download_and_ClipClass", "Video", nullptr));
        local_check_thumb->setText(QCoreApplication::translate("Download_and_ClipClass", "Thumbnail", nullptr));
        local_check_probe->setText(QCoreApplication::translate("Download_and_ClipClass", "Info Probe", nullptr));
        local_button->setText(QCoreApplication::translate("Download_and_ClipClass", "Browse", nullptr));
        local_button_focus->setText(QCoreApplication::translate("Download_and_ClipClass", "> Focus >", nullptr));
        import_toolbox->setTabText(import_toolbox->indexOf(import_toolboxPage3), QCoreApplication::translate("Download_and_ClipClass", "Local", nullptr));
        expand_left->setText(QCoreApplication::translate("Download_and_ClipClass", "<", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Download_and_ClipClass", "Focused Media", nullptr));
        focus_image->setText(QCoreApplication::translate("Download_and_ClipClass", "Image", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = focus_table->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Download_and_ClipClass", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = focus_table->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Download_and_ClipClass", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = focus_table->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Download_and_ClipClass", "Duration", nullptr));
        expand_right->setText(QCoreApplication::translate("Download_and_ClipClass", ">", nullptr));
        expand_both->setText(QCoreApplication::translate("Download_and_ClipClass", "<                                                                                                                           >", nullptr));
        setup_ffmpeg_label->setText(QCoreApplication::translate("Download_and_ClipClass", "FFmpeg: ", nullptr));
        setup_ffmpeg_button->setText(QCoreApplication::translate("Download_and_ClipClass", "Browse", nullptr));
        export_toolbox->setTabText(export_toolbox->indexOf(export_toolboxPage1), QCoreApplication::translate("Download_and_ClipClass", "Setup", nullptr));
        encode_video_combo->setItemText(0, QCoreApplication::translate("Download_and_ClipClass", "x264", nullptr));
        encode_video_combo->setItemText(1, QCoreApplication::translate("Download_and_ClipClass", "x265", nullptr));
        encode_video_combo->setItemText(2, QCoreApplication::translate("Download_and_ClipClass", "gif", nullptr));

        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("Download_and_ClipClass", "Start Time: ", nullptr));
        encode_video_starttime->setText(QCoreApplication::translate("Download_and_ClipClass", "00:00:00.0", nullptr));
        label_2->setText(QCoreApplication::translate("Download_and_ClipClass", "End Time: ", nullptr));
        encode_video_endtime->setText(QCoreApplication::translate("Download_and_ClipClass", "00:00:05.0", nullptr));
        encode_video_image->setText(QCoreApplication::translate("Download_and_ClipClass", "Image", nullptr));
        encode_video_go->setText(QCoreApplication::translate("Download_and_ClipClass", "Encode!", nullptr));
        encode_label_2->setText(QCoreApplication::translate("Download_and_ClipClass", "Filename: ", nullptr));
        encode_video_browse->setText(QCoreApplication::translate("Download_and_ClipClass", "Browse", nullptr));
        encode_label->setText(QCoreApplication::translate("Download_and_ClipClass", "Output Directory: ", nullptr));
        label_quality_smallest->setText(QCoreApplication::translate("Download_and_ClipClass", "Smallest", nullptr));
        label_7->setText(QCoreApplication::translate("Download_and_ClipClass", "Biggest", nullptr));
        export_toolbox->setTabText(export_toolbox->indexOf(export_toolboxPage2), QCoreApplication::translate("Download_and_ClipClass", "Encode Video", nullptr));
        encode_audio_label_3->setText(QCoreApplication::translate("Download_and_ClipClass", "Output Directory: ", nullptr));
        encode_audio_browse->setText(QCoreApplication::translate("Download_and_ClipClass", "Browse", nullptr));
        encode_audio_label_4->setText(QCoreApplication::translate("Download_and_ClipClass", "Filename: ", nullptr));
        encode_audio_combo->setItemText(0, QCoreApplication::translate("Download_and_ClipClass", "mp3", nullptr));
        encode_audio_combo->setItemText(1, QCoreApplication::translate("Download_and_ClipClass", "m4a", nullptr));
        encode_audio_combo->setItemText(2, QCoreApplication::translate("Download_and_ClipClass", "wav", nullptr));
        encode_audio_combo->setItemText(3, QCoreApplication::translate("Download_and_ClipClass", "flac", nullptr));

        label_3->setText(QCoreApplication::translate("Download_and_ClipClass", "Start Time: ", nullptr));
        encode_audio_starttime->setText(QCoreApplication::translate("Download_and_ClipClass", "00:00:00.0", nullptr));
        label_4->setText(QCoreApplication::translate("Download_and_ClipClass", "End Time: ", nullptr));
        encode_audio_endtime->setText(QCoreApplication::translate("Download_and_ClipClass", "00:00:05.0", nullptr));
        encode_audio_go->setText(QCoreApplication::translate("Download_and_ClipClass", "Encode!", nullptr));
        export_toolbox->setTabText(export_toolbox->indexOf(export_toolboxPage3), QCoreApplication::translate("Download_and_ClipClass", "Encode Audio", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Download_and_ClipClass", "File", nullptr));
        menuTheme->setTitle(QCoreApplication::translate("Download_and_ClipClass", "Theme", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("Download_and_ClipClass", "Settings", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("Download_and_ClipClass", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Download_and_ClipClass: public Ui_Download_and_ClipClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOAD_AND_CLIP_H
