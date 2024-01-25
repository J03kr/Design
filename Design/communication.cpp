#include "communication.h"
#include "ui_communication.h"

Communication::Communication(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Communication)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

Communication::~Communication()
{
    delete ui;
}

void Communication::on_m_min_clicked()
{
    showMinimized();
}


void Communication::on_m_max_clicked()
{
    pressnum++;
    if (pressnum%2){
        showMaximized();
    }
    else{
        showNormal();
    }
}


void Communication::on_m_close_clicked()
{
    exit(0);
}


void Communication::on_m_add_clicked()
{

}


void Communication::on_m_search_clicked()
{

}

