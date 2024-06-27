/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *Login_page;
    QFrame *frame;
    QTextEdit *Login_text;
    QLineEdit *phoneNumberInputLogin;
    QLineEdit *passwordInputLogin;
    QPushButton *loginButton;
    QPushButton *createaccountbutton;
    QPushButton *forgot_password_on_login;
    QFrame *frame_2;
    QLabel *image;
    QWidget *Signup_page;
    QFrame *frame_3;
    QTextEdit *textEdit_2;
    QLineEdit *first_name_on_signup;
    QLineEdit *middle_name_on_signup;
    QLineEdit *last_name_on_signup;
    QPushButton *continue_1;
    QPushButton *loginButtonOnSignUpPage;
    QFrame *frame_4;
    QWidget *Signup_page_2;
    QFrame *frame_10;
    QTextEdit *textEdit_3;
    QRadioButton *male_radiobox;
    QRadioButton *female_radiobox;
    QRadioButton *other;
    QTextEdit *Enter_gender;
    QLineEdit *address_on_signup;
    QLineEdit *email_on_signup;
    QPushButton *continue_2;
    QPushButton *backbutton_1_onsignup;
    QWidget *Signup_page_3;
    QFrame *frame_11;
    QTextEdit *textEdit_4;
    QLineEdit *password_on_signup;
    QLineEdit *phone_number_on_signup;
    QPushButton *signupButton;
    QLineEdit *confirmpassword_on_signup;
    QPushButton *backbutton_2_onsignup;
    QWidget *signup_page_4;
    QFrame *frame_17;
    QTextEdit *textEdit_10;
    QLineEdit *movie_signup;
    QLineEdit *food_signup;
    QPushButton *continue_3;
    QPushButton *backbutton_3_onsignup;
    QFrame *frame_18;
    QWidget *recoverconfirmation;
    QFrame *frame_38;
    QTextEdit *textEdit_23;
    QLineEdit *movie_on_recovery;
    QLineEdit *phone_number_on_recovery;
    QPushButton *confirmButton_on_recovery;
    QLineEdit *food_on_recovery;
    QPushButton *login_on_recovery_1;
    QWidget *recovery;
    QFrame *frame_37;
    QTextEdit *textEdit_22;
    QLineEdit *password_on_recovery;
    QPushButton *recoveryButton_on_recovery;
    QLineEdit *confirmpassword_on_recovery;
    QPushButton *login_on_recovery;
    QWidget *Main_page;
    QFrame *frame_8;
    QTextEdit *textEdit;
    QListView *listView;
    QTextEdit *textEdit_5;
    QFrame *frame_12;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QFrame *frame_13;
    QFrame *frame_14;
    QFrame *frame_15;
    QFrame *frame_16;
    QPushButton *logoutOnMain;
    QScrollBar *verticalScrollBar;
    QWidget *Transfer_page;
    QFrame *frame_5;
    QLineEdit *holder_name;
    QPushButton *continue_5;
    QTextEdit *back;
    QTextEdit *Sendmoney_txt;
    QLineEdit *phone_no_2;
    QLineEdit *amount;
    QWidget *Verify;
    QFrame *frame_6;
    QLineEdit *holder_name_2;
    QPushButton *continue_6;
    QTextEdit *back_3;
    QTextEdit *Sendmoney_txt_2;
    QWidget *transaction_success;
    QFrame *frame_7;
    QPushButton *continue_7;
    QTextEdit *back_4;
    QTextEdit *Sendmoney_txt_3;
    QTextEdit *Sendmoney_txt_4;
    QWidget *presonalinfo;
    QFrame *frame_9;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(980, 540);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(40, 20, 911, 481));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(69, 0, 104);\n"
