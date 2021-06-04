#include "login_page.h"
#include "ui_login_page.h"

login_page::login_page(QWidget *parent): QMainWindow(parent), ui(new Ui::login_page)
{
    ui->setupUi(this);
    //use timer to show current time in login page and connect to function showTime
    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();
}

login_page::~login_page()
{
    delete ui;
}

// to make window draggable
void login_page::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->x();
    m_nMouseClick_Y_Coordinate = event->y();
}

void login_page::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalX()-m_nMouseClick_X_Coordinate,event->globalY()-m_nMouseClick_Y_Coordinate);
}

// close the window
void login_page::on_close_btn_clicked()
{
    this->close();
}

void login_page::on_minimize_btn_clicked()
{
    this->setWindowState(Qt::WindowMinimized);
}

//show current time in date_lbl
void login_page::showTime()
{
    QString time = QDate::currentDate().toString("yyyy/MM/dd") + "  " + QTime::currentTime().toString("hh:mm:ss");
    ui->date_lbl->setText(time);
}
