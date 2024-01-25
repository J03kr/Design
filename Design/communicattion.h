#ifndef COMMUNICATTION_H
#define COMMUNICATTION_H

#include <QWidget>

namespace Ui {
class Communicattion;
}

class Communicattion : public QWidget
{
    Q_OBJECT

public:
    explicit Communicattion(QWidget *parent = nullptr);
    ~Communicattion();

private:
    Ui::Communicattion *ui;

};

#endif // COMMUNICATTION_H
