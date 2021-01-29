#ifndef LAPTOPSWINDOW_H
#define LAPTOPSWINDOW_H

#include <QMainWindow>
#include "item.h"
namespace Ui {
class laptopswindow;
}

class laptopswindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit laptopswindow(QWidget *parent = nullptr);
    ~laptopswindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

signals:
    void addtocartsignal(item);
private:
    Ui::laptopswindow *ui;
};

#endif // LAPTOPSWINDOW_H
