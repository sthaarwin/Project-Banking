#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "out/build/nex-vault_autogen/include/ui_mainwindow.h"

#include <QIntValidator>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <string>


MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	ui->stackedWidget->setCurrentIndex(0);
	this->setFixedSize(this->width(), this->height());

	//SQL CONNECTION
	QString databasePath = getdatabasepath();
	QString path = QCoreApplication::applicationFilePath();
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName(databasePath);
	qDebug() << "Database path:" << db.databaseName();

	if (!db.open()) {
		qDebug() << "Error: Could not connect to database." << db.lastError();
		return;
	}
	else {
		qDebug() << "connected to database.";
	}
	//VALIDATOR SETUP
	QIntValidator* phoneNumberValidator = new QIntValidator(0, 9999999999, this);
	ui->stackedWidget->findChild<QLineEdit*>("phoneNumberInputLogin")->setValidator(phoneNumberValidator);
	// ui->stackedWidget->findChild<QLineEdit*>("phoneNumberInputSignup")->setValidator(phoneNumberValidator);
    ui->stackedWidget->setCurrentIndex(0);

	
	// Disconnect any existing connections
	disconnect(ui->stackedWidget->findChild<QPushButton*>("loginButton"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("logoutOnMain"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("createaccountbutton"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("loginButtonOnSignUpPage"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("continue_1"), nullptr, this, nullptr);

	// Ensure unique connections
    connect(ui->stackedWidget->findChild<QPushButton*>("loginButton"), &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("logoutOnMain"), &QPushButton::clicked, this, &MainWindow::on_logoutButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("createaccountbutton"), &QPushButton::clicked, this, &MainWindow::on_createaccountButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("loginButtonOnSignUpPage"), &QPushButton::clicked, this, &MainWindow::on_LoginOnSighnupButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("continue_1"), &QPushButton::clicked, this, &MainWindow::on_continue_1_clicked, Qt::UniqueConnection);
	}

MainWindow::~MainWindow()
{
    delete ui;
}


QString MainWindow::getdatabasepath() {
	
	QString databasePath = QCoreApplication::applicationDirPath();
    qDebug() << "path: " << databasePath;
	std::string to_remove = "/out/build";
	int lengthdiff = databasePath.length() - to_remove.length();
	QString finalPath = "";
	for(int i = 0; i <= lengthdiff; i++) {
		finalPath += databasePath[i];
	}
	finalPath += "database/users.db";
	qDebug() << "final path : " << finalPath;
	return finalPath;
}

bool MainWindow::validate_login(long int phoneNumber, QString password) {
	QSqlQuery query;
	query.prepare("SELECT * FROM users WHERE PhoneNumber = :RealPhoneNumber AND Password = :RealPassword");
	query.bindValue(":RealPhoneNumber", QString::number(phoneNumber));
	query.bindValue(":RealPassword", password);
	qDebug() << "phoneNumber: " << phoneNumber;
	qDebug() << "password: " << password;
	if (!query.exec()) {
		qDebug() << "Error: Could not execute query." << query.lastError();
		return false;
	}
	if (query.next()) {
		qDebug() << "found in database";
		return true;
	}
	qDebug() << "mismatched database";
	return false;
}
void MainWindow::on_loginButton_clicked()
{
	
	//INPUT VALIDATOR
	qDebug() << "Login button clicked";
	
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

	//sql querry

	if (validate_login(phoneNumber, password)) {
		ui->stackedWidget->setCurrentIndex(4);
	}
	else {
		QMessageBox::warning(this, "Login Failed", "Invalid phone number or password.");
		return;	
	}
}

void MainWindow::on_logoutButton_clicked()
{
	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?",
	 QMessageBox::Yes | QMessageBox::No);
	 if (reply == QMessageBox::Yes)
	 {
		ui->stackedWidget->setCurrentIndex(0);
	 }
	 else{
		return;
	 }
}
void MainWindow::on_createaccountButton_clicked()
{
	qDebug() << "create account button clicked";
	ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_LoginOnSighnupButton_clicked()
{
	qDebug() << "login button clicked";
	ui->stackedWidget->setCurrentIndex(0);
}
void MainWindow::on_continue_1_clicked()
{
	ui->stackedWidget->setCurrentIndex(2);
}