#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "out/build/nex-vault_autogen/include/ui_mainwindow.h"

#include <QStackedWidget>
#include <QIntValidator>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <string>
#include <QRegularExpression>
#include <QRadioButton>


MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	ui->stackedWidget->setCurrentIndex(0);
	this->setFixedSize(this->width(), this->height());
	this->setWindowTitle("Nex Vault");

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
	ui->stackedWidget->findChild<QLineEdit*>("phone_number_on_signup")->setValidator(phoneNumberValidator);
    ui->stackedWidget->setCurrentIndex(0);

	
	// Disconnect any existing connections
	disconnect(ui->stackedWidget->findChild<QPushButton*>("loginButton"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("forgot_password_on_login"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("logoutOnMain"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("createaccountbutton"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("loginButtonOnSignUpPage"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("continue_1"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("continue_2"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("continue_3"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("signupButton"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("backbutton_1_onsignup"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("backbutton_2_onsignup"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("backbutton_3_onsignup"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("login_on_recovery"), nullptr, this, nullptr);
	
	// Ensure unique connections
    connect(ui->stackedWidget->findChild<QPushButton*>("loginButton"), &QPushButton::clicked, this, &MainWindow::on_loginButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("forgot_password_on_login"), &QPushButton::clicked, this, &MainWindow::on_forgotPassowordButton_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("logoutOnMain"), &QPushButton::clicked, this, &MainWindow::on_logoutButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("createaccountbutton"), &QPushButton::clicked, this, &MainWindow::on_createaccountButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("loginButtonOnSignUpPage"), &QPushButton::clicked, this, &MainWindow::on_LoginOnSighnupButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("continue_1"), &QPushButton::clicked, this, &MainWindow::on_continue_1_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("continue_2"), &QPushButton::clicked, this, &MainWindow::on_continue_2_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("continue_3"), &QPushButton::clicked, this, &MainWindow::on_continue_3_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("signupButton"), &QPushButton::clicked, this, &MainWindow::on_signupButton_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("backbutton_1_onsignup"), &QPushButton::clicked, this, &MainWindow::on_backbutton_1_onsignup_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("backbutton_2_onsignup"), &QPushButton::clicked, this, &MainWindow::on_backbutton_2_onsignup_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("backbutton_3_onsignup"), &QPushButton::clicked, this, &MainWindow::on_backbutton_3_onsignup_clicked, Qt::UniqueConnection);
	connect(ui->stackedWidget->findChild<QPushButton*>("login_on_recovery"), &QPushButton::clicked, this, &MainWindow::on_login_on_recovery_clicked, Qt::UniqueConnection);	
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
	QString firstName = ui->stackedWidget->findChild<QLineEdit*>("first_name_on_signup")->text();
	qDebug()<<"first name: "<<firstName;
	if(firstName.length() == 0){
		QMessageBox::warning(this, "Invalid First Name", "Please enter a valid first name.");
		return;
	}
	
	QString middleName = ui->stackedWidget->findChild<QLineEdit*>("middle_name_on_signup")->text();
	qDebug()<<"middle name: "<<middleName;

	QString lastName = ui->stackedWidget->findChild<QLineEdit*>("last_name_on_signup")->text();
	qDebug()<<"last name: "<<lastName;
	if(lastName.length() == 0){
		QMessageBox::warning(this, "Invalid Last Name", "Please enter a valid last name.");
		return;
	}
	ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_continue_2_clicked()
{
	QString email = ui->stackedWidget->findChild<QLineEdit*>("email_on_signup")->text();
	qDebug()<<"email: "<<email;
	if(email.length() == 0){
		QMessageBox::warning(this, "Invalid Email", "Please enter a valid email.");
		return;
	}

	QRegularExpression emailRegex(
        R"((^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$))"
    );
	 QRegularExpressionMatch match = emailRegex.match(email);
	 if(!match.hasMatch()){
		 QMessageBox::warning(this, "Invalid Email", "Please enter a valid email.");
		 return;
	 }

	QString address = ui->stackedWidget->findChild<QLineEdit*>("address_on_signup")->text();
	qDebug()<<"address: "<<address;
	if(address.length() == 0){
		QMessageBox::warning(this, "Invalid Address", "Please enter a valid address.");
		return;
	}

	QString gender = "male";
	QRadioButton *maleRadioButton = ui->stackedWidget->findChild<QRadioButton*>("male_radiobox");
    QRadioButton *femaleRadioButton = ui->stackedWidget->findChild<QRadioButton*>("female_radiobox");
    
	if (maleRadioButton && maleRadioButton->isChecked()) {
       gender = "male";
    }

	else if(femaleRadioButton && femaleRadioButton->isChecked()) {
		gender = "female";
	}
	else{
		gender = "other";
	}
	qDebug()<<"Gender : "<<gender;
	ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_signupButton_clicked()
{
	QString phoneNumberStr = ui->stackedWidget->findChild<QLineEdit*>("phone_number_on_signup")->text();
	qDebug()<<"phone number: "<<phoneNumberStr;
	
	long int phoneNumber = phoneNumberStr.toLong();
	if (phoneNumberStr.length() != 10) {
		QMessageBox::warning(this, "Invalid Phone Number", "Please enter a valid phone number.");
		return;
	}

	QString password = ui->stackedWidget->findChild<QLineEdit*>("password_on_signup")->text();
	QString confirmpassword = ui->stackedWidget->findChild<QLineEdit*>("confirmpassword_on_signup")->text();
	qDebug()<<"password: "<<password;
	if (password.length() < 8) {
		QMessageBox::warning(this, "Invalid Password", "Please enter a valid password.");
		return;
	}
	if(password != confirmpassword){
		QMessageBox::warning(this, "Password Mismatch", "Passwords do not match.");
		return;
	}

	ui->stackedWidget->setCurrentIndex(4);
}
void MainWindow::on_backbutton_1_onsignup_clicked()
{
	ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_backbutton_2_onsignup_clicked()
{
	ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_backbutton_3_onsignup_clicked()
{
	ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_continue_3_clicked(){

	QString movie = ui->stackedWidget->findChild<QLineEdit*>("movie_signup")->text();
	qDebug()<<"movie: "<<movie;
	if(movie.length() == 0){
		QMessageBox::warning(this, "Invalid Movie", "Please enter a valid movie.");
		return;
	}


	QString food = ui->stackedWidget->findChild<QLineEdit*>("food_signup")->text();
	qDebug()<<"food: "<<food;
	if(food.length() == 0){
		QMessageBox::warning(this, "Invalid Food", "Please enter a valid food.");
		return;
	}

	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "confirmation", "Would you like to confirm the account setup?",
	 QMessageBox::Yes | QMessageBox::No);
	 if (reply == QMessageBox::Yes)
	 {

		QMessageBox::information(this, "Account Created", "Account has been created successfully.");
		ui->stackedWidget->setCurrentIndex(0);
	 }
	 else{
		return;
	 }
}

void MainWindow::on_forgotPassowordButton_clicked()
{
	qDebug() << "forgot password button clicked";
	ui->stackedWidget->setCurrentIndex(5);
}
void MainWindow::on_login_on_recovery_clicked()
{
	qDebug() << "login button clicked";
	ui->stackedWidget->setCurrentIndex(0);
}