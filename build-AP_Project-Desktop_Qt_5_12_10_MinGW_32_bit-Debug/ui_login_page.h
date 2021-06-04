/********************************************************************************
** Form generated from reading UI file 'login_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_PAGE_H
#define UI_LOGIN_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_page
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *top_panel;
    QHBoxLayout *horizontalLayout;
    QLabel *date_lbl;
    QSpacerItem *horizontalSpacer;
    QPushButton *minimize_btn;
    QPushButton *close_btn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QFrame *mian_panel;
    QVBoxLayout *main_panel;
    QHBoxLayout *username_panel;
    QLabel *username_lbl;
    QLineEdit *username_txt;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *password_panel;
    QLabel *password_lbl;
    QLineEdit *password_txt;
    QPushButton *password_btn;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *admin_panel;
    QRadioButton *admin_rbtn;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *enter_panel;
    QPushButton *register_btn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *login_btn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *login_page)
    {
        if (login_page->objectName().isEmpty())
            login_page->setObjectName(QString::fromUtf8("login_page"));
        login_page->resize(449, 400);
        QFont font;
        font.setPointSize(12);
        login_page->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/User.ico"), QSize(), QIcon::Normal, QIcon::Off);
        login_page->setWindowIcon(icon);
        centralwidget = new QWidget(login_page);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        top_panel = new QFrame(centralwidget);
        top_panel->setObjectName(QString::fromUtf8("top_panel"));
        horizontalLayout = new QHBoxLayout(top_panel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        date_lbl = new QLabel(top_panel);
        date_lbl->setObjectName(QString::fromUtf8("date_lbl"));

        horizontalLayout->addWidget(date_lbl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        minimize_btn = new QPushButton(top_panel);
        minimize_btn->setObjectName(QString::fromUtf8("minimize_btn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minimize_btn->sizePolicy().hasHeightForWidth());
        minimize_btn->setSizePolicy(sizePolicy);
        minimize_btn->setMinimumSize(QSize(40, 40));
        minimize_btn->setMaximumSize(QSize(40, 40));
        minimize_btn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/mini.ico"), QSize(), QIcon::Normal, QIcon::Off);
        minimize_btn->setIcon(icon1);
        minimize_btn->setIconSize(QSize(35, 25));

        horizontalLayout->addWidget(minimize_btn);

        close_btn = new QPushButton(top_panel);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        sizePolicy.setHeightForWidth(close_btn->sizePolicy().hasHeightForWidth());
        close_btn->setSizePolicy(sizePolicy);
        close_btn->setMinimumSize(QSize(40, 40));
        close_btn->setMaximumSize(QSize(40, 40));
        close_btn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon2);
        close_btn->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(close_btn);


        verticalLayout->addWidget(top_panel);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        mian_panel = new QFrame(centralwidget);
        mian_panel->setObjectName(QString::fromUtf8("mian_panel"));
        main_panel = new QVBoxLayout(mian_panel);
        main_panel->setObjectName(QString::fromUtf8("main_panel"));
        main_panel->setContentsMargins(20, 20, 20, 20);
        username_panel = new QHBoxLayout();
        username_panel->setObjectName(QString::fromUtf8("username_panel"));
        username_panel->setContentsMargins(-1, 0, -1, -1);
        username_lbl = new QLabel(mian_panel);
        username_lbl->setObjectName(QString::fromUtf8("username_lbl"));

        username_panel->addWidget(username_lbl);

        username_txt = new QLineEdit(mian_panel);
        username_txt->setObjectName(QString::fromUtf8("username_txt"));
        username_txt->setMinimumSize(QSize(0, 30));
        username_txt->setMaximumSize(QSize(16777215, 30));
        username_txt->setAlignment(Qt::AlignCenter);

        username_panel->addWidget(username_txt);


        main_panel->addLayout(username_panel);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        main_panel->addItem(verticalSpacer_5);

        password_panel = new QHBoxLayout();
        password_panel->setObjectName(QString::fromUtf8("password_panel"));
        password_panel->setContentsMargins(-1, 0, -1, -1);
        password_lbl = new QLabel(mian_panel);
        password_lbl->setObjectName(QString::fromUtf8("password_lbl"));

        password_panel->addWidget(password_lbl);

        password_txt = new QLineEdit(mian_panel);
        password_txt->setObjectName(QString::fromUtf8("password_txt"));
        password_txt->setMinimumSize(QSize(0, 30));
        password_txt->setMaximumSize(QSize(16777215, 30));
        password_txt->setEchoMode(QLineEdit::Password);
        password_txt->setAlignment(Qt::AlignCenter);

        password_panel->addWidget(password_txt);

        password_btn = new QPushButton(mian_panel);
        password_btn->setObjectName(QString::fromUtf8("password_btn"));
        sizePolicy.setHeightForWidth(password_btn->sizePolicy().hasHeightForWidth());
        password_btn->setSizePolicy(sizePolicy);
        password_btn->setMinimumSize(QSize(30, 30));
        password_btn->setMaximumSize(QSize(30, 30));
        password_btn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/lock.ico"), QSize(), QIcon::Normal, QIcon::Off);
        password_btn->setIcon(icon3);
        password_btn->setIconSize(QSize(20, 20));

        password_panel->addWidget(password_btn);


        main_panel->addLayout(password_panel);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        main_panel->addItem(verticalSpacer_6);

        admin_panel = new QHBoxLayout();
        admin_panel->setObjectName(QString::fromUtf8("admin_panel"));
        admin_panel->setContentsMargins(-1, -1, -1, 0);
        admin_rbtn = new QRadioButton(mian_panel);
        admin_rbtn->setObjectName(QString::fromUtf8("admin_rbtn"));
        admin_rbtn->setMinimumSize(QSize(0, 30));
        admin_rbtn->setMaximumSize(QSize(16777215, 30));
        admin_rbtn->setAcceptDrops(false);

        admin_panel->addWidget(admin_rbtn);


        main_panel->addLayout(admin_panel);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        main_panel->addItem(verticalSpacer_7);

        enter_panel = new QHBoxLayout();
        enter_panel->setObjectName(QString::fromUtf8("enter_panel"));
        enter_panel->setContentsMargins(-1, -1, -1, 0);
        register_btn = new QPushButton(mian_panel);
        register_btn->setObjectName(QString::fromUtf8("register_btn"));
        register_btn->setMinimumSize(QSize(0, 30));
        register_btn->setSizeIncrement(QSize(0, 30));
        register_btn->setCursor(QCursor(Qt::PointingHandCursor));

        enter_panel->addWidget(register_btn);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        enter_panel->addItem(horizontalSpacer_4);

        login_btn = new QPushButton(mian_panel);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setMinimumSize(QSize(0, 30));
        login_btn->setMaximumSize(QSize(16777215, 30));
        login_btn->setCursor(QCursor(Qt::PointingHandCursor));

        enter_panel->addWidget(login_btn);


        main_panel->addLayout(enter_panel);


        horizontalLayout_7->addWidget(mian_panel);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        login_page->setCentralWidget(centralwidget);

        retranslateUi(login_page);

        QMetaObject::connectSlotsByName(login_page);
    } // setupUi

    void retranslateUi(QMainWindow *login_page)
    {
        login_page->setWindowTitle(QApplication::translate("login_page", "login_page", nullptr));
        date_lbl->setText(QApplication::translate("login_page", "11400/03/14  14:37", nullptr));
#ifndef QT_NO_TOOLTIP
        minimize_btn->setToolTip(QApplication::translate("login_page", "Minimize", nullptr));
#endif // QT_NO_TOOLTIP
        minimize_btn->setText(QString());
#ifndef QT_NO_TOOLTIP
        close_btn->setToolTip(QApplication::translate("login_page", "Close", nullptr));
#endif // QT_NO_TOOLTIP
        close_btn->setText(QString());
        username_lbl->setText(QApplication::translate("login_page", "Username", nullptr));
#ifndef QT_NO_TOOLTIP
        username_txt->setToolTip(QApplication::translate("login_page", "Enter Your Username", nullptr));
#endif // QT_NO_TOOLTIP
        username_txt->setPlaceholderText(QApplication::translate("login_page", "Your Username", nullptr));
        password_lbl->setText(QApplication::translate("login_page", "Password ", nullptr));
#ifndef QT_NO_TOOLTIP
        password_txt->setToolTip(QApplication::translate("login_page", "Enter Your Password", nullptr));
#endif // QT_NO_TOOLTIP
        password_txt->setPlaceholderText(QApplication::translate("login_page", "Your Password", nullptr));
#ifndef QT_NO_TOOLTIP
        password_btn->setToolTip(QApplication::translate("login_page", "Click to Show or Hide Password", nullptr));
#endif // QT_NO_TOOLTIP
        password_btn->setText(QString());
#ifndef QT_NO_TOOLTIP
        admin_rbtn->setToolTip(QApplication::translate("login_page", "Click to be Admin or Not", nullptr));
#endif // QT_NO_TOOLTIP
        admin_rbtn->setText(QApplication::translate("login_page", "Login as Admin", nullptr));
#ifndef QT_NO_TOOLTIP
        register_btn->setToolTip(QApplication::translate("login_page", "Click to Register", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        register_btn->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        register_btn->setText(QApplication::translate("login_page", "Register", nullptr));
#ifndef QT_NO_TOOLTIP
        login_btn->setToolTip(QApplication::translate("login_page", "Click to Login", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        login_btn->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        login_btn->setText(QApplication::translate("login_page", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_page: public Ui_login_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_PAGE_H
