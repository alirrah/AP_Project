#ifndef MEMBER_H
#define MEMBER_H

#include "QtCore"

class member
{
private:
    QString username;
    QString password;
    bool admin;
    double credit;
public:
    member();
    member(QString, QString, bool, double);
    QString get_username();
    void set_username(QString);
    QString get_password();
    void set_password(QString);
    bool get_admin();
    void set_admin(bool);
    double get_credit();
    void set_credit(double);
};

#endif // MEMBER_H
