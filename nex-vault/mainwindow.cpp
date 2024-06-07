#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QINTValidator>
#include <QLineEdit>
#include <QMessageBox>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	this->setFixedSize(this->width(), this->height());

	QIntValidator* phoneNumberValidator = new QIntValidator(0, 9999999999, this);
	ui->stackedWidget->findChild<QLineEdit*>("phoneNumberInputLogin")->setValidator(phoneNumberValidator);
	ui->stackedWidget->findChild<QLineEdit*>("phoneNumberInputSignup")->setValidator(phoneNumberValidator);
    ui->stackedWidget->setCurrentIndex(0);

    connect(ui->stackedWidget->findChild<QPushButton*>("loginButton"), &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked);
	connect(ui->stackedWidget->findChild<QPushButton*>("signUp"), &QPushButton::clicked, this, &MainWindow::on_signupButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginButton_clicked()
{
    QString phoneNumberStr = ui->stackedWidget->findChild<QLineEdit*>("phoneNumberInputLogin")->text();
	long int phoneNumber = phoneNumberStr.toLong();
    if (phoneNumberStr.length() != 10) {
        QMessageBox::warning(this, "Invalid Phone Number", "Please enter a valid phone number.");
        return;
    }
    QString password = ui->stackedWidget->findChild<QLineEdit*>("passwordInputLogin")->text();
    if (password.length() < 8) {
		QMessageBox::warning(this, "Invalid Password", "Please enter a valid password.");
		return;
	}
	if (phoneNumber == 1234567890 && password == "password") {
		QMessageBox::information(this, "Login Successful", "You have successfully logged in.");
		ui->stackedWidget->setCurrentIndex(1);
	}
	else {
		QMessageBox::warning(this, "Login Failed", "Invalid phone number or password.");
		return;	
	}
}

void MainWindow::on_signupButton_clicked()
{
	ui->stackedWidget->setCurrentIndex(0);
}