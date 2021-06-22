#ifndef PRODUCT_H
#define PRODUCT_H

#include <QtCore>

class product
{
private:
    QString name;
    QString company;
    QString group;
    double price;
    int remain;
public:
    product();
    product(QString, QString, QString, double, int);
    QString get_name();
    void set_name(QString);
    QString get_company();
    void set_company(QString);
    QString get_group();
    void set_group(QString);
    double get_price();
    void set_price(double);
    int get_remain();
    void set_remain(int);
    bool operator== (product);
};

#endif // PRODUCT_H
