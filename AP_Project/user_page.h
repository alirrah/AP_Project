#ifndef USER_PAGE_H
#define USER_PAGE_H

#include <QWidget>
#include "member.h"

namespace Ui {
class user_page;
}

class user_page : public QWidget
{
    Q_OBJECT

public:
    explicit user_page(member user,QWidget *parent = nullptr);
    ~user_page();

private:
    Ui::user_page *ui;
};

#endif // USER_PAGE_H
