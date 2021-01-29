#ifndef COURSESWINDOW_H
#define COURSESWINDOW_H
#include "cart.h"
#include <QMainWindow>

namespace Ui {
class courseswindow;
}

class courseswindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit courseswindow(QWidget *parent = nullptr);
    ~courseswindow();

private:
    Ui::courseswindow *ui;
};

#endif // COURSESWINDOW_H
