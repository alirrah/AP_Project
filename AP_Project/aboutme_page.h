#ifndef ABOUTME_PAGE_H
#define ABOUTME_PAGE_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class aboutme_page;
}

class aboutme_page : public QWidget
{
    Q_OBJECT

public:
    explicit aboutme_page(QWidget *parent = nullptr);
    ~aboutme_page();

private slots:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void on_ok_btn_clicked();
    void on_close_btn_clicked();

private:
    Ui::aboutme_page *ui;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
};

#endif // ABOUTME_PAGE_H
