#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
#include "setting.h"
#include "communication.h"

namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QWidget
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_m_setting_clicked();

    void on_m_close_released();

    void on_m_login_clicked();

    void on_m_register_clicked();

private:
    Ui::Login *ui;
    Setting m_s;
    Communication m_c;
};
#endif // LOGIN_H
