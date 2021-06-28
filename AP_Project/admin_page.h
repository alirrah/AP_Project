#ifndef ADMIN_PAGE_H
#define ADMIN_PAGE_H

#include <QWidget>
#include "member.h"
#include <QMoveEvent>
#include <QMessageBox>
#include "member.h"
#include "product.h"
#include <QVector>
#include <QFileDialog>
#include <QSet>

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
    void showTime();
    void search();
    void on_product_table_cellDoubleClicked(int row, int column);
    void on_delete_btn_clicked();
    void on_edit_btn_clicked();
    void clean_line_edit();
    void on_insert_btn_clicked();
    void on_report_btn_clicked();
    void on_save_btn_clicked();
    void set_group_combox();

    void on_remove_btn_clicked();

    void on_new_btn_clicked();

private:
    Ui::admin_page *ui;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
    member information;
    QVector<product> products;
    QVector<product>::iterator product_itr;
    QSet<QString> group;
};

#endif // ADMIN_PAGE_H
