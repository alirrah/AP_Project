#ifndef ADMIN_PAGE_H
#define ADMIN_PAGE_H

#include <QWidget>
#include "member.h"

namespace Ui {
class admin_page;
}

class admin_page : public QWidget
{
    Q_OBJECT

public:
    explicit admin_page(member user,QWidget *parent = nullptr);
    ~admin_page();

private:
    Ui::admin_page *ui;
};

#endif // ADMIN_PAGE_H
