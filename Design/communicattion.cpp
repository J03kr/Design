#include "communicattion.h"
#include "ui_communicattion.h"

Communicattion::Communicattion(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Communicattion)
{
    ui->setupUi(this);
}

Communicattion::~Communicattion()
{
    delete ui;
}
