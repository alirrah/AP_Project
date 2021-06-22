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

void user_page::search()
{

}
