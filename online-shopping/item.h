#ifndef ITEM_H
#define ITEM_H
#include <QtGlobal>
#include <QString>
class item
{
    QString name;
    qint64 price;
    qint64 quantity;
public:
    item();
    item(QString name,qint64 price,qint64 quantity=1);
    void changequantity(qint64 quan);
    QString getname();
    qint64 getprice();
    qint64 getquantity();
};

#endif // ITEM_H
