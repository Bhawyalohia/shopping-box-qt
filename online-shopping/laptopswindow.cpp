#include "laptopswindow.h"
#include "ui_laptopswindow.h"
#include <QMessageBox>
laptopswindow::laptopswindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::laptopswindow)
{
    ui->setupUi(this);
    connect(this,SIGNAL(addtocartsignal(item)),parent,SLOT(additem(item)));
}
laptopswindow::~laptopswindow()
{
    delete ui;
}

void laptopswindow::on_pushButton_clicked()
{
  item newitem(ui->label_2->text(),(ui->label_3->text()).toInt(),(ui->spinBox->value()));
  emit addtocartsignal(newitem);
}


void laptopswindow::on_pushButton_2_clicked()
{
    item newitem(ui->name->text(),(ui->price->text()).toInt(),(ui->spinBox_2->value()));
    emit addtocartsignal(newitem);
}
