#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QDate>
#include <QTimer>
#include <QMessageBox>
#include "member.h"
#include "user_page.h"
#include "admin_page.h"

QT_BEGIN_NAMESPACE
namespace Ui { class login_page; }
QT_END_NAMESPACE

class login_page : public QMainWindow
{
    Q_OBJECT

public:
    login_page(QWidget *parent = nullptr);
    ~login_page();

private slots:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void on_close_btn_clicked();
    void on_minimize_btn_clicked();
    void showTime();

    void on_password_btn_clicked();

private:
    Ui::login_page *ui;
    user_page *user;
    admin_page *admin;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};
#endif // LOGIN_PAGE_H
