#include "aboutme_page.h"
#include "ui_aboutme_page.h"

aboutme_page::aboutme_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::aboutme_page)
{
    ui->setupUi(this);
}

aboutme_page::~aboutme_page()
{
    delete ui;
}
