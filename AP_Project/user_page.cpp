#include "user_page.h"
#include "ui_user_page.h"

user_page::user_page(member user,QWidget *parent) :QWidget(parent), ui(new Ui::user_page)
{
    ui->setupUi(this);
    cost = 0;
    information = user;
    ui->information_lbl->setText("User : " + information.get_username() + "\t Credit : " + QString::number(information.get_credit()) + "$");
    ui->cost_lbl->setText("Cost : " + QString::number(cost) + "$");
    ui->cost_prossbar->setMaximum(user.get_credit());
}

user_page::~user_page()
{
    delete ui;
}

//close this window
void user_page::on_close_btn_clicked()
{
    this->close();
}

//minimize the window
void user_page::on_minimize_btn_clicked()
{
    this->setWindowState(Qt::WindowMinimized);
}

// this two function write to make page draggable
void user_page::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}
void user_page::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}