"                        border-radius:17px;"));
        Login_page = new QWidget();
        Login_page->setObjectName("Login_page");
        frame = new QFrame(Login_page);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(490, 20, 401, 441));
        QFont font1;
        font1.setBold(true);
        frame->setFont(font1);
        frame->setStyleSheet(QString::fromUtf8("\n"
"                                background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Login_text = new QTextEdit(frame);
        Login_text->setObjectName("Login_text");
        Login_text->setGeometry(QRect(30, 30, 341, 61));
        Login_text->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgb(255, 235, 59);"));
        Login_text->setReadOnly(true);
        phoneNumberInputLogin = new QLineEdit(frame);
        phoneNumberInputLogin->setObjectName("phoneNumberInputLogin");
        phoneNumberInputLogin->setGeometry(QRect(50, 110, 311, 51));
        phoneNumberInputLogin->setFont(font);
        phoneNumberInputLogin->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        phoneNumberInputLogin->setEchoMode(QLineEdit::Normal);
        phoneNumberInputLogin->setClearButtonEnabled(true);
        passwordInputLogin = new QLineEdit(frame);
        passwordInputLogin->setObjectName("passwordInputLogin");
        passwordInputLogin->setGeometry(QRect(50, 200, 311, 51));
        passwordInputLogin->setFont(font);
        passwordInputLogin->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;"));
        passwordInputLogin->setEchoMode(QLineEdit::Password);
        passwordInputLogin->setClearButtonEnabled(true);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(110, 320, 181, 41));
        QFont font2;
        font2.setWeight(QFont::DemiBold);
        loginButton->setFont(font2);
        loginButton->setMouseTracking(true);
        loginButton->setTabletTracking(true);
        loginButton->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        createaccountbutton = new QPushButton(frame);
        createaccountbutton->setObjectName("createaccountbutton");
        createaccountbutton->setGeometry(QRect(140, 390, 111, 26));
        createaccountbutton->setStyleSheet(QString::fromUtf8("color : rgb(58, 58, 58);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        forgot_password_on_login = new QPushButton(frame);
        forgot_password_on_login->setObjectName("forgot_password_on_login");
        forgot_password_on_login->setGeometry(QRect(240, 260, 131, 26));
        forgot_password_on_login->setStyleSheet(QString::fromUtf8("color : rgb(58, 58, 58);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        frame_2 = new QFrame(Login_page);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(19, 19, 451, 441));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        image = new QLabel(frame_2);
        image->setObjectName("image");
        image->setGeometry(QRect(2, -1, 451, 441));
        image->setStyleSheet(QString::fromUtf8("background-color:rgb(39, 39, 39);"));
        stackedWidget->addWidget(Login_page);
        Signup_page = new QWidget();
        Signup_page->setObjectName("Signup_page");
        frame_3 = new QFrame(Signup_page);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(490, 20, 401, 441));
        frame_3->setFont(font1);
        frame_3->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        textEdit_2 = new QTextEdit(frame_3);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 10, 341, 61));
        textEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgb(255, 235, 59);"));
        textEdit_2->setReadOnly(true);
        first_name_on_signup = new QLineEdit(frame_3);
        first_name_on_signup->setObjectName("first_name_on_signup");
        first_name_on_signup->setGeometry(QRect(40, 90, 311, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        first_name_on_signup->setFont(font3);
        first_name_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        first_name_on_signup->setEchoMode(QLineEdit::Normal);
        first_name_on_signup->setClearButtonEnabled(true);
        middle_name_on_signup = new QLineEdit(frame_3);
        middle_name_on_signup->setObjectName("middle_name_on_signup");
        middle_name_on_signup->setGeometry(QRect(40, 160, 311, 51));
        middle_name_on_signup->setFont(font);
        middle_name_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        middle_name_on_signup->setEchoMode(QLineEdit::Normal);
        middle_name_on_signup->setClearButtonEnabled(true);
        last_name_on_signup = new QLineEdit(frame_3);
        last_name_on_signup->setObjectName("last_name_on_signup");
        last_name_on_signup->setGeometry(QRect(40, 230, 311, 51));
        last_name_on_signup->setFont(font);
        last_name_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        last_name_on_signup->setEchoMode(QLineEdit::Normal);
        last_name_on_signup->setClearButtonEnabled(true);
        continue_1 = new QPushButton(frame_3);
        continue_1->setObjectName("continue_1");
        continue_1->setGeometry(QRect(100, 320, 201, 41));
        continue_1->setFont(font2);
        continue_1->setMouseTracking(true);
        continue_1->setTabletTracking(true);
        continue_1->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        loginButtonOnSignUpPage = new QPushButton(frame_3);
        loginButtonOnSignUpPage->setObjectName("loginButtonOnSignUpPage");
        loginButtonOnSignUpPage->setGeometry(QRect(160, 380, 71, 26));
        loginButtonOnSignUpPage->setStyleSheet(QString::fromUtf8("color : rgb(31, 78, 121);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        frame_4 = new QFrame(Signup_page);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(19, 19, 451, 441));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 44, 44);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(Signup_page);
        Signup_page_2 = new QWidget();
        Signup_page_2->setObjectName("Signup_page_2");
        frame_10 = new QFrame(Signup_page_2);
        frame_10->setObjectName("frame_10");
        frame_10->setGeometry(QRect(490, 20, 401, 441));
        frame_10->setFont(font1);
        frame_10->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        textEdit_3 = new QTextEdit(frame_10);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(30, 10, 341, 61));
        textEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgb(255, 235, 59);"));
        textEdit_3->setReadOnly(true);
        male_radiobox = new QRadioButton(frame_10);
        male_radiobox->setObjectName("male_radiobox");
        male_radiobox->setGeometry(QRect(50, 280, 71, 26));
        male_radiobox->setFont(font1);
        male_radiobox->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"                                    color:rgba(63, 63, 63,230);"));
        male_radiobox->setChecked(true);
        female_radiobox = new QRadioButton(frame_10);
        female_radiobox->setObjectName("female_radiobox");
        female_radiobox->setGeometry(QRect(150, 280, 81, 26));
        female_radiobox->setFont(font1);
        female_radiobox->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"                                    color:rgba(63, 63, 63,230);"));
        other = new QRadioButton(frame_10);
        other->setObjectName("other");
        other->setGeometry(QRect(280, 280, 71, 26));
        other->setFont(font1);
        other->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"                                    color:rgba(63, 63, 63,230);"));
        Enter_gender = new QTextEdit(frame_10);
        Enter_gender->setObjectName("Enter_gender");
        Enter_gender->setGeometry(QRect(40, 240, 181, 31));
        Enter_gender->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"                                    color:rgba(63, 63, 63,230);"));
        address_on_signup = new QLineEdit(frame_10);
        address_on_signup->setObjectName("address_on_signup");
        address_on_signup->setGeometry(QRect(40, 170, 311, 51));
        address_on_signup->setFont(font);
        address_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        address_on_signup->setEchoMode(QLineEdit::Normal);
        address_on_signup->setClearButtonEnabled(true);
        email_on_signup = new QLineEdit(frame_10);
        email_on_signup->setObjectName("email_on_signup");
        email_on_signup->setGeometry(QRect(40, 90, 311, 51));
        email_on_signup->setFont(font);
        email_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        email_on_signup->setEchoMode(QLineEdit::Normal);
        email_on_signup->setClearButtonEnabled(true);
        continue_2 = new QPushButton(frame_10);
        continue_2->setObjectName("continue_2");
        continue_2->setGeometry(QRect(100, 340, 201, 41));
        continue_2->setFont(font2);
        continue_2->setMouseTracking(true);
        continue_2->setTabletTracking(true);
        continue_2->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        backbutton_1_onsignup = new QPushButton(frame_10);
        backbutton_1_onsignup->setObjectName("backbutton_1_onsignup");
        backbutton_1_onsignup->setGeometry(QRect(160, 400, 80, 26));
        backbutton_1_onsignup->setStyleSheet(QString::fromUtf8("color : rgb(31, 78, 121);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        stackedWidget->addWidget(Signup_page_2);
        Signup_page_3 = new QWidget();
        Signup_page_3->setObjectName("Signup_page_3");
        frame_11 = new QFrame(Signup_page_3);
        frame_11->setObjectName("frame_11");
        frame_11->setGeometry(QRect(490, 20, 401, 441));
        frame_11->setFont(font1);
        frame_11->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        textEdit_4 = new QTextEdit(frame_11);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(30, 10, 341, 61));
        textEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgb(255, 235, 59);"));
        textEdit_4->setReadOnly(true);
        password_on_signup = new QLineEdit(frame_11);
        password_on_signup->setObjectName("password_on_signup");
        password_on_signup->setGeometry(QRect(40, 170, 311, 51));
        password_on_signup->setFont(font);
        password_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        password_on_signup->setEchoMode(QLineEdit::Password);
        password_on_signup->setClearButtonEnabled(true);
        phone_number_on_signup = new QLineEdit(frame_11);
        phone_number_on_signup->setObjectName("phone_number_on_signup");
        phone_number_on_signup->setGeometry(QRect(40, 90, 311, 51));
        phone_number_on_signup->setFont(font);
        phone_number_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        phone_number_on_signup->setEchoMode(QLineEdit::Normal);
        phone_number_on_signup->setClearButtonEnabled(true);
        signupButton = new QPushButton(frame_11);
        signupButton->setObjectName("signupButton");
        signupButton->setGeometry(QRect(100, 340, 201, 41));
        signupButton->setFont(font2);
        signupButton->setMouseTracking(true);
        signupButton->setTabletTracking(true);
        signupButton->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        confirmpassword_on_signup = new QLineEdit(frame_11);
        confirmpassword_on_signup->setObjectName("confirmpassword_on_signup");
        confirmpassword_on_signup->setGeometry(QRect(40, 250, 311, 51));
        confirmpassword_on_signup->setFont(font);
        confirmpassword_on_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        confirmpassword_on_signup->setEchoMode(QLineEdit::Password);
        confirmpassword_on_signup->setClearButtonEnabled(true);
        backbutton_2_onsignup = new QPushButton(frame_11);
        backbutton_2_onsignup->setObjectName("backbutton_2_onsignup");
        backbutton_2_onsignup->setGeometry(QRect(160, 390, 80, 26));
        backbutton_2_onsignup->setStyleSheet(QString::fromUtf8("color : rgb(31, 78, 121);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        stackedWidget->addWidget(Signup_page_3);
        signup_page_4 = new QWidget();
        signup_page_4->setObjectName("signup_page_4");
        frame_17 = new QFrame(signup_page_4);
        frame_17->setObjectName("frame_17");
        frame_17->setGeometry(QRect(490, 20, 401, 441));
        frame_17->setFont(font1);
        frame_17->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        textEdit_10 = new QTextEdit(frame_17);
        textEdit_10->setObjectName("textEdit_10");
        textEdit_10->setGeometry(QRect(20, 50, 341, 41));
        textEdit_10->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgb(255, 235, 59);"));
        textEdit_10->setReadOnly(true);
        movie_signup = new QLineEdit(frame_17);
        movie_signup->setObjectName("movie_signup");
        movie_signup->setGeometry(QRect(40, 120, 311, 51));
        movie_signup->setFont(font3);
        movie_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        movie_signup->setEchoMode(QLineEdit::Normal);
        movie_signup->setClearButtonEnabled(true);
        food_signup = new QLineEdit(frame_17);
        food_signup->setObjectName("food_signup");
        food_signup->setGeometry(QRect(40, 210, 311, 51));
        food_signup->setFont(font);
        food_signup->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        food_signup->setEchoMode(QLineEdit::Normal);
        food_signup->setClearButtonEnabled(true);
        continue_3 = new QPushButton(frame_17);
        continue_3->setObjectName("continue_3");
        continue_3->setGeometry(QRect(100, 320, 201, 41));
        continue_3->setFont(font2);
        continue_3->setMouseTracking(true);
        continue_3->setTabletTracking(true);
        continue_3->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        backbutton_3_onsignup = new QPushButton(frame_17);
        backbutton_3_onsignup->setObjectName("backbutton_3_onsignup");
        backbutton_3_onsignup->setGeometry(QRect(170, 380, 71, 26));
        backbutton_3_onsignup->setStyleSheet(QString::fromUtf8("color : rgb(31, 78, 121);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        frame_18 = new QFrame(signup_page_4);
        frame_18->setObjectName("frame_18");
        frame_18->setGeometry(QRect(19, 19, 451, 441));
        frame_18->setStyleSheet(QString::fromUtf8("background-color:rgb(44, 44, 44);"));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(signup_page_4);
        recoverconfirmation = new QWidget();
        recoverconfirmation->setObjectName("recoverconfirmation");
        frame_38 = new QFrame(recoverconfirmation);
        frame_38->setObjectName("frame_38");
        frame_38->setGeometry(QRect(490, 20, 401, 441));
        frame_38->setFont(font1);
        frame_38->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_38->setFrameShape(QFrame::StyledPanel);
        frame_38->setFrameShadow(QFrame::Raised);
        textEdit_23 = new QTextEdit(frame_38);
        textEdit_23->setObjectName("textEdit_23");
        textEdit_23->setGeometry(QRect(30, 10, 341, 61));
        textEdit_23->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgb(255, 235, 59);"));
        textEdit_23->setReadOnly(true);
        movie_on_recovery = new QLineEdit(frame_38);
        movie_on_recovery->setObjectName("movie_on_recovery");
        movie_on_recovery->setGeometry(QRect(40, 170, 311, 51));
        movie_on_recovery->setFont(font);
        movie_on_recovery->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        movie_on_recovery->setEchoMode(QLineEdit::Normal);
        movie_on_recovery->setClearButtonEnabled(true);
        phone_number_on_recovery = new QLineEdit(frame_38);
        phone_number_on_recovery->setObjectName("phone_number_on_recovery");
        phone_number_on_recovery->setGeometry(QRect(40, 90, 311, 51));
        phone_number_on_recovery->setFont(font);
        phone_number_on_recovery->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        phone_number_on_recovery->setEchoMode(QLineEdit::Normal);
        phone_number_on_recovery->setClearButtonEnabled(true);
        confirmButton_on_recovery = new QPushButton(frame_38);
        confirmButton_on_recovery->setObjectName("confirmButton_on_recovery");
        confirmButton_on_recovery->setGeometry(QRect(100, 340, 201, 41));
        confirmButton_on_recovery->setFont(font2);
        confirmButton_on_recovery->setMouseTracking(true);
        confirmButton_on_recovery->setTabletTracking(true);
        confirmButton_on_recovery->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"                                    border-radius:7px;"));
        food_on_recovery = new QLineEdit(frame_38);
        food_on_recovery->setObjectName("food_on_recovery");
        food_on_recovery->setGeometry(QRect(40, 250, 311, 51));
        food_on_recovery->setFont(font);
        food_on_recovery->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        food_on_recovery->setEchoMode(QLineEdit::Normal);
        food_on_recovery->setClearButtonEnabled(true);
        login_on_recovery_1 = new QPushButton(frame_38);
        login_on_recovery_1->setObjectName("login_on_recovery_1");
        login_on_recovery_1->setGeometry(QRect(160, 390, 80, 26));
        login_on_recovery_1->setStyleSheet(QString::fromUtf8("color : rgb(31, 78, 121);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        stackedWidget->addWidget(recoverconfirmation);
        recovery = new QWidget();
        recovery->setObjectName("recovery");
        frame_37 = new QFrame(recovery);
        frame_37->setObjectName("frame_37");
        frame_37->setGeometry(QRect(490, 20, 401, 441));
        frame_37->setFont(font1);
        frame_37->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_37->setFrameShape(QFrame::StyledPanel);
        frame_37->setFrameShadow(QFrame::Raised);
        textEdit_22 = new QTextEdit(frame_37);
        textEdit_22->setObjectName("textEdit_22");
        textEdit_22->setGeometry(QRect(30, 30, 341, 61));
        textEdit_22->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgb(255, 235, 59);"));
        textEdit_22->setReadOnly(true);
        password_on_recovery = new QLineEdit(frame_37);
        password_on_recovery->setObjectName("password_on_recovery");
        password_on_recovery->setGeometry(QRect(40, 130, 311, 51));
        password_on_recovery->setFont(font);
        password_on_recovery->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        password_on_recovery->setEchoMode(QLineEdit::Password);
        password_on_recovery->setClearButtonEnabled(true);
        recoveryButton_on_recovery = new QPushButton(frame_37);
        recoveryButton_on_recovery->setObjectName("recoveryButton_on_recovery");
        recoveryButton_on_recovery->setGeometry(QRect(100, 340, 201, 41));
        recoveryButton_on_recovery->setFont(font2);
        recoveryButton_on_recovery->setMouseTracking(true);
        recoveryButton_on_recovery->setTabletTracking(true);
        recoveryButton_on_recovery->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"                                    border-radius:7px;"));
        confirmpassword_on_recovery = new QLineEdit(frame_37);
        confirmpassword_on_recovery->setObjectName("confirmpassword_on_recovery");
        confirmpassword_on_recovery->setGeometry(QRect(40, 240, 311, 51));
        confirmpassword_on_recovery->setFont(font);
        confirmpassword_on_recovery->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"                                    border:none;\n"
"                                    border-bottom:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:7px;\n"
"                                "));
        confirmpassword_on_recovery->setEchoMode(QLineEdit::Password);
        confirmpassword_on_recovery->setClearButtonEnabled(true);
        login_on_recovery = new QPushButton(frame_37);
        login_on_recovery->setObjectName("login_on_recovery");
        login_on_recovery->setGeometry(QRect(160, 390, 80, 26));
        login_on_recovery->setStyleSheet(QString::fromUtf8("color : rgb(31, 78, 121);\n"
" font-weight: bold;\n"
" background-color: transparent;\n"
" border: none;"));
        stackedWidget->addWidget(recovery);
        Main_page = new QWidget();
        Main_page->setObjectName("Main_page");
        frame_8 = new QFrame(Main_page);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 0, 911, 481));
        frame_8->setStyleSheet(QString::fromUtf8("background-color:rgb(133, 18, 247);\n"
"                                border-radius:15px;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame_8);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(490, 230, 111, 31));
        textEdit->setReadOnly(true);
        listView = new QListView(frame_8);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(490, 260, 411, 211));
        listView->setStyleSheet(QString::fromUtf8("background-color:rgb(80, 80, 80);"));
        textEdit_5 = new QTextEdit(frame_8);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(30, 10, 91, 51));
        frame_12 = new QFrame(frame_8);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(30, 220, 341, 201));
        frame_12->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        textEdit_8 = new QTextEdit(frame_8);
        textEdit_8->setObjectName("textEdit_8");
        textEdit_8->setGeometry(QRect(70, 70, 131, 31));
        textEdit_9 = new QTextEdit(frame_8);
        textEdit_9->setObjectName("textEdit_9");
        textEdit_9->setGeometry(QRect(80, 130, 61, 31));
        frame_13 = new QFrame(frame_8);
        frame_13->setObjectName("frame_13");
        frame_13->setGeometry(QRect(500, 130, 81, 61));
        frame_13->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        frame_14 = new QFrame(frame_8);
        frame_14->setObjectName("frame_14");
        frame_14->setGeometry(QRect(610, 130, 81, 61));
        frame_14->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        frame_15 = new QFrame(frame_8);
        frame_15->setObjectName("frame_15");
        frame_15->setGeometry(QRect(720, 130, 81, 61));
        frame_15->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        frame_16 = new QFrame(frame_8);
        frame_16->setObjectName("frame_16");
        frame_16->setGeometry(QRect(820, 130, 81, 61));
        frame_16->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        logoutOnMain = new QPushButton(frame_8);
        logoutOnMain->setObjectName("logoutOnMain");
        logoutOnMain->setGeometry(QRect(830, 20, 71, 31));
        QFont font4;
        font4.setPointSize(10);
        font4.setWeight(QFont::DemiBold);
        logoutOnMain->setFont(font4);
        logoutOnMain->setMouseTracking(true);
        logoutOnMain->setTabletTracking(true);
        logoutOnMain->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"                                    background-color: rgb(69, 0, 104);\n"
