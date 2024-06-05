/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_3;
    QFrame *frame_2;
    QLabel *label;
    QWidget *page_2;
    QFrame *frame_3;
    QTextEdit *textEdit_2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QTextEdit *textEdit_5;
    QLineEdit *lineEdit_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(980, 540);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(30, 30, 911, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(250, 220, 50);\n"
"border-radius:17px;"));
        page = new QWidget();
        page->setObjectName("page");
        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(480, 20, 401, 441));
        QFont font;
        font.setBold(true);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("background-color:rgba(140, 140, 140,150);\n"
"background-color{\n"
"filter:blur(40px);}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 30, 341, 61));
        textEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255,0);"));
        textEdit->setReadOnly(true);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 110, 311, 51));
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,225);\n"
"color:rgba(63, 63, 63,230);\n"
"padding-bottom:7px;\n"
""));
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(50, 200, 311, 51));
        lineEdit_2->setFont(font1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,225);\n"
"color:rgba(63, 63, 63,230);\n"
"padding-bottom:7px;"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setClearButtonEnabled(true);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 320, 121, 41));
        QFont font2;
        font2.setWeight(QFont::DemiBold);
        pushButton->setFont(font2);
        pushButton->setMouseTracking(true);
        pushButton->setTabletTracking(true);
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgba(19, 21, 1,150);\n"
"border-radius:7px;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(240, 270, 131, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgba(225,225,255,0);\n"
"color:rgb(0, 0, 176);"));
        textEdit_3 = new QTextEdit(frame);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(140, 380, 131, 31));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        frame_2 = new QFrame(page);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(19, 19, 451, 441));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(2, -1, 451, 441));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        frame_3 = new QFrame(page_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(490, 20, 401, 441));
        frame_3->setFont(font);
        frame_3->setStyleSheet(QString::fromUtf8("background-color:rgba(140, 140, 140,150);\n"
"background-color{\n"
"filter:blur(40px);}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame_3);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 10, 341, 61));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 255, 255,0);"));
        textEdit_2->setReadOnly(true);
        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(40, 120, 311, 51));
        lineEdit_4->setFont(font1);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,225);\n"
"color:rgba(63, 63, 63,230);\n"
"padding-bottom:7px;"));
        lineEdit_4->setEchoMode(QLineEdit::Normal);
        lineEdit_4->setClearButtonEnabled(true);
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(140, 390, 121, 41));
        pushButton_3->setFont(font2);
        pushButton_3->setMouseTracking(true);
        pushButton_3->setTabletTracking(true);
        pushButton_3->setStyleSheet(QString::fromUtf8("\n"
"background-color:rgba(19, 21, 1,150);\n"
"border-radius:7px;"));
        textEdit_4 = new QTextEdit(frame_3);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(270, 360, 131, 31));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_5 = new QLineEdit(frame_3);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(40, 60, 311, 51));
        lineEdit_5->setFont(font1);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,225);\n"
"color:rgba(63, 63, 63,230);\n"
"padding-bottom:7px;\n"
""));
        lineEdit_5->setEchoMode(QLineEdit::Normal);
        lineEdit_5->setClearButtonEnabled(true);
        lineEdit_6 = new QLineEdit(frame_3);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(40, 300, 321, 51));
        lineEdit_6->setFont(font1);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,225);\n"
"color:rgba(63, 63, 63,230);\n"
"padding-bottom:7px;"));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        lineEdit_6->setClearButtonEnabled(true);
        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(210, 240, 151, 51));
        lineEdit_3->setFont(font1);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,225);\n"
"color:rgba(63, 63, 63,230);\n"
"padding-bottom:7px;\n"
""));
        lineEdit_3->setEchoMode(QLineEdit::Normal);
        lineEdit_3->setClearButtonEnabled(true);
        checkBox = new QCheckBox(frame_3);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(50, 210, 71, 26));
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"color:rgba(63, 63, 63,230);"));
        checkBox_2 = new QCheckBox(frame_3);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(150, 210, 81, 26));
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"color:rgba(63, 63, 63,230);"));
        checkBox_3 = new QCheckBox(frame_3);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(270, 210, 71, 26));
        checkBox_3->setFont(font);
        checkBox_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"color:rgba(63, 63, 63,230);"));
        textEdit_5 = new QTextEdit(frame_3);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(40, 180, 181, 31));
        textEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"color:rgba(63, 63, 63,230);"));
        lineEdit_7 = new QLineEdit(frame_3);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(40, 240, 151, 51));
        lineEdit_7->setFont(font1);
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(105,118,132,225);\n"
"color:rgba(63, 63, 63,230);\n"
"padding-bottom:7px;\n"
""));
        lineEdit_7->setEchoMode(QLineEdit::Normal);
        lineEdit_7->setClearButtonEnabled(true);
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; color:#2c2c2c;\">Login</span></p></body></html>", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Forgot pasword?", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#5e5e5e;\">Create Account?</span></p></body></html>", nullptr));
        label->setText(QString());
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:700; color:#2c2c2c;\">SignUp</span></p></body></html>", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#5e5e5e;\">Login?</span></p></body></html>", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Male", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Female", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Other", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#716445;\">Enter your Gender:</span></p></body></html>", nullptr));
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QCoreApplication::translate("MainWindow", "Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
