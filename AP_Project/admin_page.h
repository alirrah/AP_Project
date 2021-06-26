#ifndef ADMIN_PAGE_H
#define ADMIN_PAGE_H

#include <QWidget>
#include "member.h"
#include <QMoveEvent>

namespace Ui {
class admin_page;
}

class admin_page : public QWidget
{
    Q_OBJECT

public:
    explicit admin_page(member user,QWidget *parent = nullptr);
    ~admin_page();

private slots:
    void on_close_btn_clicked();
    void on_minimize_btn_clicked();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    Ui::admin_page *ui;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // ADMIN_PAGE_H