"\n"
"                                    border-radius:7px;"));
        verticalScrollBar = new QScrollBar(frame_8);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(876, 279, 16, 171));
        verticalScrollBar->setStyleSheet(QString::fromUtf8("background-color: rgb(158, 158, 158);"));
        verticalScrollBar->setOrientation(Qt::Vertical);
        stackedWidget->addWidget(Main_page);
        Transfer_page = new QWidget();
        Transfer_page->setObjectName("Transfer_page");
        frame_5 = new QFrame(Transfer_page);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(-20, 0, 931, 501));
        frame_5->setFont(font1);
        frame_5->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        holder_name = new QLineEdit(frame_5);
        holder_name->setObjectName("holder_name");
        holder_name->setGeometry(QRect(310, 130, 301, 51));
        holder_name->setFont(font3);
        holder_name->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"\n"
"                                    border:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:1px;\n"
"                                    border-radius:10px;"));
        holder_name->setEchoMode(QLineEdit::Normal);
        holder_name->setClearButtonEnabled(true);
        continue_5 = new QPushButton(frame_5);
        continue_5->setObjectName("continue_5");
        continue_5->setGeometry(QRect(360, 370, 201, 41));
        continue_5->setFont(font2);
        continue_5->setMouseTracking(true);
        continue_5->setTabletTracking(true);
        continue_5->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        back = new QTextEdit(frame_5);
        back->setObjectName("back");
        back->setGeometry(QRect(400, 430, 131, 41));
        back->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        Sendmoney_txt = new QTextEdit(frame_5);
        Sendmoney_txt->setObjectName("Sendmoney_txt");
        Sendmoney_txt->setGeometry(QRect(290, 40, 341, 61));
        Sendmoney_txt->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgba(245, 245, 245,210);"));
        Sendmoney_txt->setReadOnly(true);
        phone_no_2 = new QLineEdit(frame_5);
        phone_no_2->setObjectName("phone_no_2");
        phone_no_2->setGeometry(QRect(310, 210, 301, 51));
        phone_no_2->setFont(font3);
        phone_no_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"\n"
