#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cart= new Cart;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    laptops =new laptopswindow(this);
    laptops->show();
}
void MainWindow::on_pushButton_2_clicked()
{
    mobiles=new mobile_window(this);
    mobiles->show();
}
void MainWindow::on_pushButton_3_clicked()
{
    courses=new courseswindow(this);
    courses->show();
}
void MainWindow::additem(item a)
{
    cart->addtocart(a);
    QMessageBox::StandardButton btn= QMessageBox::information(this,"Success","Added to Cart");
}

void MainWindow::on_pushButton_4_clicked()
{
    cartwin= new Cartwindow(this,cart);
    cartwin->show();
}
