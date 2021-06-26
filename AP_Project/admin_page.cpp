#include "admin_page.h"
#include "ui_admin_page.h"

admin_page::admin_page(member user, QWidget *parent) :QWidget(parent), ui(new Ui::admin_page)
{
    ui->setupUi(this);
}

admin_page::~admin_page()
{
    delete ui;
}

//close this window
void admin_page::on_close_btn_clicked()
{
    this->close();
}

//minimize the window
void admin_page::on_minimize_btn_clicked()
{
    this->setWindowState(Qt::WindowMinimized);
}

// this two function write to make page draggable
void admin_page::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}
void admin_page::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}
