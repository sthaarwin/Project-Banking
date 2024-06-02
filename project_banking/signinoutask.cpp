#include "signinoutask.h"
#include "ui_signinoutask.h"

signinoutask::signinoutask(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signinoutask)
{
    ui->setupUi(this);
}

signinoutask::~signinoutask()
{
    delete ui;
}
