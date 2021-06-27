#include "aboutme_page.h"
#include "ui_aboutme_page.h"

aboutme_page::aboutme_page(QWidget *parent) :QWidget(parent), ui(new Ui::aboutme_page)
{
    ui->setupUi(this);
}

aboutme_page::~aboutme_page()
{
    delete ui;
}

// to make window draggable
void aboutme_page::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}
void aboutme_page::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

// close this page by ok_btn
void aboutme_page::on_ok_btn_clicked()
{
    this->close();
}

// close this page by close_btn
void aboutme_page::on_close_btn_clicked()
{
    this->close();
}
