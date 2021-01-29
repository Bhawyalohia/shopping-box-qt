#include "cart.h"

Cart::Cart()
{}
void Cart::addtocart(item newitem)
{
    qint64 index=exists(newitem.getname());
    if(index==-1)
    items.push_back(newitem);
    else
    {
        items[index].changequantity(newitem.getquantity());
    }
}
void Cart::removefromcart(QString name)
{
    for(int i=0;i<items.size();i++)
    {
      if(items[i].getname()==name)
      {
          items.erase(items.begin()+i);
          return;
      }
    }
}
void Cart::changequantity(QString name,qint64 newquan)
{
    for(int i=0;i<items.size();i++)
    {
      if(items[i].getname()==name)
      {
          items[i].changequantity(newquan);
          return;
      }
    }
}
qint64 Cart::exists(QString name)
{
    for(int i=0;i<items.size();i++)
        if(items[i].getname()==name)
            return i;
    return -1;
}
QVector <item> Cart::getitems()
{
    return items;
}
