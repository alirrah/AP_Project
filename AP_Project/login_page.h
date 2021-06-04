#ifndef LOGIN_PAGE_H
#define LOGIN_PAGE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class login_page; }
QT_END_NAMESPACE

class login_page : public QMainWindow
{
    Q_OBJECT

public:
    login_page(QWidget *parent = nullptr);
    ~login_page();

private:
    Ui::login_page *ui;
};
#endif // LOGIN_PAGE_H
