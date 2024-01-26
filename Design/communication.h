#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <QWidget>
#include "setting.h"

namespace Ui {
class Communication;
}

class Communication : public QWidget
{
    Q_OBJECT

public:
    explicit Communication(QWidget *parent = nullptr);
    ~Communication();

private slots:
    void on_m_min_clicked();

    void on_m_max_clicked();

    void on_m_close_clicked();

    void on_m_add_clicked();

    void on_m_search_clicked();

    void on_m_setting_clicked();

private:
    Ui::Communication *ui;
    Setting m_s;
    int pressnum = 0;
};

#endif // COMMUNICATION_H
