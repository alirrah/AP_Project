#include "buy.h"

buy::buy()
{
}

buy::buy(QString name, QString company, QString group, double price, int number)
{
    this->name = name;
    this->company = company;
    this->group = group;
    this->price = price;
    this->number = number;
}

QString buy::get_name()
{
    return name;
}

void buy::set_name(QString name)
{
    this->name = name;
}

QString buy::get_company()
{
    return company;
}

void buy::set_company(QString company)
{
    this->company = company;
}

QString buy::get_group()
{
    return group;
}

void buy::set_group(QString group)
{
    this->group = group;
}

double buy::get_price()
{
    return price;
}

void buy::set_price(double price)
{
    this->price = price;
}

int buy::get_number()
{
    return number;
}

void buy::set_number(int number)
{
    this->number = number;
}
