#ifndef MOBILE_WINDOW_H
#define MOBILE_WINDOW_H

#include <QMainWindow>

namespace Ui {
class mobile_window;
}

class mobile_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit mobile_window(QWidget *parent = nullptr);
    ~mobile_window();

private:
    Ui::mobile_window *ui;
};

#endif // MOBILE_WINDOW_H
