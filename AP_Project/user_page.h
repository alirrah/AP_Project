#ifndef USER_PAGE_H
#define USER_PAGE_H

#include <QWidget>
#include <QMouseEvent>
#include "member.h"
#include "aboutme_page.h"


namespace Ui {
class user_page;
}

class user_page : public QWidget
{
    Q_OBJECT

public:
    explicit user_page(member user,QWidget *parent = nullptr);
    ~user_page();

private slots:
    void on_close_btn_clicked();
    void on_minimize_btn_clicked();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    Ui::user_page *ui;
    member information;
    aboutme_page *about;
    double cost;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;

};

#endif // USER_PAGE_H
