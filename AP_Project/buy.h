#ifndef BUY_H
#define BUY_H

#include <QtCore>

class buy
{
private:
    QString name;
    QString company;
    QString group;
    double price;
    int number;
public:
    buy();
    buy(QString, QString, QString, double, int);
    QString get_name();
    void set_name(QString);
    QString get_company();
    void set_company(QString);
    QString get_group();
    void set_group(QString);
    double get_price();
    void set_price(double);
    int get_number();
    void set_number(int);
};

#endif // BUY_H
