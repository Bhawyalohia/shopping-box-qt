#include "cartwindow.h"
#include "ui_cartwindow.h"
#include <QLabel>
#include <QGridLayout>
#include <QGroupBox>
Cartwindow::Cartwindow(QWidget *parent,Cart *itemsadded) :
    QMainWindow(parent),
    ui(new Ui::Cartwindow)
{
    ui->setupUi(this);
    cart = itemsadded;
    showitems();
}
void Cartwindow::showitems()
{
  QVector <item> items=cart->getitems();
  qint64 sum=0;
  for(int i=0;i<items.size();i++)
  {
    addcomp(items[i]);
    sum+=(items[i].getprice()*items[i].getquantity());
  }
  ui->totalamount->setText("Total amount : "+QString::number(sum));
}
void Cartwindow::addcomp(item pitem)
{
  ui->items->addItem(pitem.getname());
  ui->price->addItem(QString::number(pitem.getprice()));
  ui->quantity->addItem(QString::number(pitem.getquantity()));
  ui->totalprice->addItem(QString::number(pitem.getquantity()*pitem.getprice()));
}
Cartwindow::~Cartwindow()
{
    delete ui;
}
