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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *m_localhost;
    QPushButton *m_no;
    QLabel *label_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_server;
    QLineEdit *m_port;
    QPushButton *m_yes;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName("Setting");
        Setting->resize(335, 369);
        gridLayout = new QGridLayout(Setting);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Setting);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        m_localhost = new QComboBox(Setting);
        m_localhost->setObjectName("m_localhost");

        gridLayout->addWidget(m_localhost, 2, 2, 1, 2);

        m_no = new QPushButton(Setting);
        m_no->setObjectName("m_no");
        m_no->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(m_no, 3, 3, 1, 1);

        label_3 = new QLabel(Setting);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        label_2 = new QLabel(Setting);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        m_server = new QLineEdit(Setting);
        m_server->setObjectName("m_server");

        gridLayout->addWidget(m_server, 0, 2, 1, 2);

        m_port = new QLineEdit(Setting);
        m_port->setObjectName("m_port");

        gridLayout->addWidget(m_port, 1, 2, 1, 2);

        m_yes = new QPushButton(Setting);
        m_yes->setObjectName("m_yes");
        m_yes->setMaximumSize(QSize(90, 30));

        gridLayout->addWidget(m_yes, 3, 1, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);


        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QCoreApplication::translate("Setting", "Form", nullptr));
        label->setText(QCoreApplication::translate("Setting", "\346\234\215\345\212\241\345\231\250IP\357\274\232", nullptr));
        m_no->setText(QCoreApplication::translate("Setting", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QCoreApplication::translate("Setting", "\346\234\254\345\234\260IP:", nullptr));
        label_2->setText(QCoreApplication::translate("Setting", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        m_yes->setText(QCoreApplication::translate("Setting", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
