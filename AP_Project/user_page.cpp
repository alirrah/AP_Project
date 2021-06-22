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
    //use timer to show current time in login page and connect to function showTime
    QTimer *timer = new QTimer();
    timer->start();
    //connect different part with each other
    connect(timer,SIGNAL(timeout()),this,SLOT(showTime()));
    connect(ui->word_txt, SIGNAL(textChanged(const QString &)), this, SLOT(search()));
    connect(ui->name_rbtn, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->group_rbtn, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->company_rbtn, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->price_rbtn, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->remain_rbtn, SIGNAL(clicked()), this, SLOT(search()));
    connect(ui->group_combox, SIGNAL(currentIndexChanged(int)), this, SLOT(search()));
    try
    {
        //read food from file
        product food;
        QFile file("food.txt");
        file.open(QFile::ReadWrite | QFile::Text);
        if (!file.isOpen())
            throw "File could not be opened.";
        QTextStream ReadFile(&file);
        while (!ReadFile.atEnd())
        {
            food.set_name(ReadFile.readLine());
            food.set_company(ReadFile.readLine());
            food.set_group(ReadFile.readLine());
            food.set_price(ReadFile.readLine().toDouble());
            food.set_remain(ReadFile.readLine().toInt());
            products.push_back(food);
            if(std::find(group.begin(), group.end(), food.get_group()) == group.end())
                group.push_back(food.get_group());
        }
        file.close();
        // add item to the group_combx
        ui->group_combox->addItem("All");
        for(auto itr = group.begin(); itr != group.end(); ++itr)
        {
            ui->group_combox->addItem(*itr);
        }
        ui->product_table->setRowCount(products.size());
        ui->product_table->setColumnCount(5);
        int i = 0;
        for(auto itr = products.begin(); itr != products.end(); ++itr)
        {
            ui->product_table->setItem(i, 0, new QTableWidgetItem(itr->get_name()));
            ui->product_table->setItem(i, 1, new QTableWidgetItem(itr->get_company()));
            ui->product_table->setItem(i, 2, new QTableWidgetItem(itr->get_group()));
            ui->product_table->setItem(i, 3, new QTableWidgetItem(QString::number(itr->get_price())));
            ui->product_table->setItem(i++, 4, new QTableWidgetItem(QString::number(itr->get_remain())));
        }
    }
    catch(char const *p)
    {
        QMessageBox::information(this, "Error", p);
    }
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

//show current time in time_lbl
void user_page::showTime()
{
    QString time = QDate::currentDate().toString("yyyy/MM/dd") + "  " + QTime::currentTime().toString("hh:mm:ss");
    ui->date_lbl->setText(time);
}

//show about me page
void user_page::on_aboutme_btn_clicked()
{
    about = new aboutme_page();
    about->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    about->show();
}

void user_page::on_payment_btn_clicked()
{
    try
    {
        if(cost == 0)
            throw "You did not buy anything.";
        QVector<member> list;
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
            if (check.get_username() == information.get_username())
            {
                check.set_credit(check.get_credit()-cost);
                information.set_credit(check.get_credit());
            }
            list.push_back(check);
        }
        file.seek(0);
        for(auto itr = list.begin(); itr != list.end(); ++itr)
        {
            ReadWrite << itr->get_username() + "\n";
            ReadWrite << itr->get_password() + "\n";
            ReadWrite << (itr->get_admin() == true ? "1\n" : "0\n");
            ReadWrite << QString::number(itr->get_credit()) + "\n";
        }
        file.close();
        QFile food("food.txt");
        food.open(QFile::WriteOnly | QFile::Text);
        if (!food.isOpen())
            throw "File could not be opened.";
        QTextStream Write(&food);
        for(auto itr = products.begin(); itr != products.end(); ++itr)
        {
            Write << itr->get_name() + "\n";
            Write << itr->get_company() + "\n";
            Write << itr->get_group() + "\n";
            Write << QString::number(itr->get_price()) + "\n";
            Write << QString::number(itr->get_remain()) + "\n";
        }
        food.close();
        QFile report("report.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << information.get_username() + "\n";
        write << QString::number(buys.size()) + "\n";
        for(auto itr = buys.begin(); itr != buys.end(); ++itr)
        {
            write << itr->get_name() + "\n";
            write << itr->get_company() + "\n";
            write << itr->get_group() + "\n";
            write << QString::number(itr->get_price()) + "\n";
            write << QString::number(itr->get_number()) + "\n";
        }
        report.close();
        QMessageBox::information(this, "Change", "Thanks for buying.");
        this->close();
    }
    catch (char const *p)
    {
          QMessageBox::information(this, "Error", p);
          this->close();
    }
}

void user_page::on_passwordapply_btn_clicked()
{
    try
    {
        QString username = ui->username_txt->text();
        QString oldpassword = ui->oldpassword_txt->text();
        QString newpassword = ui->newpassword_txt->text();
        QString repeatpassword = ui->repeatpassword_txt->text();
        if(username == "" || oldpassword == "" || newpassword == "" || repeatpassword == "")
            throw "Some infomation is blank. Enter complete information.";
        if(newpassword != repeatpassword)
            throw "New password and repeatition are not the same. Enter them the same as each other.";
        if(username != information.get_username())
            throw "Enter your username correctly.";
        if(oldpassword != information.get_password())
            throw "Password is incorrect. Please enter your password correctly.";
        QVector<member> list;
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
            if (check.get_username() == username)
            {
                check.set_password(newpassword);
                information.set_password(check.get_password());
            }
            list.push_back(check);
        }
        file.seek(0);
        for(auto itr = list.begin(); itr != list.end(); ++itr)
        {
            ReadWrite << itr->get_username() + "\n";
            ReadWrite << itr->get_password() + "\n";
            ReadWrite << (itr->get_admin() == true ? "1\n" : "0\n");
            ReadWrite << QString::number(itr->get_credit()) + "\n";
        }
        file.close();
        QMessageBox::information(this, "Change", "Password changed successfully");
        clear_password();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
        clear_password();
    }
}

void user_page::clear_password()
{
    ui->username_txt->clear();
    ui->oldpassword_txt->clear();
    ui->newpassword_txt->clear();
    ui->repeatpassword_txt->clear();
}



void user_page::search()
{

}
