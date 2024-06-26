#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
	void on_loginButton_clicked();
    void on_logoutButton_clicked();
    void on_forgotPassowordButton_clicked();
    void on_createaccountButton_clicked();
    void on_LoginOnSighnupButton_clicked();
    void on_continue_1_clicked();
    void on_continue_2_clicked();
    void on_continue_3_clicked();
    void on_signupButton_clicked();
    void on_backbutton_1_onsignup_clicked();
    void on_backbutton_2_onsignup_clicked();
    void on_backbutton_3_onsignup_clicked();
    void on_login_on_recovery_clicked();
    void on_confirm_button_on_recovery_clicked();
    void on_recovery_button_on_recovery_clicked();
    QString getdatabasepath();
	bool validate_login(long int, QString);
    QString generateCreditCardNumber();
    QString generateAccountNumber();
    void clear_fields();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
