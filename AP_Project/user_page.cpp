#include "user_page.h"
#include "ui_user_page.h"

user_page::user_page(member user,QWidget *parent) :QWidget(parent), ui(new Ui::user_page)
{
    ui->setupUi(this);
    cost = 0;
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
        // read users from file
        member check;
        QFile userfile("user.txt");
        userfile.open(QFile::ReadWrite | QFile::Text);
        if (!userfile.isOpen())
            throw "File could not be opened.";
        QTextStream Read(&userfile);
        while (!Read.atEnd())
        {
            check.set_username(Read.readLine());
            check.set_password(Read.readLine());
            QString admin = Read.readLine();
            check.set_admin(admin == "1" ? 1 : 0);
            check.set_credit(Read.readLine().toDouble());
            users.push_back(check);
        }
        userfile.close();
        check.set_username(user.get_username());
        check.set_password(user.get_password());
        check.set_admin(user.get_admin());
        check.set_credit(user.get_credit());
        for(auto itr = users.begin(); itr != users.end(); ++itr)
        {
            if(check == *itr)
            {
                it = itr;
                break;
            }
            it = users.end();
        }
        if(it == users.end())
            throw "The user could not be found";
        ui->information_lbl->setText("User : " + it->get_username() + "\t Credit : " + QString::number(it->get_credit()) + "$");

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
    try
    {
        QFile file("user.txt");
        file.open(QFile::ReadWrite | QFile::Text);
        if (!file.isOpen())
            throw "File could not be opened.";
        QTextStream ReadWrite(&file);
        it->set_credit(it->get_credit() - cost);
        for(auto itr = users.begin(); itr != users.end(); ++itr)
        {
            ReadWrite << itr->get_username() + "\n";
            ReadWrite << itr->get_password() + "\n";
            ReadWrite << (itr->get_admin() == true ? "1\n" : "0\n");
            ReadWrite << QString::number(itr->get_credit()) + "\n";
        }
        file.close();
        this->close();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
    }
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
    QLocale loc = QLocale(QLocale::English, QLocale::UnitedStates);
    QString time = loc.toString(QDate::currentDate());
    time += "  " + (loc.toString(QTime::currentTime().hour()).size() ==2 ? loc.toString(QTime::currentTime().hour()) : "0" +loc.toString(QTime::currentTime().hour()));
    time += ":" + (loc.toString(QTime::currentTime().minute()).size() ==2 ? loc.toString(QTime::currentTime().minute()) : "0" +loc.toString(QTime::currentTime().minute()));
    time += ":" + (loc.toString(QTime::currentTime().second()).size() ==2 ? loc.toString(QTime::currentTime().second()) : "0" +loc.toString(QTime::currentTime().second()));
    ui->date_lbl->setText(time);
}

//show about me page
void user_page::on_aboutme_btn_clicked()
{
    about = new aboutme_page();
    about->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    about->show();
}

//pay the bill and close the window
void user_page::on_payment_btn_clicked()
{
    try
    {
        if(cost == 0)
            throw "You did not buy anything./nThanks for using this app.";
        QFile file("user.txt");
        file.open(QFile::ReadWrite | QFile::Text);
        if (!file.isOpen())
            throw "File could not be opened.";
        QTextStream ReadWrite(&file);
        it->set_credit(it->get_credit() - cost);
        for(auto itr = users.begin(); itr != users.end(); ++itr)
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
        //write at the end of the reportbuy.txt for daily report
        QFile report("reportbuy.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << ui->date_lbl->text() + "\n";
        write << it->get_username() + "\n";
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
        QMessageBox::information(this, "Change", "Thanks for buying./nThanks for using this app.");
        this->close();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
    }
}

//change password by user
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
        if(username != it->get_username())
            throw "Enter your username correctly.";
        if(oldpassword != it->get_password())
            throw "Password is incorrect. Please enter your password correctly.";
        it->set_password(newpassword);
        //write at the end of the reportuser.txt for daily report
        QFile report("reportuser.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << ui->date_lbl->text() + "\n";
        write << it->get_username() + " changed his/her password\n";
        report.close();
        QMessageBox::information(this, "Change", "Password changed successfully");
        clear_txt();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
        clear_txt();
    }
}

//clean line_edits
void user_page::clear_txt()
{
    ui->username_txt->clear();
    ui->oldpassword_txt->clear();
    ui->newpassword_txt->clear();
    ui->repeatpassword_txt->clear();
    ui->amount_txt->clear();
    ui->card_txt->clear();
    ui->cvv2_txt->clear();
    ui->second_txt->clear();
}

