/********************************************************************************
** Form generated from reading UI file 'communication.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMUNICATION_H
#define UI_COMMUNICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Communication
{
public:
    QWidget *background1;
    QListView *friend_list;
    QWidget *m_title;
    QPushButton *m_min;
    QPushButton *m_max;
    QPushButton *m_close;
    QLabel *label;
    QWidget *background3;
    QGridLayout *gridLayout;
    QTextBrowser *m_com;
    QWidget *background4;
    QTextEdit *m_input;
    QPushButton *m_send;
    QWidget *background2;
    QPushButton *m_search;
    QPushButton *m_add;
    QLineEdit *m_friend;

    void setupUi(QWidget *Communication)
    {
        if (Communication->objectName().isEmpty())
            Communication->setObjectName("Communication");
        Communication->resize(1320, 800);
        Communication->setMinimumSize(QSize(1320, 800));
        Communication->setMaximumSize(QSize(1320, 800));
        Communication->setStyleSheet(QString::fromUtf8("QWidget#m_add{border-image:url(:/res/add.png);}\n"
"QWidget#m_search{border-image:url(:/res/search.png);}\n"
"QWidget#m_close{border-image:url(:/res/close .png);}\n"
"QWidget#m_max{border-image:url(:/res/max.png);}\n"
"QWidget#m_min{border-image:url(:/res/min.png);}"));
        background1 = new QWidget(Communication);
        background1->setObjectName("background1");
        background1->setGeometry(QRect(0, 130, 370, 670));
        background1->setMinimumSize(QSize(370, 670));
        background1->setMaximumSize(QSize(370, 670));
        friend_list = new QListView(background1);
        friend_list->setObjectName("friend_list");
        friend_list->setGeometry(QRect(0, 0, 370, 670));
        friend_list->setMinimumSize(QSize(370, 670));
        friend_list->setMaximumSize(QSize(16777215, 16777215));
        m_title = new QWidget(Communication);
        m_title->setObjectName("m_title");
        m_title->setGeometry(QRect(370, 0, 950, 80));
        m_title->setMinimumSize(QSize(950, 80));
        m_title->setMaximumSize(QSize(16777215, 16777215));
        m_min = new QPushButton(m_title);
        m_min->setObjectName("m_min");
        m_min->setGeometry(QRect(830, 0, 40, 40));
        m_max = new QPushButton(m_title);
        m_max->setObjectName("m_max");
        m_max->setGeometry(QRect(870, 0, 40, 40));
        m_close = new QPushButton(m_title);
        m_close->setObjectName("m_close");
        m_close->setGeometry(QRect(910, 0, 40, 40));
        label = new QLabel(m_title);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 40, 381, 40));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        background3 = new QWidget(Communication);
        background3->setObjectName("background3");
        background3->setGeometry(QRect(370, 80, 950, 550));
        background3->setMinimumSize(QSize(950, 550));
        background3->setMaximumSize(QSize(950, 550));
        gridLayout = new QGridLayout(background3);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_com = new QTextBrowser(background3);
        m_com->setObjectName("m_com");
        m_com->setMinimumSize(QSize(950, 550));
        m_com->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(m_com, 0, 0, 1, 1);

        background4 = new QWidget(Communication);
        background4->setObjectName("background4");
        background4->setGeometry(QRect(370, 630, 950, 170));
        background4->setMinimumSize(QSize(950, 170));
        background4->setMaximumSize(QSize(950, 170));
        m_input = new QTextEdit(background4);
        m_input->setObjectName("m_input");
        m_input->setGeometry(QRect(0, 0, 950, 120));
        m_input->setMinimumSize(QSize(950, 120));
        m_input->setMaximumSize(QSize(16777215, 16777215));
        m_send = new QPushButton(background4);
        m_send->setObjectName("m_send");
        m_send->setGeometry(QRect(850, 130, 100, 40));
        background2 = new QWidget(Communication);
        background2->setObjectName("background2");
        background2->setGeometry(QRect(0, 0, 370, 130));
        background2->setMinimumSize(QSize(370, 130));
        background2->setMaximumSize(QSize(16777215, 16777215));
        m_search = new QPushButton(background2);
        m_search->setObjectName("m_search");
        m_search->setGeometry(QRect(40, 50, 40, 40));
        m_search->setMinimumSize(QSize(40, 40));
        m_search->setMaximumSize(QSize(40, 40));
        m_add = new QPushButton(background2);
        m_add->setObjectName("m_add");
        m_add->setGeometry(QRect(300, 50, 40, 40));
        m_add->setMinimumSize(QSize(40, 40));
        m_add->setMaximumSize(QSize(40, 40));
        m_friend = new QLineEdit(background2);
        m_friend->setObjectName("m_friend");
        m_friend->setGeometry(QRect(80, 50, 201, 40));
        m_friend->setMinimumSize(QSize(0, 40));
        m_friend->setMaximumSize(QSize(16777215, 40));

        retranslateUi(Communication);

        QMetaObject::connectSlotsByName(Communication);
    } // setupUi

    void retranslateUi(QWidget *Communication)
    {
        Communication->setWindowTitle(QCoreApplication::translate("Communication", "Form", nullptr));
        m_min->setText(QString());
        m_max->setText(QString());
        m_close->setText(QString());
        label->setText(QCoreApplication::translate("Communication", "\351\200\232\350\256\257\345\257\271\350\261\241", nullptr));
        m_send->setText(QCoreApplication::translate("Communication", "\345\217\221\351\200\201", nullptr));
        m_search->setText(QString());
        m_add->setText(QString());
        m_friend->setPlaceholderText(QCoreApplication::translate("Communication", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Communication: public Ui_Communication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMUNICATION_H
