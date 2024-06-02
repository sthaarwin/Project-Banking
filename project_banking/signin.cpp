#include "signin.h"
#include "ui_signin.h"

Signin::Signin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signin)
{
    ui->setupUi(this);
}

Signin::~Signin()
{
    delete ui;
}
