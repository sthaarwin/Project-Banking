#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QINTValidator>
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
	ui->stackedWidget->findChild<QLineEdit*>("phoneNumberInputSignup")->setValidator(phoneNumberValidator);
    ui->stackedWidget->setCurrentIndex(0);

	
	// Disconnect any existing connections
	disconnect(ui->stackedWidget->findChild<QPushButton*>("loginButton"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("signUp"), nullptr, this, nullptr);

	// Ensure unique connections
    connect(ui->stackedWidget->findChild<QPushButton*>("loginButton"), &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("signUp"), &QPushButton::clicked, this, &MainWindow::on_signupButton_clicked, Qt::UniqueConnection);
}

MainWindow::~MainWindow()
{
    delete ui;
}
QString MainWindow::getdatabasepath() {
	
	QString databasePath = QCoreApplication::applicationDirPath();
	std::string to_remove = "/out/build/nex-vault.exe";
	int lengthdiff = databasePath.length() - to_remove.length();
	QString finalPath = "";
	for(int i = 0; i <= databasePath.length() - lengthdiff+2; i++) {
		finalPath += databasePath[i];
	}
	finalPath += "/database/users.db";
	qDebug() << "final path : " << finalPath;
	return finalPath;
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
