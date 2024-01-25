/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *m_backgroud2;
    QWidget *m_backgroud3;
    QPushButton *m_close;
    QPushButton *m_setting;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *m_user;
    QLineEdit *m_passwd;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_login;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_register;
    QSpacerItem *horizontalSpacer_3;
    QLabel *m_tip;
    QWidget *m_backgroud1;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(850, 650);
        Login->setMinimumSize(QSize(850, 650));
        Login->setMaximumSize(QSize(850, 650));
        Login->setStyleSheet(QString::fromUtf8("QWidget#m_close{border-image:url(:/res/close .png);}\n"
"QWidget#m_setting{border-image:url(:/res/setting.png);}\n"
"QWidget#m_backgroud1{border-image:url(:/res/backgroud.webp);}\n"
"QWidget#m_backgroud2{color:rgb(255,255,255);}\n"
"QWidget#m_tip{color:red;}\n"
""));
        m_backgroud2 = new QWidget(Login);
        m_backgroud2->setObjectName("m_backgroud2");
        m_backgroud2->setGeometry(QRect(500, 0, 350, 650));
        m_backgroud2->setMinimumSize(QSize(350, 650));
        m_backgroud2->setMaximumSize(QSize(350, 650));
        m_backgroud3 = new QWidget(m_backgroud2);
        m_backgroud3->setObjectName("m_backgroud3");
        m_backgroud3->setGeometry(QRect(0, 0, 350, 280));
        m_backgroud3->setMinimumSize(QSize(350, 280));
        m_backgroud3->setMaximumSize(QSize(350, 280));
        m_backgroud3->setFocusPolicy(Qt::NoFocus);
        m_close = new QPushButton(m_backgroud3);
        m_close->setObjectName("m_close");
        m_close->setGeometry(QRect(310, 0, 40, 40));
        m_setting = new QPushButton(m_backgroud3);
        m_setting->setObjectName("m_setting");
        m_setting->setGeometry(QRect(270, 0, 40, 40));
        widget_3 = new QWidget(m_backgroud2);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(30, 280, 280, 120));
        widget_3->setMinimumSize(QSize(280, 120));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_user = new QLineEdit(widget_3);
        m_user->setObjectName("m_user");
        m_user->setMinimumSize(QSize(280, 60));

        verticalLayout->addWidget(m_user);

        m_passwd = new QLineEdit(widget_3);
        m_passwd->setObjectName("m_passwd");
        m_passwd->setMinimumSize(QSize(280, 60));

        verticalLayout->addWidget(m_passwd);

        widget_4 = new QWidget(m_backgroud2);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 430, 350, 60));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_login = new QPushButton(widget_4);
        m_login->setObjectName("m_login");
        m_login->setMinimumSize(QSize(60, 40));
        m_login->setMaximumSize(QSize(60, 40));

        horizontalLayout->addWidget(m_login);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_register = new QPushButton(widget_4);
        m_register->setObjectName("m_register");
        m_register->setMaximumSize(QSize(60, 40));

        horizontalLayout->addWidget(m_register);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        m_tip = new QLabel(m_backgroud2);
        m_tip->setObjectName("m_tip");
        m_tip->setGeometry(QRect(30, 500, 280, 60));
        m_backgroud1 = new QWidget(Login);
        m_backgroud1->setObjectName("m_backgroud1");
        m_backgroud1->setGeometry(QRect(0, 0, 500, 650));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        m_close->setText(QString());
        m_setting->setText(QString());
        m_user->setPlaceholderText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215/\350\264\246\345\217\267/\351\202\256\347\256\261", nullptr));
        m_passwd->setPlaceholderText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
        m_login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        m_register->setText(QCoreApplication::translate("Login", "\346\263\250\345\206\214", nullptr));
        m_tip->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