//for pay and increase your credit
void user_page::on_increasecredit_btn_clicked()
{
    try
    {
        QString amount = ui->amount_txt->text();
        QString card = ui->card_txt->text();
        QString cvv2 = ui->cvv2_txt->text();
        QString secondpassword = ui->second_txt->text();
        if(amount == "" || card == "" || cvv2 == "" || secondpassword == "")
            throw "Some infomation is blank. Enter comlete information.";
        if(amount.toDouble() <= 0)
            throw "The amount must be positive.";
        it->set_credit(it->get_credit() + amount.toDouble());
        ui->cost_prossbar->setMaximum(it->get_credit());
        ui->information_lbl->setText("User : " + it->get_username() + "\t Credit : " + QString::number(it->get_credit()) + "$");
        //write at the end of the reportuser.txt for daily report
        QFile report("reportuser.txt");
        report.open(QIODevice::Append | QIODevice::Text);
        if(!report.isOpen())
            throw "File could not be opened.";
        QTextStream write(&report);
        write << ui->date_lbl->text() + "\n";
        write << it->get_username() + " increased his/her credit by " + amount +"\n";
        report.close();
        QMessageBox::information(this, "Change", "Payment operation completed successfully.");
        clear_txt();
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
        clear_txt();
    }
}

//Double-Click to put the product in shopping_table
void user_page::on_product_table_cellDoubleClicked(int row, int column)
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
        if(cost + it->get_price() > user_page::it->get_credit())
            throw "Money is not enough.";
        if(it->get_remain() <= 0)
            throw "The product is finished.";
        it->set_remain(it->get_remain() - 1);
        search();
        bool flag = false;
        cost = 0;
        for(auto itr = buys.begin(); itr != buys.end(); ++itr)
        {
            if(itr->get_name() == it->get_name() && itr->get_company() == it->get_company() && itr->get_group() == it->get_group())
            {
                itr->set_number(itr->get_number() + 1);
                flag = true;
                break;
            }
        }
        if(!flag)
        {
            buy b(it->get_name(), it->get_company(), it->get_group(), it->get_price(), 1);
            buys.push_back(b);
        }
        ui->shopping_table->setRowCount(buys.size());
        ui->shopping_table->setColumnCount(5);
        int i = 0;
        for(auto itr = buys.begin(); itr != buys.end(); ++itr)
        {
            ui->shopping_table->setItem(i, 0, new QTableWidgetItem(itr->get_name()));
            ui->shopping_table->setItem(i, 1, new QTableWidgetItem(itr->get_company()));
            ui->shopping_table->setItem(i, 2, new QTableWidgetItem(itr->get_group()));
            ui->shopping_table->setItem(i, 3, new QTableWidgetItem(QString::number(itr->get_number())));
            ui->shopping_table->setItem(i++, 4, new QTableWidgetItem(QString::number(itr->get_price())));
            cost += itr->get_price() * itr->get_number();
        }
        ui->cost_lbl->setText("Cost : " + QString::number(cost) + "$");
        ui->cost_prossbar->setValue(cost);
    }
    catch (char const *p)
    {
        QMessageBox::information(this, "Error", p);
    }
}

//Double-Click to remove product for shopping_table
void user_page::on_shopping_table_cellDoubleClicked(int row, int column)
{
    cost = 0;
    int i = 0;
    for(auto itr = products.begin(); itr != products.end(); ++itr)
    {
        if(itr->get_name() == buys[row].get_name() && itr->get_company() == buys[row].get_company() && itr->get_group() == buys[row].get_group())
        {
            itr->set_remain(itr->get_remain()+1);
            break;
        }
    }
    for(auto itr = buys.begin(); itr != buys.end(); ++itr)
    {
        if(itr->get_name() == buys[row].get_name() && itr->get_company() == buys[row].get_company() && itr->get_group() == buys[row].get_group())
        {
            itr->set_number(itr->get_number()-1);
            if(itr->get_number() <= 0)
                buys.removeAt(i);
            break;
        }
        i++;
    }
    search();
    ui->shopping_table->setRowCount(buys.size());
    ui->shopping_table->setColumnCount(5);
    i = 0;
    for(auto itr = buys.begin(); itr != buys.end(); ++itr)
    {
        ui->shopping_table->setItem(i, 0, new QTableWidgetItem(itr->get_name()));
        ui->shopping_table->setItem(i, 1, new QTableWidgetItem(itr->get_company()));
        ui->shopping_table->setItem(i, 2, new QTableWidgetItem(itr->get_group()));
        ui->shopping_table->setItem(i, 3, new QTableWidgetItem(QString::number(itr->get_number())));
        ui->shopping_table->setItem(i++, 4, new QTableWidgetItem(QString::number(itr->get_price())));
        cost += itr->get_price() * itr->get_number();
    }
    ui->cost_lbl->setText("Cost : " + QString::number(cost) + "$");
    ui->cost_prossbar->setValue(cost);
}

//function for search product
void user_page::search()
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
