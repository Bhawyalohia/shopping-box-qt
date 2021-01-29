#include "item.h"

item::item()
{
    name="";
    price=0;
    quantity=0;
}
item::item(QString name,qint64 price,qint64 quantity):name(name),price(price),quantity(quantity)
{}
void item::changequantity(qint64 quan)
{
    quantity=quan;
}
QString item::getname()
{
    return name;
}
qint64 item::getprice()
{
    return price;
}
qint64 item::getquantity()
{
    return quantity;
}
