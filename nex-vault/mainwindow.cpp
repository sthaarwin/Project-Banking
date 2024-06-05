#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
	ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_signupButton_clicked()
{
	ui->stackedWidget->setCurrentIndex(0);
}