"                                    border:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:1px;\n"
"                                    border-radius:10px;"));
        phone_no_2->setEchoMode(QLineEdit::Normal);
        phone_no_2->setClearButtonEnabled(true);
        amount = new QLineEdit(frame_5);
        amount->setObjectName("amount");
        amount->setGeometry(QRect(310, 290, 301, 51));
        amount->setFont(font3);
        amount->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"\n"
"                                    border:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:1px;\n"
"                                    border-radius:10px;"));
        amount->setEchoMode(QLineEdit::Normal);
        amount->setClearButtonEnabled(true);
        stackedWidget->addWidget(Transfer_page);
        Verify = new QWidget();
        Verify->setObjectName("Verify");
        frame_6 = new QFrame(Verify);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(0, 0, 911, 481));
        frame_6->setFont(font1);
        frame_6->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        holder_name_2 = new QLineEdit(frame_6);
        holder_name_2->setObjectName("holder_name_2");
        holder_name_2->setGeometry(QRect(310, 190, 301, 51));
        holder_name_2->setFont(font3);
        holder_name_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0,0);\n"
"\n"
"                                    border:2px solid rgba(105,118,132,225);\n"
"                                    color:rgba(63, 63, 63,230);\n"
"                                    padding-bottom:1px;\n"
"                                    border-radius:10px;"));
        holder_name_2->setEchoMode(QLineEdit::Password);
        holder_name_2->setClearButtonEnabled(true);
        continue_6 = new QPushButton(frame_6);
        continue_6->setObjectName("continue_6");
        continue_6->setGeometry(QRect(360, 350, 201, 41));
        continue_6->setFont(font2);
        continue_6->setMouseTracking(true);
        continue_6->setTabletTracking(true);
        continue_6->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        back_3 = new QTextEdit(frame_6);
        back_3->setObjectName("back_3");
        back_3->setGeometry(QRect(390, 410, 131, 41));
        back_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        Sendmoney_txt_2 = new QTextEdit(frame_6);
        Sendmoney_txt_2->setObjectName("Sendmoney_txt_2");
        Sendmoney_txt_2->setGeometry(QRect(280, 90, 341, 61));
        Sendmoney_txt_2->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgba(245, 245, 245,210);"));
        Sendmoney_txt_2->setReadOnly(true);
        stackedWidget->addWidget(Verify);
        transaction_success = new QWidget();
        transaction_success->setObjectName("transaction_success");
        frame_7 = new QFrame(transaction_success);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(10, 10, 891, 461));
        frame_7->setFont(font1);
        frame_7->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);\n"
