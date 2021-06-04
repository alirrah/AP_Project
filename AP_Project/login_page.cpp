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

//function for clear textbox
void login_page::clear()
{

    ui->password_txt->clear();
    ui->username_txt->clear();
}

// change password_txt echomode and password_btn icon
void login_page::on_password_btn_clicked()
{
    if (ui->password_txt->echoMode() == QLineEdit::Normal)
    {
        ui->password_txt->setEchoMode(QLineEdit::Password);
        ui->password_btn->setIcon(QIcon(":/icon/lock.ico"));
    }
    else
    {
        ui->password_txt->setEchoMode(QLineEdit::Normal);
        ui->password_btn->setIcon(QIcon(":/icon/unlock.ico"));
    }
}

//check information with file to have a user or admin with the information
void login_page::on_login_btn_clicked()
{
    QString user = ui->password_txt->text();
    QString pass = ui->username_txt->text();
    bool isadmin = ui->admin_rbtn->isChecked();
    try
    {
        if(user == "" || pass == "")
            throw "Username or password can not be blank. Please fill them.";
        member check;
        QFile file("user.txt");
        file.open(QFile::ReadWrite | QFile::Text);
        if (!file.isOpen())
            throw "File could not be opened.";
        QTextStream ReadFile(&file);
        while (!ReadFile.atEnd())
        {
            check.set_username(ReadFile.readLine());
            check.set_password(ReadFile.readLine());
            QString admin = ReadFile.readLine();
            check.set_admin(admin == "1" ? 1 : 0);
            check.set_credit(ReadFile.readLine().toDouble());
            if (check.get_username() == user && check.get_password() == pass && check.get_admin() == isadmin)
            {
                QMessageBox::information(this, "Login", user + " entered successfully.");
                file.close();
                this->close();
                if(!(isadmin))
                {
                    userpage = new user_page(check);
                    userpage->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
                    userpage->show();
                }
                else
                {
                    adminpage = new admin_page(check);
                    adminpage->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
                    adminpage->show();
                }
                return;
            }
        }
        file.close();
        throw user + " not found. Please register.";
    }
    catch (QString x)
    {
        QMessageBox::information(this, "Warn", x);
    }
    catch (char const *x)
    {
        QMessageBox::information(this, "Warn", x);
    }
    clear();
}
