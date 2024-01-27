#include "setting.h"
#include "ui_setting.h"
#include<QNetworkInterface>

Setting::Setting(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Setting)
{
    ui->setupUi(this);
    ui->m_localhost->clear();
    auto l=QNetworkInterface::allAddresses();
    for(auto it:l){
        qDebug()<<it.toString();
        if(QAbstractSocket::IPv4Protocol== it.protocol())
            ui->m_localhost->addItem(it.toString());
    }
}

Setting::~Setting()
{
    delete ui;
}

void Setting::on_m_yes_clicked()
{
    this->done(1);
}


void Setting::on_m_no_clicked()
{
    this->done(0);
}

void Setting::showEvent(QShowEvent *event)
{
    ui->m_localhost->clear();
    auto l=QNetworkInterface::allAddresses();
    for(auto it:l){
        if(QAbstractSocket::IPv4Protocol== it.protocol())
            ui->m_localhost->addItem(it.toString());
    }
}

QString Setting::getLocalIp()
{
    return ui->m_localhost->currentText();
}

QString Setting::getServerIp()
{
    return ui->m_server->text();
}

int Setting::serverPort()
{
    return ui->m_port->text().toInt();
}

