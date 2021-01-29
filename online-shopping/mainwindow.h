#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <laptopswindow.h>
#include <mobile_window.h>
#include <courseswindow.h>
#include <cartwindow.h>
#include "cart.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    Cart *cart;
    Cartwindow *cartwin;
    ~MainWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void additem(item);

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    laptopswindow *laptops;
    mobile_window *mobiles;
    courseswindow *courses;

};
#endif // MAINWINDOW_H
