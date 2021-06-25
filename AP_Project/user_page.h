#ifndef USER_PAGE_H
#define USER_PAGE_H

#include <QTableWidgetItem>
#include <QTableWidget>
#include <QTimer>
#include <QDate>
#include <QTime>
#include <QMessageBox>
#include <QWidget>
#include <QVector>
#include <QMouseEvent>
#include "member.h"
#include "aboutme_page.h"
#include "product.h"
#include "buy.h"


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
    void search();
    void showTime();
    void on_aboutme_btn_clicked();
    void on_payment_btn_clicked();
    void on_passwordapply_btn_clicked();
    void clear_txt();
    void on_increasecredit_btn_clicked();
    void on_product_table_cellDoubleClicked(int row, int column);
    void on_shopping_table_cellDoubleClicked(int row, int column);

private:
    Ui::user_page *ui;
    member information;
    aboutme_page *about;
    double cost;
    QVector<product> products;
    QVector<QString> group;
    QVector<buy> buys;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // USER_PAGE_H
