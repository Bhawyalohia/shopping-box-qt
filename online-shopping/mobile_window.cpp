#include "mobile_window.h"
#include "ui_mobile_window.h"

mobile_window::mobile_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mobile_window)
{
    ui->setupUi(this);
}

mobile_window::~mobile_window()
{
    delete ui;
}
