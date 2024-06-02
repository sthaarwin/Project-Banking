#ifndef SIGNINOUTASK_H
#define SIGNINOUTASK_H

#include <QDialog>

namespace Ui {
class signinoutask;
}

class signinoutask : public QDialog
{
    Q_OBJECT

public:
    explicit signinoutask(QWidget *parent = nullptr);
    ~signinoutask();

private:
    Ui::signinoutask *ui;
};

#endif // SIGNINOUTASK_H
