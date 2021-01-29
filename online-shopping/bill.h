#ifndef BILL_H
#define BILL_H

#include <QMainWindow>

namespace Ui {
class bill;
}

class bill : public QMainWindow
{
    Q_OBJECT

public:
    explicit bill(QWidget *parent = nullptr);
    ~bill();

private:
    Ui::bill *ui;
};

#endif // BILL_H
