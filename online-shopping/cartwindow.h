#ifndef CARTWINDOW_H
#define CARTWINDOW_H

#include <QMainWindow>
#include "cart.h"
namespace Ui {
class Cartwindow;
}

class Cartwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cartwindow(QWidget *parent = nullptr,Cart *itemsadded=nullptr);
    ~Cartwindow();
    void showitems();
    void addcomp(item);
private:
    Ui::Cartwindow *ui;
    Cart *cart;
};

#endif // CARTWINDOW_H