"border-radius:15px;"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        continue_7 = new QPushButton(frame_7);
        continue_7->setObjectName("continue_7");
        continue_7->setGeometry(QRect(360, 330, 201, 41));
        continue_7->setFont(font2);
        continue_7->setMouseTracking(true);
        continue_7->setTabletTracking(true);
        continue_7->setStyleSheet(QString::fromUtf8("\n"
"                                    color:rgb(255, 255, 255);\n"
"                                    background-color:rgb(31, 78, 121);\n"
"\n"
"                                    border-radius:7px;"));
        back_4 = new QTextEdit(frame_7);
        back_4->setObjectName("back_4");
        back_4->setGeometry(QRect(400, 400, 131, 41));
        back_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        Sendmoney_txt_3 = new QTextEdit(frame_7);
        Sendmoney_txt_3->setObjectName("Sendmoney_txt_3");
        Sendmoney_txt_3->setGeometry(QRect(200, 160, 511, 61));
        Sendmoney_txt_3->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgba(245, 245, 245,210);"));
        Sendmoney_txt_3->setReadOnly(true);
        Sendmoney_txt_4 = new QTextEdit(frame_7);
        Sendmoney_txt_4->setObjectName("Sendmoney_txt_4");
        Sendmoney_txt_4->setGeometry(QRect(250, 220, 421, 61));
        Sendmoney_txt_4->setStyleSheet(QString::fromUtf8("background-color:rgba(255, 235, 59,0);\n"
"                                    text-color:rgba(245, 245, 245,210);"));
        Sendmoney_txt_4->setReadOnly(true);
        stackedWidget->addWidget(transaction_success);
        presonalinfo = new QWidget();
        presonalinfo->setObjectName("presonalinfo");
        frame_9 = new QFrame(presonalinfo);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(-1, -1, 911, 481));
        frame_9->setStyleSheet(QString::fromUtf8("background-color:rgba(245, 245, 245,210);\n"
"\n"
"                                filter:blur(40px);"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        textEdit_6 = new QTextEdit(frame_9);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(20, 40, 281, 51));
        textEdit_6->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"                                "));
        textEdit_7 = new QTextEdit(frame_9);
        textEdit_7->setObjectName("textEdit_7");
        textEdit_7->setGeometry(QRect(30, 100, 851, 211));
        stackedWidget->addWidget(presonalinfo);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Login_text->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#1f4e79;\">Login</span></p></body></html>", nullptr));
        phoneNumberInputLogin->setPlaceholderText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        passwordInputLogin->setText(QString());
        passwordInputLogin->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        createaccountbutton->setText(QCoreApplication::translate("MainWindow", "Create Account?", nullptr));
        forgot_password_on_login->setText(QCoreApplication::translate("MainWindow", "forgot password?", nullptr));
        image->setText(QString());
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#1f4e79;\">SignUp</span></p></body></html>", nullptr));
        first_name_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        middle_name_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Middle Name (optional)", nullptr));
        last_name_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        continue_1->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        loginButtonOnSignUpPage->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#1f4e79;\">SignUp</span></p></body></html>", nullptr));
        male_radiobox->setText(QCoreApplication::translate("MainWindow", "Ma&le", nullptr));
        female_radiobox->setText(QCoreApplication::translate("MainWindow", "Fe&male", nullptr));
        other->setText(QCoreApplication::translate("MainWindow", "O&ther", nullptr));
        Enter_gender->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; color:#716445;\">Enter your Gender:</span></p></body></html>", nullptr));
        address_on_signup->setText(QString());
        address_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        email_on_signup->setText(QString());
        email_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        continue_2->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        backbutton_1_onsignup->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#1f4e79;\">SignUp</span></p></body></html>", nullptr));
        password_on_signup->setText(QString());
        password_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        phone_number_on_signup->setText(QString());
        phone_number_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        signupButton->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        confirmpassword_on_signup->setText(QString());
        confirmpassword_on_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        backbutton_2_onsignup->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        textEdit_10->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#1f4e79;\">Security Questions</span></p></body></html>", nullptr));
        movie_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your favourite movie ", nullptr));
        food_signup->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter  you favourite food", nullptr));
        continue_3->setText(QCoreApplication::translate("MainWindow", "Signup", nullptr));
        backbutton_3_onsignup->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        textEdit_23->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#1f4e79;\">Password Recovery</span></p></body></html>", nullptr));
        movie_on_recovery->setText(QString());
        movie_on_recovery->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your favourite movie", nullptr));
        phone_number_on_recovery->setText(QString());
        phone_number_on_recovery->setPlaceholderText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        confirmButton_on_recovery->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        food_on_recovery->setText(QString());
        food_on_recovery->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter your favourite food", nullptr));
        login_on_recovery_1->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        textEdit_22->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#1f4e79;\">Password Recovery</span></p></body></html>", nullptr));
        password_on_recovery->setText(QString());
        password_on_recovery->setPlaceholderText(QCoreApplication::translate("MainWindow", "New Password", nullptr));
        recoveryButton_on_recovery->setText(QCoreApplication::translate("MainWindow", "Recover", nullptr));
        confirmpassword_on_recovery->setText(QString());
        confirmpassword_on_recovery->setPlaceholderText(QCoreApplication::translate("MainWindow", "Confirm Password", nullptr));
        login_on_recovery->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:700; color:#dadada;\">Transactions</span></p></body></html>", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> <span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:700; color:#dadada;\">Welcome</span></p></body></html>", nullptr));
        textEdit_8->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> <span style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700;\">Account Number</span></p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:700;\">Balance</span></p></body></html>", nullptr));
        logoutOnMain->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        holder_name->setPlaceholderText(QCoreApplication::translate("MainWindow", "Account Holder's Name", nullptr));
        continue_5->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
        back->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:700; color:#1f4e79;\">Back</span></p></body></html>", nullptr));
        Sendmoney_txt->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#4b474d;\">Send Money</span></p></body></html>", nullptr));
        phone_no_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Account Number", nullptr));
        amount->setPlaceholderText(QCoreApplication::translate("MainWindow", "Amount", nullptr));
        holder_name_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        continue_6->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        back_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:700; color:#1f4e79;\">Back</span></p></body></html>", nullptr));
        Sendmoney_txt_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:20pt; font-weight:700; color:#4b474d;\">Verify</span></p></body></html>", nullptr));
        continue_7->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        back_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:700; color:#1f4e79;\">Back</span></p></body></html>", nullptr));
        Sendmoney_txt_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:24pt; font-weight:700; color:#4b474d;\">Transaction Successful</span></p></body></html>", nullptr));
        Sendmoney_txt_4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:700; color:#4b474d;\">Thank you!</span></p></body></html>", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">                                    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Segoe UI'; font-size:14pt; font-weight:700; color:#1f4e79;\">Personal Information</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
