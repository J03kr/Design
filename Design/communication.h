#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <QWidget>
#include "setting.h"
#include<QTcpSocket>
namespace Ui {
class Communication;
}

class Communication : public QWidget
{
    Q_OBJECT

public:
    explicit Communication(QWidget *parent = nullptr);
    ~Communication();
    void tcp_connect();
    void dealClientread();
    void dealPack(QByteArray arr);

private slots:
    void on_m_min_clicked();

    void on_m_max_clicked();

    void on_m_close_clicked();

    void on_m_add_clicked();

    void on_m_search_clicked();

    void on_m_setting_clicked();

    void on_m_send_clicked();

private:
    Ui::Communication *ui;
    Setting m_s;
    int pressnum = 0;
    QTcpSocket m_socket;
    QByteArray m_buffer;
    int m_iPackLen;
};

#endif // COMMUNICATION_H
