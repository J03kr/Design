#ifndef SETTING_H
#define SETTING_H

#include <QDialog>

namespace Ui {
class Setting;
}

class Setting : public QDialog
{
    Q_OBJECT

public:
    explicit Setting(QWidget *parent = nullptr);
    ~Setting();
    virtual void showEvent(QShowEvent * event);

    QString getLocalIp();
    QString getServerIp();
    int serverPort();

private slots:
    void on_m_yes_clicked();

    void on_m_no_clicked();

private:
    Ui::Setting *ui;
};

#endif // SETTING_H
