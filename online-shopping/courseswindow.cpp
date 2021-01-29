#include "courseswindow.h"
#include "ui_courseswindow.h"

courseswindow::courseswindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::courseswindow)
{
    ui->setupUi(this);
}

courseswindow::~courseswindow()
{
    delete ui;
}
