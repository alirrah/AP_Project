#ifndef ABOUTME_PAGE_H
#define ABOUTME_PAGE_H

#include <QWidget>

namespace Ui {
class aboutme_page;
}

class aboutme_page : public QWidget
{
    Q_OBJECT

public:
    explicit aboutme_page(QWidget *parent = nullptr);
    ~aboutme_page();

private:
    Ui::aboutme_page *ui;
};

#endif // ABOUTME_PAGE_H
