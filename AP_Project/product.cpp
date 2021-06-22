#include "product.h"

product::product()
{
}

product::product(QString name, QString company, QString group, double price, int remain)
{
    this->name = name;
    this->company = company;
    this->group = group;
    this->price = price;
    this->remain = remain;
}

QString product::get_name()
{
    return name;
}

void product::set_name(QString name)
{
    this->name = name;
}

QString product::get_company()
{
    return company;
}

void product::set_company(QString company)
{
 this->company = company;
}

QString product::get_group()
{
    return group;
}

void product::set_group(QString group)
{
    this->group = group;
}

double product::get_price()
{
    return price;
}

void product::set_price(double price)
{
    this->price = price;
}

int product::get_remain()
{
    return remain;
}

void product::set_remain(int remain)
{
    this->remain = remain;
}

bool product::operator==(product pro)
{
    if(name == pro.name && company == pro.company && group == pro.group && price == pro.price && remain == pro.remain)
        return true;
    return false;
}
