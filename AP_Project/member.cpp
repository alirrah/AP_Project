#include "member.h"

member::member()
{
}

member::member(QString username, QString password, bool admin, double credit)
{
    this->username = username;
    this->password = password;
    this->admin = admin;
    this->credit = credit;
}

QString member::get_username()
{
    return username;
}

void member::set_username(QString username)
{
    this->username = username;
}

QString member::get_password()
{
    return password;
}

void member::set_password(QString password)
{
    this->password = password;
}

bool member::get_admin()
{
    return admin;
}

void member::set_admin(bool admin)
{
    this->admin = admin;
}

double member::get_credit()
{
    return credit;
}

void member::set_credit(double credit)
{
    this->credit = credit;
}
