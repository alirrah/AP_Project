#include "admin_page.h"
#include "ui_admin_page.h"

admin_page::admin_page(member user, QWidget *parent) :QWidget(parent), ui(new Ui::admin_page)
{
    product_itr = nullptr;
    ui->setupUi(this);
    information = user;
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
        //read user from file
        member user;
        QFile usfile ("user.txt");
        usfile.open(QFile::ReadWrite | QFile::Text);
        if (!usfile.isOpen())
            throw "File could not be opened.";
        QTextStream Read(&usfile);
        while (!Read.atEnd())
        {
            user.set_username(Read.readLine());
            user.set_password(Read.readLine());
            QString admin = Read.readLine();
            user.set_admin(admin == "1" ? 1 : 0);
            user.set_credit(Read.readLine().toDouble());
            if(user.get_admin())
                continue;
            users.push_back(user);
        }
        usfile.close();
        ui->user_table->setRowCount(users.size());
        ui->user_table->setColumnCount(2);
        i = 0;
        for(auto itr = users.begin(); itr != users.end(); ++itr)
        {
            ui->user_table->setItem(i, 0, new QTableWidgetItem(itr->get_username()));
            ui->user_table->setItem(i, 1, new QTableWidgetItem(QString::number(itr->get_credit())));
        }
        //to remain_txt get only number
        ui->remain_txt->setValidator(new QIntValidator(ui->remain_txt));
    }
    catch(char const *p)
    {
        QMessageBox::information(this, "Error", p);
    }
}

admin_page::~admin_page()
{
    delete ui;
}

//close this window
void admin_page::on_close_btn_clicked()
{
    try
    {
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
        this->close();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
    }
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

//show current time in time_lbl
void admin_page::showTime()
{
    QLocale loc = QLocale(QLocale::English, QLocale::UnitedStates);
    QString time = loc.toString(QDate::currentDate());
    time += "  " + (loc.toString(QTime::currentTime().hour()).size() ==2 ? loc.toString(QTime::currentTime().hour()) : "0" +loc.toString(QTime::currentTime().hour()));
    time += ":" + (loc.toString(QTime::currentTime().minute()).size() ==2 ? loc.toString(QTime::currentTime().minute()) : "0" +loc.toString(QTime::currentTime().minute()));
    time += ":" + (loc.toString(QTime::currentTime().second()).size() ==2 ? loc.toString(QTime::currentTime().second()) : "0" +loc.toString(QTime::currentTime().second()));
    ui->date_lbl->setText(time);
}

//function for search product
void admin_page::search()
{
    QVector<product> search;
    QString group = ui->group_combox->currentText();
    if(ui->group_rbtn->isChecked())
    {
        for(auto itr = products.begin(); itr != products.end(); ++itr)
        {
            if(search_open(ui->word_txt->text(),itr->get_group()))
            {
                search.push_back(*itr);
            }
        }
    }
    else if(group == "All")
    {
        if(ui->word_txt->text() == "")
        {
            search = products;
        }
        else if(ui->name_rbtn->isChecked())
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text(),itr->get_name()))
                    search.push_back(*itr);
        }
        else if(ui->company_rbtn->isChecked())
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text(),itr->get_company()))
                    search.push_back(*itr);
        }
        else if(ui->price_rbtn->isChecked())
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text().toDouble(),itr->get_price()))
                    search.push_back(*itr);
        }
        else
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text().toInt(), itr->get_remain()))
                    search.push_back(*itr);
        }
    }
    else
    {
        if(ui->word_txt->text() == "")
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(group == itr->get_group())
                    search.push_back(*itr);
        }
        else if(ui->name_rbtn->isChecked())
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text(),itr->get_name()) && (group == itr->get_group()))
                    search.push_back(*itr);
        }
        else if(ui->company_rbtn->isChecked())
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text(),itr->get_company()) && (group == itr->get_group()))
                    search.push_back(*itr);
        }
        else if(ui->price_rbtn->isChecked())
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text().toDouble(),itr->get_price()) && (group == itr->get_group()))
                    search.push_back(*itr);
        }
        else
        {
            for(auto itr = products.begin(); itr != products.end(); ++itr)
                if(search_open(ui->word_txt->text().toInt(), itr->get_remain()) && (group == itr->get_group()))
                    search.push_back(*itr);
        }
    }
    ui->product_table->setRowCount(search.size());
    ui->product_table->setColumnCount(5);
    int i = 0;
    for(auto itr = search.begin(); itr != search.end(); ++itr)
    {
        ui->product_table->setItem(i, 0, new QTableWidgetItem(itr->get_name()));
        ui->product_table->setItem(i, 1, new QTableWidgetItem(itr->get_company()));
        ui->product_table->setItem(i, 2, new QTableWidgetItem(itr->get_group()));
        ui->product_table->setItem(i, 3, new QTableWidgetItem(QString::number(itr->get_price())));
        ui->product_table->setItem(i++, 4, new QTableWidgetItem(QString::number(itr->get_remain())));
    }
}

