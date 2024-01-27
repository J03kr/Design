/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QGridLayout *gridLayout;
    QPushButton *m_yes;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *m_no;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *m_localhost;
    QLineEdit *m_port;
    QLineEdit *m_server;

    void setupUi(QDialog *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(299, 345);
        gridLayout = new QGridLayout(Setting);
        gridLayout->setObjectName("gridLayout");
        m_yes = new QPushButton(Setting);
        m_yes->setObjectName("m_yes");
        m_yes->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(m_yes, 3, 1, 1, 2);

        label = new QLabel(Setting);
        label->setObjectName("label");
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_2 = new QLabel(Setting);
        label_2->setObjectName("label_2");
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        m_no = new QPushButton(Setting);
        m_no->setObjectName("m_no");

        gridLayout->addWidget(m_no, 3, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 5, 1, 1);

        label_3 = new QLabel(Setting);
        label_3->setObjectName("label_3");
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 3, 1, 1);

        m_localhost = new QComboBox(Setting);
        m_localhost->setObjectName("m_localhost");

        gridLayout->addWidget(m_localhost, 2, 3, 1, 2);

        m_port = new QLineEdit(Setting);
        m_port->setObjectName("m_port");

        gridLayout->addWidget(m_port, 1, 3, 1, 2);

        m_server = new QLineEdit(Setting);
        m_server->setObjectName("m_server");

        gridLayout->addWidget(m_server, 0, 3, 1, 2);


        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QDialog *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Dialog", nullptr));
        m_yes->setText(QCoreApplication::translate("Setting", "\347\241\256\345\256\232", nullptr));
        label->setText(QCoreApplication::translate("Setting", "\346\234\215\345\212\241\345\231\250IP\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Setting", "\347\253\257\345\217\243\357\274\232", nullptr));
        m_no->setText(QCoreApplication::translate("Setting", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QCoreApplication::translate("Setting", "\346\234\254\345\234\260IP\357\274\232", nullptr));
        m_port->setText(QCoreApplication::translate("Setting", "8899", nullptr));
        m_server->setText(QCoreApplication::translate("Setting", "192.168.2.123", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
