#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

Login::~Login()
{
    delete ui;
}

void Login::on_m_setting_clicked()
{
    m_s.show();
}


void Login::on_m_close_released()
{
    exit(0);
}


void Login::on_m_login_clicked()
{
    auto username = ui->m_user->text();
    auto password = ui->m_passwd->text();
    if(username.isEmpty())
    {
        ui->m_tip->setText("用户名不能为空");
    }
    else if(password.isEmpty())
    {
        ui->m_tip->setText("密码不能为空");
    }
    // else if(username == "ssdqg" && password == "ssdqg")
    else if(username == "1" && password == "1")
    {
        this->hide();
        m_c.show();
    }
    else
    {
        ui->m_tip->setText("用户名或密码不正确");
    }


}


void Login::on_m_register_clicked()
{

}