//move infmation from product_table to lined edit in tool_tab_2
void admin_page::on_product_table_cellDoubleClicked(int row, int column)
{
    try
    {
        product check(ui->product_table->item(row,0)->text(),ui->product_table->item(row,1)->text(),ui->product_table->item(row,2)->text(),ui->product_table->item(row,3)->text().toDouble(),ui->product_table->item(row,4)->text().toInt());
        QVector<product>::iterator it;
        for(auto itr = products.begin(); itr != products.end(); ++itr)
        {
            if(check == *itr)
            {
                it = itr;
                break;
            }
            it = products.end();
        }
        if(it == products.end())
            throw "The product could not be found.";
        product_itr = it;
        ui->name_txt->setText(it->get_name());
        ui->company_txt->setText(it->get_company());
        ui->group_txt->setText(it->get_group());
        ui->price_txt->setText(QString::number(it->get_price()));
        ui->remain_txt->setText(QString::number(it->get_remain()));
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
    }
}

//remove the product
void admin_page::on_delete_btn_clicked()
{
    try
    {
        if(product_itr == nullptr)
            throw "First, double-click on the cell from the table.";
        //write at the end of the reportuser.txt for daily report
        QFile report("reportuser.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << ui->date_lbl->text() + "\n" ;
        write << information.get_username() + " deleted " + product_itr->get_name() + "\n";
        report.close();
        products.removeOne(*product_itr);
        product_itr = nullptr;
        search();
        clean_line_edit();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
        product_itr = nullptr;
        clean_line_edit();
    }
}

//the information of the product
void admin_page::on_edit_btn_clicked()
{
    try
    {
        if(ui->name_txt->text() == "" || ui->company_txt->text() == "" || ui->group_txt->text() == "" || ui->price_txt->text() == "" || ui->remain_txt->text() == "")
            throw "None of the line edits can be empty.";
        if(product_itr == nullptr)
            throw "First, double-click on the cell from the table.";
        QString price = ui->price_txt->text();
        for(int i = 0; i < price.size(); i++)
            if(!price[i].isDigit() && price[i] != '.')
                throw "Price consists of a number and a '.'";
        //write at the end of the reportuser.txt for daily report
        QFile report("reportuser.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << ui->date_lbl->text() + "\n" ;
        write << information.get_username() + " changed " + product_itr->get_name() + "\n";
        report.close();
        product_itr->set_name(ui->name_txt->text());
        product_itr->set_company(ui->company_txt->text());
        product_itr->set_group(ui->group_txt->text());
        product_itr->set_price(ui->price_txt->text().toDouble());
        product_itr->set_remain(ui->remain_txt->text().toInt());
        clean_line_edit();
        product_itr = nullptr;
        search();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
        product_itr = nullptr;
        clean_line_edit();
    }
}

//clean the line edit in tool_tab_2
void admin_page::clean_line_edit()
{
    ui->name_txt->clear();
    ui->group_txt->clear();
    ui->company_txt->clear();
    ui->price_txt->clear();
    ui->remain_txt->clear();
}

//add new product and check not to have the same products
void admin_page::on_insert_btn_clicked()
{
    try
    {
        if(ui->name_txt->text() == "" || ui->company_txt->text() == "" || ui->group_txt->text() == "" || ui->price_txt->text() == "" || ui->remain_txt->text() == "")
            throw "None of the line edits can be empty.";
        QString price = ui->price_txt->text();
        for(int i = 0; i < price.size(); i++)
            if(!price[i].isDigit() && price[i] != '.')
                throw "Price consists of a number and a '.'";
        product pro(ui->name_txt->text(), ui->company_txt->text(), ui->group_txt->text(), ui->price_txt->text().toDouble(),ui->remain_txt->text().toInt());
        for(auto itr = products.begin(); itr != products.end(); ++itr)
            if(pro.get_name() == itr->get_name() && pro.get_company() == itr->get_company() && pro.get_group() == itr->get_group())
                throw "There are such products. Please edit.";
        //write at the end of the reportuser.txt for daily report
        QFile report("reportuser.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << ui->date_lbl->text() + "\n" ;
        write << information.get_username() + " added " + pro.get_name() + "\n";
        report.close();
        products.push_back(pro);
        clean_line_edit();
        product_itr = nullptr;
        search();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
        product_itr = nullptr;
        clean_line_edit();
    }
}
