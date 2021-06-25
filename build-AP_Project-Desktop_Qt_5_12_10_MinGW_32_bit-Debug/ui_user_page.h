/********************************************************************************
** Form generated from reading UI file 'user_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PAGE_H
#define UI_USER_PAGE_H

#include <QtCore/QDate>
#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_page
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *back_panel;
    QVBoxLayout *verticalLayout_5;
    QFrame *top_panel;
    QHBoxLayout *horizontalLayout;
    QLabel *date_lbl;
    QSpacerItem *horizontalSpacer;
    QPushButton *minimize_btn;
    QPushButton *close_btn;
    QFrame *information_panel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *information_lbl;
    QSpacerItem *horizontalSpacer_2;
    QLabel *cost_lbl;
    QProgressBar *cost_prossbar;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *main_panel;
    QFrame *tool_panel;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tool_tabwidget;
    QWidget *search_tab;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_19;
    QGroupBox *group_gbox;
    QVBoxLayout *verticalLayout_8;
    QComboBox *group_combox;
    QLineEdit *word_txt;
    QSpacerItem *verticalSpacer_20;
    QGroupBox *by_gbox;
    QVBoxLayout *verticalLayout_9;
    QRadioButton *name_rbtn;
    QRadioButton *company_rbtn;
    QRadioButton *group_rbtn;
    QRadioButton *price_rbtn;
    QRadioButton *remain_rbtn;
    QSpacerItem *verticalSpacer_21;
    QWidget *credit_tab;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_11;
    QHBoxLayout *amount_panel;
    QLabel *amount_lbl;
    QLineEdit *amount_txt;
    QSpacerItem *verticalSpacer_12;
    QHBoxLayout *card_panel;
    QLabel *card_lbl;
    QLineEdit *card_txt;
    QSpacerItem *verticalSpacer_13;
    QHBoxLayout *cvv2_panel;
    QLabel *cvv2_lbl;
    QLineEdit *cvv2_txt;
    QSpacerItem *verticalSpacer_14;
    QHBoxLayout *date_panel;
    QLabel *date_lbl_2;
    QDateEdit *date_txt;
    QSpacerItem *verticalSpacer_15;
    QHBoxLayout *second_panel;
    QLabel *secondpassword_lbl;
    QLineEdit *second_txt;
    QSpacerItem *verticalSpacer_17;
    QPushButton *increasecredit_btn;
    QSpacerItem *verticalSpacer_16;
    QWidget *password_tab;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *username_panel;
    QLabel *username_lbl;
    QLineEdit *username_txt;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *oldpassword_panel;
    QLabel *oldpassword_lbl;
    QLineEdit *oldpassword_txt;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *newpassword_panel;
    QLabel *newpassword_lbl;
    QLineEdit *newpassword_txt;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *repeatpassword_panel;
    QLabel *repeatpassword_lbl;
    QLineEdit *repeatpassword_txt;
    QSpacerItem *verticalSpacer_2;
    QPushButton *passwordapply_btn;
    QSpacerItem *verticalSpacer_7;
    QPushButton *aboutme_btn;
    QPushButton *payment_btn;
    QFrame *table_panel;
    QVBoxLayout *verticalLayout_3;
    QLabel *product_lbl;
    QTableWidget *product_table;
    QLabel *shopping_lbl;
    QTableWidget *shopping_table;

    void setupUi(QWidget *user_page)
    {
        if (user_page->objectName().isEmpty())
            user_page->setObjectName(QString::fromUtf8("user_page"));
        user_page->resize(1100, 700);
        user_page->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(12);
        user_page->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/add_to_shopping_cart.ico"), QSize(), QIcon::Normal, QIcon::Off);
        user_page->setWindowIcon(icon);
        user_page->setStyleSheet(QString::fromUtf8("#back_panel\n"
"{\n"
"border-image : url(:/image/grocery-cart-shutterstock_1620856499.jpg);\n"
" }\n"
"#top_panel, #information_panel\n"
"{\n"
" background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 200), stop:1 rgba(32, 80, 96, 150));\n"
" }\n"
"#date_lbl,#information_lbl, #cost_lbl, #product_lbl, #shopping_lbl\n"
"{\n"
" color: white;\n"
" }\n"
"#passwordapply_btn, #increasecredit_btn, #close_btn, #minimize_btn,#aboutme_btn, #payment_btn\n"
"{\n"
"  color: white;\n"
"  background-color: #45ada8;\n"
"  border-width: 0px;\n"
"  border-radius: 3px;\n"
"}\n"
"#passwordapply_btn:hover, #increasecredit_btn:hover , #minimize_btn:hover, #aboutme_btn:hover, #payment_btn:hover\n"
"{\n"
" background-color: #547980;\n"
" }\n"
"#tool_panel, #table_panel\n"
"{\n"
"  background: rgba(0, 0, 0, 0.5);\n"
"}\n"
" #close_btn:hover\n"
"{\n"
"	 background-color: rgb(158, 0, 0);\n"
"}\n"
"#search_tab, #credit_tab, #password_tab\n"
"{\n"
"	background-color: rgb(240, 240, 240);\n"
"}"));
        verticalLayout = new QVBoxLayout(user_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        back_panel = new QFrame(user_page);
        back_panel->setObjectName(QString::fromUtf8("back_panel"));
        verticalLayout_5 = new QVBoxLayout(back_panel);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        top_panel = new QFrame(back_panel);
        top_panel->setObjectName(QString::fromUtf8("top_panel"));
        horizontalLayout = new QHBoxLayout(top_panel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        date_lbl = new QLabel(top_panel);
        date_lbl->setObjectName(QString::fromUtf8("date_lbl"));
        date_lbl->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(10);
        date_lbl->setFont(font1);

        horizontalLayout->addWidget(date_lbl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        minimize_btn = new QPushButton(top_panel);
        minimize_btn->setObjectName(QString::fromUtf8("minimize_btn"));
        minimize_btn->setMinimumSize(QSize(40, 40));
        minimize_btn->setMaximumSize(QSize(40, 40));
        minimize_btn->setCursor(QCursor(Qt::PointingHandCursor));
        minimize_btn->setMouseTracking(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/mini.ico"), QSize(), QIcon::Normal, QIcon::Off);
        minimize_btn->setIcon(icon1);
        minimize_btn->setIconSize(QSize(25, 35));

        horizontalLayout->addWidget(minimize_btn);

        close_btn = new QPushButton(top_panel);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setMinimumSize(QSize(40, 40));
        close_btn->setMaximumSize(QSize(40, 40));
        close_btn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon2);
        close_btn->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(close_btn);


        verticalLayout_5->addWidget(top_panel);

        information_panel = new QFrame(back_panel);
        information_panel->setObjectName(QString::fromUtf8("information_panel"));
        horizontalLayout_2 = new QHBoxLayout(information_panel);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, -1, -1);
        information_lbl = new QLabel(information_panel);
        information_lbl->setObjectName(QString::fromUtf8("information_lbl"));
        information_lbl->setMinimumSize(QSize(0, 30));
        information_lbl->setFont(font1);

        horizontalLayout_2->addWidget(information_lbl);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        cost_lbl = new QLabel(information_panel);
        cost_lbl->setObjectName(QString::fromUtf8("cost_lbl"));
        cost_lbl->setFont(font1);

        horizontalLayout_2->addWidget(cost_lbl);

        cost_prossbar = new QProgressBar(information_panel);
        cost_prossbar->setObjectName(QString::fromUtf8("cost_prossbar"));
        cost_prossbar->setMinimumSize(QSize(0, 30));
        cost_prossbar->setValue(0);
        cost_prossbar->setTextVisible(false);

        horizontalLayout_2->addWidget(cost_prossbar);


        verticalLayout_5->addWidget(information_panel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        main_panel = new QHBoxLayout();
        main_panel->setObjectName(QString::fromUtf8("main_panel"));
        main_panel->setContentsMargins(-1, 0, -1, -1);
        tool_panel = new QFrame(back_panel);
        tool_panel->setObjectName(QString::fromUtf8("tool_panel"));
        tool_panel->setMinimumSize(QSize(0, 545));
        tool_panel->setMaximumSize(QSize(400, 16777215));
        verticalLayout_2 = new QVBoxLayout(tool_panel);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 9, -1, 9);
        tool_tabwidget = new QTabWidget(tool_panel);
        tool_tabwidget->setObjectName(QString::fromUtf8("tool_tabwidget"));
        tool_tabwidget->setMinimumSize(QSize(388, 0));
        tool_tabwidget->setMaximumSize(QSize(388, 16777215));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        tool_tabwidget->setFont(font2);
        tool_tabwidget->setMouseTracking(false);
        tool_tabwidget->setTabletTracking(false);
        tool_tabwidget->setAcceptDrops(false);
        tool_tabwidget->setLayoutDirection(Qt::LeftToRight);
        tool_tabwidget->setAutoFillBackground(false);
        tool_tabwidget->setLocale(QLocale(QLocale::Persian, QLocale::Iran));
        tool_tabwidget->setTabPosition(QTabWidget::North);
        tool_tabwidget->setTabShape(QTabWidget::Rounded);
        tool_tabwidget->setElideMode(Qt::ElideLeft);
        tool_tabwidget->setUsesScrollButtons(true);
        tool_tabwidget->setDocumentMode(false);
        tool_tabwidget->setTabsClosable(false);
        tool_tabwidget->setMovable(false);
        tool_tabwidget->setTabBarAutoHide(false);
        search_tab = new QWidget();
        search_tab->setObjectName(QString::fromUtf8("search_tab"));
        verticalLayout_7 = new QVBoxLayout(search_tab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_19 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_19);

        group_gbox = new QGroupBox(search_tab);
        group_gbox->setObjectName(QString::fromUtf8("group_gbox"));
        group_gbox->setFont(font1);
        verticalLayout_8 = new QVBoxLayout(group_gbox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        group_combox = new QComboBox(group_gbox);
        group_combox->setObjectName(QString::fromUtf8("group_combox"));
        group_combox->setMinimumSize(QSize(0, 30));
        group_combox->setFont(font1);

        verticalLayout_8->addWidget(group_combox);


        verticalLayout_7->addWidget(group_gbox);

        word_txt = new QLineEdit(search_tab);
        word_txt->setObjectName(QString::fromUtf8("word_txt"));
        word_txt->setMinimumSize(QSize(0, 30));
        word_txt->setFont(font1);
        word_txt->setAlignment(Qt::AlignCenter);
        word_txt->setReadOnly(false);

        verticalLayout_7->addWidget(word_txt);

        verticalSpacer_20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_20);

        by_gbox = new QGroupBox(search_tab);
        by_gbox->setObjectName(QString::fromUtf8("by_gbox"));
        by_gbox->setFont(font1);
        verticalLayout_9 = new QVBoxLayout(by_gbox);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        name_rbtn = new QRadioButton(by_gbox);
        name_rbtn->setObjectName(QString::fromUtf8("name_rbtn"));
        name_rbtn->setMinimumSize(QSize(0, 30));
        name_rbtn->setFont(font1);
        name_rbtn->setCursor(QCursor(Qt::PointingHandCursor));
        name_rbtn->setChecked(true);

        verticalLayout_9->addWidget(name_rbtn);

        company_rbtn = new QRadioButton(by_gbox);
        company_rbtn->setObjectName(QString::fromUtf8("company_rbtn"));
        company_rbtn->setMinimumSize(QSize(0, 30));
        company_rbtn->setFont(font1);
        company_rbtn->setCursor(QCursor(Qt::PointingHandCursor));
        company_rbtn->setMouseTracking(true);

        verticalLayout_9->addWidget(company_rbtn);

        group_rbtn = new QRadioButton(by_gbox);
        group_rbtn->setObjectName(QString::fromUtf8("group_rbtn"));
        group_rbtn->setMinimumSize(QSize(0, 30));
        group_rbtn->setFont(font1);
        group_rbtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_9->addWidget(group_rbtn);

        price_rbtn = new QRadioButton(by_gbox);
        price_rbtn->setObjectName(QString::fromUtf8("price_rbtn"));
        price_rbtn->setMinimumSize(QSize(0, 30));
        price_rbtn->setFont(font1);
        price_rbtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_9->addWidget(price_rbtn);

        remain_rbtn = new QRadioButton(by_gbox);
        remain_rbtn->setObjectName(QString::fromUtf8("remain_rbtn"));
        remain_rbtn->setFont(font1);
        remain_rbtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_9->addWidget(remain_rbtn);


        verticalLayout_7->addWidget(by_gbox);

        verticalSpacer_21 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_21);

        tool_tabwidget->addTab(search_tab, QString());
        credit_tab = new QWidget();
        credit_tab->setObjectName(QString::fromUtf8("credit_tab"));
        verticalLayout_6 = new QVBoxLayout(credit_tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalSpacer_11 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_11);

        amount_panel = new QHBoxLayout();
        amount_panel->setObjectName(QString::fromUtf8("amount_panel"));
        amount_lbl = new QLabel(credit_tab);
        amount_lbl->setObjectName(QString::fromUtf8("amount_lbl"));
        amount_lbl->setMinimumSize(QSize(0, 30));
        amount_lbl->setFont(font1);

        amount_panel->addWidget(amount_lbl);

        amount_txt = new QLineEdit(credit_tab);
        amount_txt->setObjectName(QString::fromUtf8("amount_txt"));
        amount_txt->setMinimumSize(QSize(0, 30));
        amount_txt->setMaximumSize(QSize(222, 16777215));
        amount_txt->setFont(font1);
        amount_txt->setAlignment(Qt::AlignCenter);

        amount_panel->addWidget(amount_txt);


        verticalLayout_6->addLayout(amount_panel);

        verticalSpacer_12 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_12);

        card_panel = new QHBoxLayout();
        card_panel->setObjectName(QString::fromUtf8("card_panel"));
        card_lbl = new QLabel(credit_tab);
        card_lbl->setObjectName(QString::fromUtf8("card_lbl"));
        card_lbl->setMinimumSize(QSize(0, 30));
        card_lbl->setFont(font1);

        card_panel->addWidget(card_lbl);

        card_txt = new QLineEdit(credit_tab);
        card_txt->setObjectName(QString::fromUtf8("card_txt"));
        card_txt->setMinimumSize(QSize(0, 30));
        card_txt->setMaximumSize(QSize(222, 16777215));
        card_txt->setFont(font1);
        card_txt->setMaxLength(16);
        card_txt->setAlignment(Qt::AlignCenter);

        card_panel->addWidget(card_txt);


        verticalLayout_6->addLayout(card_panel);

        verticalSpacer_13 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_13);

        cvv2_panel = new QHBoxLayout();
        cvv2_panel->setObjectName(QString::fromUtf8("cvv2_panel"));
        cvv2_lbl = new QLabel(credit_tab);
        cvv2_lbl->setObjectName(QString::fromUtf8("cvv2_lbl"));
        cvv2_lbl->setMinimumSize(QSize(0, 30));
        cvv2_lbl->setFont(font1);

        cvv2_panel->addWidget(cvv2_lbl);

        cvv2_txt = new QLineEdit(credit_tab);
        cvv2_txt->setObjectName(QString::fromUtf8("cvv2_txt"));
        cvv2_txt->setMinimumSize(QSize(222, 30));
        cvv2_txt->setMaximumSize(QSize(222, 16777215));
        cvv2_txt->setFont(font1);
        cvv2_txt->setAlignment(Qt::AlignCenter);

        cvv2_panel->addWidget(cvv2_txt);


        verticalLayout_6->addLayout(cvv2_panel);

        verticalSpacer_14 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_14);

        date_panel = new QHBoxLayout();
        date_panel->setObjectName(QString::fromUtf8("date_panel"));
        date_lbl_2 = new QLabel(credit_tab);
        date_lbl_2->setObjectName(QString::fromUtf8("date_lbl_2"));
        date_lbl_2->setMinimumSize(QSize(0, 30));
        date_lbl_2->setFont(font1);

        date_panel->addWidget(date_lbl_2);

        date_txt = new QDateEdit(credit_tab);
        date_txt->setObjectName(QString::fromUtf8("date_txt"));
        date_txt->setMinimumSize(QSize(222, 30));
        date_txt->setMaximumSize(QSize(222, 16777215));
        date_txt->setFont(font1);
        date_txt->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        date_txt->setWrapping(false);
        date_txt->setFrame(true);
        date_txt->setAlignment(Qt::AlignCenter);
        date_txt->setReadOnly(false);
        date_txt->setAccelerated(false);
        date_txt->setKeyboardTracking(true);
        date_txt->setProperty("showGroupSeparator", QVariant(false));
        date_txt->setMinimumDate(QDate(1752, 9, 15));
        date_txt->setCalendarPopup(true);
        date_txt->setCurrentSectionIndex(0);
        date_txt->setTimeSpec(Qt::LocalTime);
        date_txt->setDate(QDate(2020, 1, 1));

        date_panel->addWidget(date_txt);


        verticalLayout_6->addLayout(date_panel);

        verticalSpacer_15 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_15);

        second_panel = new QHBoxLayout();
        second_panel->setObjectName(QString::fromUtf8("second_panel"));
        secondpassword_lbl = new QLabel(credit_tab);
        secondpassword_lbl->setObjectName(QString::fromUtf8("secondpassword_lbl"));
        secondpassword_lbl->setMinimumSize(QSize(0, 30));
        secondpassword_lbl->setFont(font1);

        second_panel->addWidget(secondpassword_lbl);

        second_txt = new QLineEdit(credit_tab);
        second_txt->setObjectName(QString::fromUtf8("second_txt"));
        second_txt->setMinimumSize(QSize(222, 30));
        second_txt->setMaximumSize(QSize(222, 16777215));
        second_txt->setFont(font1);
        second_txt->setEchoMode(QLineEdit::Password);
        second_txt->setAlignment(Qt::AlignCenter);

        second_panel->addWidget(second_txt);


        verticalLayout_6->addLayout(second_panel);

        verticalSpacer_17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_17);

        increasecredit_btn = new QPushButton(credit_tab);
        increasecredit_btn->setObjectName(QString::fromUtf8("increasecredit_btn"));
        increasecredit_btn->setMinimumSize(QSize(0, 30));
        increasecredit_btn->setFont(font1);
        increasecredit_btn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(increasecredit_btn);

        verticalSpacer_16 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_16);

        tool_tabwidget->addTab(credit_tab, QString());
        password_tab = new QWidget();
        password_tab->setObjectName(QString::fromUtf8("password_tab"));
        verticalLayout_4 = new QVBoxLayout(password_tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        username_panel = new QHBoxLayout();
        username_panel->setObjectName(QString::fromUtf8("username_panel"));
        username_lbl = new QLabel(password_tab);
        username_lbl->setObjectName(QString::fromUtf8("username_lbl"));
        username_lbl->setMinimumSize(QSize(0, 30));
        username_lbl->setFont(font1);

        username_panel->addWidget(username_lbl);

        username_txt = new QLineEdit(password_tab);
        username_txt->setObjectName(QString::fromUtf8("username_txt"));
        username_txt->setMinimumSize(QSize(0, 30));
        username_txt->setMaximumSize(QSize(225, 16777215));
        username_txt->setFont(font1);
        username_txt->setAlignment(Qt::AlignCenter);

        username_panel->addWidget(username_txt);


        verticalLayout_4->addLayout(username_panel);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        oldpassword_panel = new QHBoxLayout();
        oldpassword_panel->setObjectName(QString::fromUtf8("oldpassword_panel"));
        oldpassword_lbl = new QLabel(password_tab);
        oldpassword_lbl->setObjectName(QString::fromUtf8("oldpassword_lbl"));
        oldpassword_lbl->setMinimumSize(QSize(0, 30));
        oldpassword_lbl->setFont(font1);

        oldpassword_panel->addWidget(oldpassword_lbl);

        oldpassword_txt = new QLineEdit(password_tab);
        oldpassword_txt->setObjectName(QString::fromUtf8("oldpassword_txt"));
        oldpassword_txt->setMinimumSize(QSize(0, 30));
        oldpassword_txt->setMaximumSize(QSize(225, 16777215));
        oldpassword_txt->setFont(font1);
        oldpassword_txt->setEchoMode(QLineEdit::Password);
        oldpassword_txt->setAlignment(Qt::AlignCenter);

        oldpassword_panel->addWidget(oldpassword_txt);


        verticalLayout_4->addLayout(oldpassword_panel);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        newpassword_panel = new QHBoxLayout();
        newpassword_panel->setObjectName(QString::fromUtf8("newpassword_panel"));
        newpassword_lbl = new QLabel(password_tab);
        newpassword_lbl->setObjectName(QString::fromUtf8("newpassword_lbl"));
        newpassword_lbl->setMinimumSize(QSize(0, 30));
        newpassword_lbl->setMaximumSize(QSize(225, 16777215));
        newpassword_lbl->setFont(font1);

        newpassword_panel->addWidget(newpassword_lbl);

        newpassword_txt = new QLineEdit(password_tab);
        newpassword_txt->setObjectName(QString::fromUtf8("newpassword_txt"));
        newpassword_txt->setMinimumSize(QSize(0, 30));
        newpassword_txt->setMaximumSize(QSize(225, 16777215));
        newpassword_txt->setFont(font1);
        newpassword_txt->setEchoMode(QLineEdit::Password);
        newpassword_txt->setAlignment(Qt::AlignCenter);

        newpassword_panel->addWidget(newpassword_txt);


        verticalLayout_4->addLayout(newpassword_panel);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_6);

        repeatpassword_panel = new QHBoxLayout();
        repeatpassword_panel->setObjectName(QString::fromUtf8("repeatpassword_panel"));
        repeatpassword_lbl = new QLabel(password_tab);
        repeatpassword_lbl->setObjectName(QString::fromUtf8("repeatpassword_lbl"));
        repeatpassword_lbl->setMinimumSize(QSize(0, 30));
        repeatpassword_lbl->setFont(font1);

        repeatpassword_panel->addWidget(repeatpassword_lbl);

        repeatpassword_txt = new QLineEdit(password_tab);
        repeatpassword_txt->setObjectName(QString::fromUtf8("repeatpassword_txt"));
        repeatpassword_txt->setMinimumSize(QSize(30, 30));
        repeatpassword_txt->setMaximumSize(QSize(225, 16777215));
        repeatpassword_txt->setFont(font1);
        repeatpassword_txt->setEchoMode(QLineEdit::Password);
        repeatpassword_txt->setAlignment(Qt::AlignCenter);

        repeatpassword_panel->addWidget(repeatpassword_txt);


        verticalLayout_4->addLayout(repeatpassword_panel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        passwordapply_btn = new QPushButton(password_tab);
        passwordapply_btn->setObjectName(QString::fromUtf8("passwordapply_btn"));
        passwordapply_btn->setMinimumSize(QSize(0, 30));
        passwordapply_btn->setFont(font1);
        passwordapply_btn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(passwordapply_btn);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_7);

        tool_tabwidget->addTab(password_tab, QString());

        verticalLayout_2->addWidget(tool_tabwidget);

        aboutme_btn = new QPushButton(tool_panel);
        aboutme_btn->setObjectName(QString::fromUtf8("aboutme_btn"));
        aboutme_btn->setMinimumSize(QSize(0, 30));
        aboutme_btn->setFont(font1);
        aboutme_btn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(aboutme_btn);

        payment_btn = new QPushButton(tool_panel);
        payment_btn->setObjectName(QString::fromUtf8("payment_btn"));
        payment_btn->setMinimumSize(QSize(0, 30));
        payment_btn->setFont(font1);
        payment_btn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(payment_btn);


        main_panel->addWidget(tool_panel);

        table_panel = new QFrame(back_panel);
        table_panel->setObjectName(QString::fromUtf8("table_panel"));
        verticalLayout_3 = new QVBoxLayout(table_panel);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        product_lbl = new QLabel(table_panel);
        product_lbl->setObjectName(QString::fromUtf8("product_lbl"));
        product_lbl->setFont(font1);

        verticalLayout_3->addWidget(product_lbl);

        product_table = new QTableWidget(table_panel);
        if (product_table->columnCount() < 5)
            product_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        product_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        product_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        product_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        product_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        product_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        product_table->setObjectName(QString::fromUtf8("product_table"));
        product_table->setEnabled(true);
        product_table->setMaximumSize(QSize(651, 16777215));
        product_table->setFont(font1);
        product_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        product_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        product_table->horizontalHeader()->setCascadingSectionResizes(false);
        product_table->horizontalHeader()->setHighlightSections(true);
        product_table->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        product_table->horizontalHeader()->setStretchLastSection(true);
        product_table->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        verticalLayout_3->addWidget(product_table);

        shopping_lbl = new QLabel(table_panel);
        shopping_lbl->setObjectName(QString::fromUtf8("shopping_lbl"));
        shopping_lbl->setFont(font1);

        verticalLayout_3->addWidget(shopping_lbl);

        shopping_table = new QTableWidget(table_panel);
        if (shopping_table->columnCount() < 5)
            shopping_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        shopping_table->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        shopping_table->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        shopping_table->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        shopping_table->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        shopping_table->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        shopping_table->setObjectName(QString::fromUtf8("shopping_table"));
        shopping_table->setFont(font1);
        shopping_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        shopping_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        shopping_table->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_3->addWidget(shopping_table);


        main_panel->addWidget(table_panel);


        verticalLayout_5->addLayout(main_panel);


        verticalLayout->addWidget(back_panel);


        retranslateUi(user_page);
        QObject::connect(name_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));
        QObject::connect(company_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));
        QObject::connect(group_rbtn, SIGNAL(clicked()), group_gbox, SLOT(hide()));
        QObject::connect(price_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));
        QObject::connect(remain_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));

        tool_tabwidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(user_page);
    } // setupUi

    void retranslateUi(QWidget *user_page)
    {
        user_page->setWindowTitle(QApplication::translate("user_page", "User Page", nullptr));
        date_lbl->setText(QApplication::translate("user_page", "11400/03/14  14:37", nullptr));
#ifndef QT_NO_TOOLTIP
        minimize_btn->setToolTip(QApplication::translate("user_page", "Minimize", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        minimize_btn->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        minimize_btn->setText(QString());
#ifndef QT_NO_TOOLTIP
        close_btn->setToolTip(QApplication::translate("user_page", "Close", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        close_btn->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        close_btn->setText(QString());
        information_lbl->setText(QApplication::translate("user_page", "User : Credit:", nullptr));
        cost_lbl->setText(QApplication::translate("user_page", "Cost : 0 $", nullptr));
#ifndef QT_NO_STATUSTIP
        tool_tabwidget->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tool_tabwidget->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        tool_tabwidget->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        tool_tabwidget->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        group_gbox->setTitle(QApplication::translate("user_page", "Group : ", nullptr));
#ifndef QT_NO_TOOLTIP
        word_txt->setToolTip(QApplication::translate("user_page", "Enter Word for Search", nullptr));
#endif // QT_NO_TOOLTIP
        word_txt->setPlaceholderText(QApplication::translate("user_page", "Word for Search", nullptr));
        by_gbox->setTitle(QApplication::translate("user_page", "By :", nullptr));
        name_rbtn->setText(QApplication::translate("user_page", "Name", nullptr));
        company_rbtn->setText(QApplication::translate("user_page", "Company", nullptr));
        group_rbtn->setText(QApplication::translate("user_page", "Group", nullptr));
        price_rbtn->setText(QApplication::translate("user_page", "price", nullptr));
        remain_rbtn->setText(QApplication::translate("user_page", "Remain", nullptr));
        tool_tabwidget->setTabText(tool_tabwidget->indexOf(search_tab), QApplication::translate("user_page", "Search", nullptr));
        amount_lbl->setText(QApplication::translate("user_page", "Amount :", nullptr));
#ifndef QT_NO_TOOLTIP
        amount_txt->setToolTip(QApplication::translate("user_page", "Enter Amount of Money", nullptr));
#endif // QT_NO_TOOLTIP
        amount_txt->setPlaceholderText(QApplication::translate("user_page", "Amount of Money", nullptr));
        card_lbl->setText(QApplication::translate("user_page", "Card Number :", nullptr));
#ifndef QT_NO_TOOLTIP
        card_txt->setToolTip(QApplication::translate("user_page", "Enter Your Card Number", nullptr));
#endif // QT_NO_TOOLTIP
        card_txt->setInputMask(QString());
        card_txt->setPlaceholderText(QApplication::translate("user_page", "Your Card Number", nullptr));
        cvv2_lbl->setText(QApplication::translate("user_page", "CVV2 :", nullptr));
#ifndef QT_NO_TOOLTIP
        cvv2_txt->setToolTip(QApplication::translate("user_page", "Enter Your CVV2 of Your Card", nullptr));
#endif // QT_NO_TOOLTIP
        cvv2_txt->setPlaceholderText(QApplication::translate("user_page", "CVV2 Card", nullptr));
        date_lbl_2->setText(QApplication::translate("user_page", "Expiration Date :", nullptr));
#ifndef QT_NO_TOOLTIP
        date_txt->setToolTip(QApplication::translate("user_page", "Enter Your Ex Date of Your Card", nullptr));
#endif // QT_NO_TOOLTIP
        secondpassword_lbl->setText(QApplication::translate("user_page", "Second Password :", nullptr));
#ifndef QT_NO_TOOLTIP
        second_txt->setToolTip(QApplication::translate("user_page", "Enter Your Second Password", nullptr));
#endif // QT_NO_TOOLTIP
        second_txt->setPlaceholderText(QApplication::translate("user_page", "Second Password Card", nullptr));
#ifndef QT_NO_TOOLTIP
        increasecredit_btn->setToolTip(QApplication::translate("user_page", "Click to Compelete the Payment Operation", nullptr));
#endif // QT_NO_TOOLTIP
        increasecredit_btn->setText(QApplication::translate("user_page", "Apply", nullptr));
        tool_tabwidget->setTabText(tool_tabwidget->indexOf(credit_tab), QApplication::translate("user_page", "Increase Credit", nullptr));
        username_lbl->setText(QApplication::translate("user_page", "Username :", nullptr));
#ifndef QT_NO_TOOLTIP
        username_txt->setToolTip(QApplication::translate("user_page", "Enter Your Username", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        username_txt->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        username_txt->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        username_txt->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        username_txt->setPlaceholderText(QApplication::translate("user_page", "Your Username", nullptr));
        oldpassword_lbl->setText(QApplication::translate("user_page", "Old Password :", nullptr));
#ifndef QT_NO_TOOLTIP
        oldpassword_txt->setToolTip(QApplication::translate("user_page", "Enter Your Password", nullptr));
#endif // QT_NO_TOOLTIP
        oldpassword_txt->setText(QString());
        oldpassword_txt->setPlaceholderText(QApplication::translate("user_page", "Your Password", nullptr));
        newpassword_lbl->setText(QApplication::translate("user_page", "New Password :", nullptr));
#ifndef QT_NO_TOOLTIP
        newpassword_txt->setToolTip(QApplication::translate("user_page", "Enter a New Password", nullptr));
#endif // QT_NO_TOOLTIP
        newpassword_txt->setPlaceholderText(QApplication::translate("user_page", "New Password", nullptr));
        repeatpassword_lbl->setText(QApplication::translate("user_page", "Repeat Password :", nullptr));
#ifndef QT_NO_TOOLTIP
        repeatpassword_txt->setToolTip(QApplication::translate("user_page", "Enter a New password", nullptr));
#endif // QT_NO_TOOLTIP
        repeatpassword_txt->setPlaceholderText(QApplication::translate("user_page", "Repeat New Password", nullptr));
#ifndef QT_NO_TOOLTIP
        passwordapply_btn->setToolTip(QApplication::translate("user_page", "Click to Change Your password", nullptr));
#endif // QT_NO_TOOLTIP
        passwordapply_btn->setText(QApplication::translate("user_page", "Apply", nullptr));
        tool_tabwidget->setTabText(tool_tabwidget->indexOf(password_tab), QApplication::translate("user_page", "Change Password", nullptr));
#ifndef QT_NO_TOOLTIP
        aboutme_btn->setToolTip(QApplication::translate("user_page", "Click to Open New Window About Me", nullptr));
#endif // QT_NO_TOOLTIP
        aboutme_btn->setText(QApplication::translate("user_page", "About Me", nullptr));
#ifndef QT_NO_TOOLTIP
        payment_btn->setToolTip(QApplication::translate("user_page", "Pay the Bill and Buying", nullptr));
#endif // QT_NO_TOOLTIP
        payment_btn->setText(QApplication::translate("user_page", "Payment", nullptr));
        product_lbl->setText(QApplication::translate("user_page", "products List :", nullptr));
        QTableWidgetItem *___qtablewidgetitem = product_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("user_page", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = product_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("user_page", "Company", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = product_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("user_page", "Group", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = product_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("user_page", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = product_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("user_page", "Remain", nullptr));
#ifndef QT_NO_TOOLTIP
        product_table->setToolTip(QApplication::translate("user_page", "Double-Click to Selet a Product", nullptr));
#endif // QT_NO_TOOLTIP
        shopping_lbl->setText(QApplication::translate("user_page", "Shopping List :", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = shopping_table->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("user_page", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = shopping_table->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("user_page", "Company", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = shopping_table->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("user_page", "Group", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = shopping_table->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("user_page", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = shopping_table->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("user_page", "Number", nullptr));
#ifndef QT_NO_TOOLTIP
        shopping_table->setToolTip(QApplication::translate("user_page", "Double-Click to Remove Product", nullptr));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class user_page: public Ui_user_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PAGE_H
