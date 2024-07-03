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
#include <QtSql/QSqlRecord>
#include <string>
#include <QRegularExpression>
#include <QRadioButton>
#include <QVariant>
#include <QRandomGenerator>


class user{
    public:
      QString firstName;
      QString lastName;
      QString middleName;
      long int phoneNumber;
      QString password;
      QString email;
	  QString gender;
	  QString accountNumber;
	  QString creditNumber;
	  long int amount;
      QString address;
	  QString security1;
	  QString security2;
	  QString transactionHistory;
	  QString creditExpiry;
};
user user;

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	ui->stackedWidget->setCurrentIndex(0);
	this->setFixedSize(this->width(), this->height());
	this->setWindowTitle("Nex Vault");

	
	//VALIDATOR SETUP
	QIntValidator* phoneNumberValidator = new QIntValidator(0, 9999999999L, this);
	ui->stackedWidget->findChild<QLineEdit*>("phoneNumberInputLogin")->setValidator(phoneNumberValidator);
	ui->stackedWidget->findChild<QLineEdit*>("phone_number_on_signup")->setValidator(phoneNumberValidator);
	ui->stackedWidget->findChild<QLineEdit*>("phone_number_on_recovery")->setValidator(phoneNumberValidator);
    ui->stackedWidget->findChild<QLineEdit*>("account_number_on_transaction")->setValidator(phoneNumberValidator);
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
	disconnect(ui->stackedWidget->findChild<QPushButton*>("login_on_recovery_1"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("confirmButton_on_recovery"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("recoveryButton_on_recovery"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("TransferFunds"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("back_on_transaction"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("continue_on_transaction"), nullptr, this, nullptr);
	disconnect(ui->stackedWidget->findChild<QPushButton*>("back_on_verify"), nullptr, this, nullptr);
	
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
	connect(ui->stackedWidget->findChild<QPushButton*>("login_on_recovery_1"), &QPushButton::clicked, this, &MainWindow::on_login_on_recovery_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("login_on_recovery_2"), &QPushButton::clicked, this, &MainWindow::on_login_on_recovery_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("confirmButton_on_recovery"), &QPushButton::clicked, this, &MainWindow::on_confirm_button_on_recovery_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("recoveryButton_on_recovery"), &QPushButton::clicked, this, &MainWindow::on_recovery_button_on_recovery_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("TransferFunds"), &QPushButton::clicked, this, &MainWindow::on_transer_funds_button_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("back_on_transaction"), &QPushButton::clicked, this, &MainWindow::on_back_on_transaction_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("continue_on_transaction"), &QPushButton::clicked, this, &MainWindow::on_continue_on_transaction_clicked, Qt::UniqueConnection);	
	connect(ui->stackedWidget->findChild<QPushButton*>("back_on_verify"), &QPushButton::clicked, this, &MainWindow::on_back_on_verify_clicked, Qt::UniqueConnection);		
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
	
	StartDBConnection();
	
	QSqlQuery query;
	query.prepare("SELECT * FROM users WHERE PhoneNumber = :UserPhoneNumber AND Password = :UserPassword");
	query.bindValue(":UserPhoneNumber", QString::number(phoneNumber));
	query.bindValue(":UserPassword", password);
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


void MainWindow::StartDBConnection(){
	QString databasePath = getdatabasepath();
	QString path = QCoreApplication::applicationFilePath();
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName(databasePath);
	qDebug() << "Database path:" << db.databaseName();

	if (!db.open()) {
		qDebug() << "Error: Could not connect to database." << db.lastError();
	}
	else {
		qDebug() << "connected to database.";
	}
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


	if (validate_login(phoneNumber, password)) {
		ui->stackedWidget->setCurrentIndex(7);
		StartUISetup(phoneNumberStr);
		}
	else {
		QMessageBox::warning(this, "Login Failed", "Invalid phone number or password.");
		return;	
	}
}


void MainWindow::StartUISetup(QString Number){

	StartDBConnection();
	QSqlQuery query;
	query.prepare("SELECT * FROM users WHERE PhoneNumber = :UserPhoneNumber");
	query.bindValue(":UserPhoneNumber", Number);
	query.exec();
	
	 if (query.next()) {
    QString userName = query.value("first_name").toString();
    QString number = query.value("account_number").toString();
    QString balance = query.value("current_amount").toString();

    ui->stackedWidget->findChild<QLabel*>("FirstName")->setText(userName);
    ui->stackedWidget->findChild<QLabel*>("AccountNumber")->setText(number);
    ui->stackedWidget->findChild<QLabel*>("CurrentBalance")->setText(balance);
} else {
    qDebug() << "No records found for PhoneNumber:" << Number;
	}
}

void MainWindow::on_transer_funds_button_clicked(){
	ui->stackedWidget->setCurrentIndex(8);
}



void MainWindow::on_logoutButton_clicked()
{
	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "Logout", "Are you sure you want to logout?",
	 QMessageBox::Yes | QMessageBox::No);
	 if (reply == QMessageBox::Yes)
	 {
		clear_fields();
		ui->stackedWidget->setCurrentIndex(0);
	 }
	 else{
		return;
	 }
}


void MainWindow::on_createaccountButton_clicked()
{

	clear_fields();
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
	user.firstName = firstName;
	user.middleName = middleName;
	user.lastName = lastName;
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

	if(check_email(email)){
		QMessageBox::warning(this, "Email Exists", "Email already exists.");
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
	
	user.email = email;
	user.address = address;
	user.gender = gender;
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

	if (check_phone_number(phoneNumber)) {
		QMessageBox::warning(this, "Phone Number Exists", "Phone number already exists.");
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

	user.phoneNumber = phoneNumber;
	user.password = password;
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

	user.security1 = movie;
	user.security2 = food;
	user.amount = 0;
	user.creditNumber = generateCreditCardNumber();
	user.accountNumber = generateAccountNumber();
	user.creditExpiry = generateCreditCardExpiry();

	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "confirmation", "Would you like to confirm the account setup?",
	 QMessageBox::Yes | QMessageBox::No);
	 if (reply == QMessageBox::Yes)
	 {
	
	StartDBConnection();
	QSqlQuery query;
	query.prepare("INSERT INTO users (PhoneNumber, Password, first_name, middle_name, last_name, email, gender, account_number, credit_card_number, security_question_1, security_question_2, current_amount, address, credit_expiry) VALUES (:PhoneNumber, :Password, :FirstName, :MiddleName, :LastName, :Email, :Gender, :AccountNumber, :CreditNumber, :Security1, :Security2, :CurrentAmount, :Address, :credit_expiry)");
	
	query.bindValue(":PhoneNumber", QString::number(user.phoneNumber));
	query.bindValue(":Password", user.password);
	query.bindValue(":FirstName", user.firstName);
	query.bindValue(":MiddleName", user.middleName);
	query.bindValue(":LastName", user.lastName);
	query.bindValue(":Email", user.email);
	query.bindValue(":Gender", user.gender);
	query.bindValue(":AccountNumber", user.accountNumber);
	query.bindValue(":CreditNumber", user.creditNumber);
	query.bindValue(":Security1", user.security1);
	query.bindValue(":Security2", user.security2);
	query.bindValue(":CurrentAmount", QVariant::fromValue<qlonglong>(user.amount));
	query.bindValue(":Address", user.address);
	query.bindValue(":credit_expiry", user.creditExpiry);

		if (!query.exec()) {
			QMessageBox::warning(this, "Error", "Account creation failed.");
			qDebug() << "Error: Could not execute query." << query.lastError();
			return;
		}
		
	if(!createTransactionTable( QString::number(user.phoneNumber))){
		QMessageBox::warning(this, "Error", "Account creation failed.");
		return;
	}

		QMessageBox::information(this, "Account Created", "Account has been created successfully.");
		clear_fields();
		ui->stackedWidget->setCurrentIndex(0);
	 }
	 else{
		return;
	 }
}

void MainWindow::on_forgotPassowordButton_clicked()
{
	clear_fields();
	qDebug() << "forgot password button clicked";
	ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_login_on_recovery_clicked()
{
	clear_fields();
	qDebug() << "login button clicked";
	ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_confirm_button_on_recovery_clicked()
{
	QString phoneNumberStr = ui->stackedWidget->findChild<QLineEdit*>("phone_number_on_recovery")->text();
	qDebug()<<"phone number: "<<phoneNumberStr;
	
	long int phoneNumber = phoneNumberStr.toLong();
	if (phoneNumberStr.length() != 10) {
		QMessageBox::warning(this, "Invalid Phone Number", "Please enter a valid phone number.");
		return;
	}

	QString movie = ui->stackedWidget->findChild<QLineEdit*>("movie_on_recovery")->text();
	QString food = ui->stackedWidget->findChild<QLineEdit*>("food_on_recovery")->text();
	
	if (movie.length() == 0) {
		QMessageBox::warning(this, "Invalid movie", "Please enter a valid movie.");
		return;
	}
	
	if (food.length() == 0) {
		QMessageBox::warning(this, "Invalid Food", "Please enter a valid food.");
		return;
	}

	if(!validate_recovery(phoneNumber, movie, food)){
		QMessageBox::warning(this, "Invalid Details", "Mismatched phone number or security questions.");
		return;
	}
	user.phoneNumber = phoneNumber;
	ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_recovery_button_on_recovery_clicked()
{
	
	QString password = ui->stackedWidget->findChild<QLineEdit*>("password_on_recovery")->text();
	QString confirmpassword = ui->stackedWidget->findChild<QLineEdit*>("confirmpassword_on_recovery")->text();
	
	if (password.length() < 8 || confirmpassword.length() < 8) {
		QMessageBox::warning(this, "Invalid password", "Please enter a valid password.");
		return;
	}
	
	if (password != confirmpassword) {
		QMessageBox::warning(this, "Password Mismatch", "Passwords do not match.");
		return;
	}

	QSqlQuery query;
	query.prepare("UPDATE users SET Password = :newPassword  WHERE phoneNumber = :conditionValue");
	query.bindValue(":newPassword", password);
	query.bindValue(":conditionValue", QString::number(user.phoneNumber));

		if (!query.exec()) {
			qDebug() << "Error: " << query.lastError();
			QMessageBox::warning(this, "Error", "Password change failed.");
		}
	QMessageBox :: information(this, "Password Changed", "Password has been changed successfully.");
	ui->stackedWidget->setCurrentIndex(0);
}


QString MainWindow::generateCreditCardNumber() {
    QString creditCardNumber;
    for (int i = 0; i < 16; ++i) {
        int digit = QRandomGenerator::global()->bounded(10);
        creditCardNumber.append(QString::number(digit));
    }
    return creditCardNumber;
}

QString MainWindow::generateAccountNumber() {
    QString accountNumber;
    for (int i = 0; i < 10; ++i) {
        int digit = QRandomGenerator::global()->bounded(10);
        accountNumber.append(QString::number(digit));
    }
    return accountNumber;
}

QString MainWindow::generateCreditCardExpiry(){
	int month = QRandomGenerator::global()->bounded(1, 13);
	int year = QRandomGenerator::global()->bounded(26, 30);
	QString expiry = QString::number(month)+"/"+QString::number(year);
	return expiry;
}

void MainWindow::clear_fields(){
	foreach (QWidget *widget, ui->stackedWidget->findChildren<QWidget*>()) {
			QLineEdit *lineEdit = qobject_cast<QLineEdit*>(widget);
			if (lineEdit) {
				lineEdit->clear(); 
			}
		}
}


bool MainWindow::check_phone_number(long int phoneNumber){
	StartDBConnection();
	QSqlQuery query;
	query.prepare("SELECT * FROM users WHERE PhoneNumber = :UserPhoneNumber");
	query.bindValue(":UserPhoneNumber", QString::number(phoneNumber));

	if (!query.exec()) {
		qDebug() << "Error: Could not execute query." << query.lastError();
		return false;
	}
	if (query.next()) {
		qDebug() << "phone number exists.";
		return true;
	}
	qDebug() << "phone number doesnot exists.";
	return false;
}

bool MainWindow::check_email(QString email){
	StartDBConnection();

	QSqlQuery query;
	query.prepare("SELECT * FROM users WHERE email = :Email");
	query.bindValue(":Email", email);

	if (!query.exec()) {
		qDebug() << "Error: Could not execute query." << query.lastError();
		return false;
	}
	if (query.next()) {
		qDebug() << "email exists.";
		return true;
	}
	qDebug() << "email doesnot exists.";
	return false;
}



bool MainWindow::validate_recovery(long int number, QString movie, QString food){
	StartDBConnection();

	QSqlQuery query;
	query.prepare("SELECT * FROM users WHERE PhoneNumber = :UserPhoneNumber AND security_question_1 = :movie AND security_question_2 = :food");
	query.bindValue(":UserPhoneNumber", QString::number(number));
	query.bindValue(":movie", movie);
	query.bindValue(":food", food);
	if (!query.exec()) {
		qDebug() << "Error: Could not execute query." << query.lastError();
		return false;
	}
	if (query.next()) {
		qDebug() << "users with this detail exists.";
		return true;
	}
	qDebug() << "user with this detail doesnot exists.";
	return false;
}

bool MainWindow :: createTransactionTable(const QString& phoneNumber) {
    QSqlQuery query;
    QString tableName = "t_" + phoneNumber;
    QString createTableQuery = QString(
        "CREATE TABLE IF NOT EXISTS %1 ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "user_id INTEGER NOT NULL, "
        "amount REAL NOT NULL, "
        "transaction_type TEXT NOT NULL, "
        "transaction_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP)"
    ).arg(tableName);

    query.prepare(createTableQuery);

    if (!query.exec()) {
        qDebug() << "Error: Table creation error." << query.lastError();
        return false;
    }

    qDebug() << "Table created successfully for phone number:" << phoneNumber;
    return true;
}


void MainWindow::on_back_on_transaction_clicked(){
	ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_continue_on_transaction_clicked(){
	QString account_number = ui->stackedWidget->findChild<QLineEdit*>("account_number_on_transaction")->text();
	if(account_number.length() < 10){
		QMessageBox::warning(this, "Invalid Account Number", "Please enter a valid account number.");
		return;
	}
	ui->stackedWidget->setCurrentIndex(9);
}
void MainWindow::on_back_on_verify_clicked(){
	ui->stackedWidget->setCurrentIndex(8);
}