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
    QLocale loc = QLocale(QLocale::English, QLocale::UnitedStates);
    QString time = loc.toString(QDate::currentDate());
    time += "  " + (loc.toString(QTime::currentTime().hour()).size() ==2 ? loc.toString(QTime::currentTime().hour()) : "0" +loc.toString(QTime::currentTime().hour()));
    time += ":" + (loc.toString(QTime::currentTime().minute()).size() ==2 ? loc.toString(QTime::currentTime().minute()) : "0" +loc.toString(QTime::currentTime().minute()));
    time += ":" + (loc.toString(QTime::currentTime().second()).size() ==2 ? loc.toString(QTime::currentTime().second()) : "0" +loc.toString(QTime::currentTime().second()));
    ui->date_lbl->setText(time);
}

//function for clear textbox
void login_page::clear()
{
    ui->password_txt->clear();
    ui->username_txt->clear();
    ui->admin_rbtn->setChecked(false);
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

//check information with file to have a user or admin with the information and if not, write it
void login_page::on_login_btn_clicked()
{
    QString user = ui->username_txt->text();
    QString pass = ui->password_txt->text();
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
                //write at the end of the reportuser.txt for daily report
                QFile report("reportuser.txt");
                report.open(QIODevice::Append | QIODevice::Text);
                if(!report.isOpen())
                    throw "File could not be opened.";
                QTextStream write(&report);
                write << ui->date_lbl->text() + "\n" ;
                write << check.get_username() + " logged in " + (isadmin ? "as admin\n" : "as user\n");
                report.close();
                this->close();
                if(!isadmin)
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

//add information to the file and check not to have the same username
void login_page::on_register_btn_clicked()
{
    QString user = ui->username_txt->text();
    QString pass = ui->password_txt->text();
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
        QTextStream ReadWrite(&file);
        while (!ReadWrite.atEnd())
        {
            check.set_username(ReadWrite.readLine());
            check.set_password(ReadWrite.readLine());
            QString admin = ReadWrite.readLine();
            check.set_admin(admin == "1" ? 1 : 0);
            check.set_credit(ReadWrite.readLine().toDouble());
            if (check.get_username() == user)
                throw "There is a user with this information. Please change your username.";
        }
        check.set_username(user);
        check.set_password(pass);
        check.set_admin(isadmin);
        check.set_credit(20);
        ReadWrite << check.get_username() + "\n";
        ReadWrite << check.get_password() + "\n";
        ReadWrite << (check.get_admin() == true ? "1\n" : "0\n");
        ReadWrite << "20\n";
        file.close();
        //write at the end of the reportuser.txt for daily report
        QFile report("reportuser.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << ui->date_lbl->text() + "\n" ;
        write << check.get_username() + " registerd " + (isadmin ? "as admin\n" : "as user\n");
        report.close();
        QMessageBox::information(this, "Login", "Information successfully recorded.");
        this->close();
        if(!isadmin)
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
    }
    catch (char const *x)
    {
        QMessageBox::information(this, "Warn", x);
    }
    clear();
}
