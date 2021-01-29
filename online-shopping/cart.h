#ifndef CART_H
#define CART_H

#include "item.h"
#include <QVector>
class Cart
{
  QVector <item> items;
public:
    Cart();
    void changequantity(QString name,qint64 newquan);
    void addtocart(item newitem);
    void removefromcart(QString name);
    qint64 exists(QString);
    QVector <item> getitems();

};

#endif // CART_H
