/********************************************************************************
** Form generated from reading UI file 'admin_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PAGE_H
#define UI_ADMIN_PAGE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_page
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *main_panel;
    QVBoxLayout *_2;
    QFrame *top_panel;
    QHBoxLayout *horizontalLayout;
    QLabel *date_lbl;
    QSpacerItem *horizontalSpacer;
    QPushButton *minimize_btn;
    QPushButton *close_btn;
    QTabWidget *main_tab;
    QWidget *product_tab;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tool_tab;
    QWidget *search_tab;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QGroupBox *group_gbox;
    QVBoxLayout *verticalLayout_4;
    QComboBox *group_combox;
    QLineEdit *word_txt;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *by_gbox;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *name_rbtn;
    QRadioButton *company_rbtn;
    QRadioButton *group_rbtn;
    QRadioButton *price_rbtn;
    QRadioButton *remain_rbtn;
    QSpacerItem *verticalSpacer_3;
    QWidget *tool_tab_2;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *name_panel;
    QLabel *name_lbl;
    QLineEdit *name_txt;
    QHBoxLayout *company_panel;
    QLabel *company_lbl;
    QLineEdit *company_txt;
    QHBoxLayout *group_panel;
    QLabel *group_lbl;
    QLineEdit *group_txt;
    QHBoxLayout *price_panel;
    QLabel *price_lbl;
    QLineEdit *price_txt;
    QHBoxLayout *remain_panel;
    QLabel *remain_lbl;
    QLineEdit *remain_txt;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QPushButton *insert_btn;
    QPushButton *edit_btn;
    QPushButton *delete_btn;
    QSpacerItem *verticalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *product_table;
    QWidget *user_tab;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *report_gbox;
    QVBoxLayout *verticalLayout_8;
    QTextEdit *report_txt;
    QGridLayout *gridLayout_2;
    QPushButton *report_btn;
    QPushButton *save_btn;
    QGroupBox *user_gbox;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *user_table;

    void setupUi(QWidget *admin_page)
    {
        if (admin_page->objectName().isEmpty())
            admin_page->setObjectName(QString::fromUtf8("admin_page"));
        admin_page->resize(1100, 700);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/Nitro Display.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin_page->setWindowIcon(icon);
        admin_page->setStyleSheet(QString::fromUtf8("#main_panel\n"
"{\n"
"	border-image: url(:/image/blurred-background-supermarket-aisle-with-products_62890-121.jpg);\n"
" }\n"
"#top_panel\n"
"{\n"
" background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 200), stop:1 rgba(32, 80, 96, 150));\n"
" }\n"
"#date_lbl\n"
"{\n"
" color: white;\n"
" }\n"
"#report_btn, #save_btn, #insert_btn, #delete_btn,#edit_btn, #close_btn, #minimize_btn\n"
"{\n"
"  color: white;\n"
"  background-color: #45ada8;\n"
"  border-width: 0px;\n"
"  border-radius: 3px;\n"
"}\n"
"#insert_btn:hover, #report_btn:hover , #minimize_btn:hover, #delete_btn:hover, #edit_btn:hover, #save_btn:hover\n"
"{\n"
" background-color: #547980;\n"
" }\n"
"#table_panel\n"
"{\n"
"  background: rgba(0, 0, 0, 0.5);\n"
"}\n"
" #close_btn:hover\n"
"{\n"
"	 background-color: rgb(158, 0, 0);\n"
"}\n"
"#product_tab, #user_tab, #search_tab, #tool_tab_2\n"
"{\n"
"	background-color: rgb(240, 240, 240);\n"
"}"));
        verticalLayout = new QVBoxLayout(admin_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        main_panel = new QFrame(admin_page);
        main_panel->setObjectName(QString::fromUtf8("main_panel"));
        _2 = new QVBoxLayout(main_panel);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(9, 9, 9, 9);
        top_panel = new QFrame(main_panel);
        top_panel->setObjectName(QString::fromUtf8("top_panel"));
        horizontalLayout = new QHBoxLayout(top_panel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        date_lbl = new QLabel(top_panel);
        date_lbl->setObjectName(QString::fromUtf8("date_lbl"));
        date_lbl->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(10);
        date_lbl->setFont(font);

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
        minimize_btn->setFont(font);
        minimize_btn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/mini.ico"), QSize(), QIcon::Normal, QIcon::Off);
        minimize_btn->setIcon(icon1);
        minimize_btn->setIconSize(QSize(25, 35));

        horizontalLayout->addWidget(minimize_btn);

        close_btn = new QPushButton(top_panel);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        sizePolicy.setHeightForWidth(close_btn->sizePolicy().hasHeightForWidth());
        close_btn->setSizePolicy(sizePolicy);
        close_btn->setMinimumSize(QSize(40, 40));
        QFont font1;
        font1.setKerning(true);
        close_btn->setFont(font1);
        close_btn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon2);
        close_btn->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(close_btn);


        _2->addWidget(top_panel);

        main_tab = new QTabWidget(main_panel);
        main_tab->setObjectName(QString::fromUtf8("main_tab"));
        main_tab->setFont(font);
        main_tab->setContextMenuPolicy(Qt::DefaultContextMenu);
        main_tab->setTabPosition(QTabWidget::West);
        product_tab = new QWidget();
        product_tab->setObjectName(QString::fromUtf8("product_tab"));
        horizontalLayout_2 = new QHBoxLayout(product_tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tool_tab = new QTabWidget(product_tab);
        tool_tab->setObjectName(QString::fromUtf8("tool_tab"));
        tool_tab->setMaximumSize(QSize(400, 16777215));
        tool_tab->setFont(font);
        search_tab = new QWidget();
        search_tab->setObjectName(QString::fromUtf8("search_tab"));
        verticalLayout_3 = new QVBoxLayout(search_tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        group_gbox = new QGroupBox(search_tab);
        group_gbox->setObjectName(QString::fromUtf8("group_gbox"));
        group_gbox->setFont(font);
        verticalLayout_4 = new QVBoxLayout(group_gbox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        group_combox = new QComboBox(group_gbox);
        group_combox->setObjectName(QString::fromUtf8("group_combox"));
        group_combox->setMinimumSize(QSize(0, 30));
        group_combox->setFont(font);

        verticalLayout_4->addWidget(group_combox);


        verticalLayout_3->addWidget(group_gbox);

        word_txt = new QLineEdit(search_tab);
        word_txt->setObjectName(QString::fromUtf8("word_txt"));
        word_txt->setMinimumSize(QSize(0, 30));
        word_txt->setFont(font);
        word_txt->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(word_txt);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        by_gbox = new QGroupBox(search_tab);
        by_gbox->setObjectName(QString::fromUtf8("by_gbox"));
        by_gbox->setFont(font);
        verticalLayout_5 = new QVBoxLayout(by_gbox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        name_rbtn = new QRadioButton(by_gbox);
        name_rbtn->setObjectName(QString::fromUtf8("name_rbtn"));
        name_rbtn->setMinimumSize(QSize(0, 30));
        name_rbtn->setFont(font);
        name_rbtn->setCursor(QCursor(Qt::PointingHandCursor));
        name_rbtn->setChecked(true);

        verticalLayout_5->addWidget(name_rbtn);

        company_rbtn = new QRadioButton(by_gbox);
        company_rbtn->setObjectName(QString::fromUtf8("company_rbtn"));
        company_rbtn->setMinimumSize(QSize(0, 30));
        company_rbtn->setFont(font);
        company_rbtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(company_rbtn);

        group_rbtn = new QRadioButton(by_gbox);
        group_rbtn->setObjectName(QString::fromUtf8("group_rbtn"));
        group_rbtn->setMinimumSize(QSize(0, 30));
        group_rbtn->setFont(font);
        group_rbtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(group_rbtn);

        price_rbtn = new QRadioButton(by_gbox);
        price_rbtn->setObjectName(QString::fromUtf8("price_rbtn"));
        price_rbtn->setMinimumSize(QSize(0, 30));
        price_rbtn->setFont(font);
        price_rbtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(price_rbtn);

        remain_rbtn = new QRadioButton(by_gbox);
        remain_rbtn->setObjectName(QString::fromUtf8("remain_rbtn"));
        remain_rbtn->setMinimumSize(QSize(0, 30));
        remain_rbtn->setFont(font);
        remain_rbtn->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_5->addWidget(remain_rbtn);


        verticalLayout_3->addWidget(by_gbox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tool_tab->addTab(search_tab, QString());
        tool_tab_2 = new QWidget();
        tool_tab_2->setObjectName(QString::fromUtf8("tool_tab_2"));
        verticalLayout_7 = new QVBoxLayout(tool_tab_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        name_panel = new QHBoxLayout();
        name_panel->setObjectName(QString::fromUtf8("name_panel"));
        name_panel->setContentsMargins(-1, 6, 0, 6);
        name_lbl = new QLabel(tool_tab_2);
        name_lbl->setObjectName(QString::fromUtf8("name_lbl"));
        name_lbl->setMinimumSize(QSize(0, 30));
        name_lbl->setFont(font);

        name_panel->addWidget(name_lbl);

        name_txt = new QLineEdit(tool_tab_2);
        name_txt->setObjectName(QString::fromUtf8("name_txt"));
        name_txt->setMinimumSize(QSize(0, 30));
        name_txt->setMaximumSize(QSize(306, 16777215));
        name_txt->setAlignment(Qt::AlignCenter);

        name_panel->addWidget(name_txt);


        verticalLayout_7->addLayout(name_panel);

        company_panel = new QHBoxLayout();
        company_panel->setObjectName(QString::fromUtf8("company_panel"));
        company_panel->setContentsMargins(-1, 6, -1, 6);
        company_lbl = new QLabel(tool_tab_2);
        company_lbl->setObjectName(QString::fromUtf8("company_lbl"));
        company_lbl->setMinimumSize(QSize(0, 30));
        company_lbl->setFont(font);

        company_panel->addWidget(company_lbl);

        company_txt = new QLineEdit(tool_tab_2);
        company_txt->setObjectName(QString::fromUtf8("company_txt"));
        company_txt->setMinimumSize(QSize(0, 30));
        company_txt->setMaximumSize(QSize(306, 16777215));
        company_txt->setAlignment(Qt::AlignCenter);

        company_panel->addWidget(company_txt);


        verticalLayout_7->addLayout(company_panel);

        group_panel = new QHBoxLayout();
        group_panel->setObjectName(QString::fromUtf8("group_panel"));
        group_panel->setContentsMargins(-1, 6, -1, 6);
        group_lbl = new QLabel(tool_tab_2);
        group_lbl->setObjectName(QString::fromUtf8("group_lbl"));
        group_lbl->setMinimumSize(QSize(0, 30));
        group_lbl->setFont(font);

        group_panel->addWidget(group_lbl);

        group_txt = new QLineEdit(tool_tab_2);
        group_txt->setObjectName(QString::fromUtf8("group_txt"));
        group_txt->setMinimumSize(QSize(0, 30));
        group_txt->setMaximumSize(QSize(306, 16777215));
        group_txt->setAlignment(Qt::AlignCenter);

        group_panel->addWidget(group_txt);


        verticalLayout_7->addLayout(group_panel);

        price_panel = new QHBoxLayout();
        price_panel->setObjectName(QString::fromUtf8("price_panel"));
        price_panel->setContentsMargins(-1, 6, -1, 6);
        price_lbl = new QLabel(tool_tab_2);
        price_lbl->setObjectName(QString::fromUtf8("price_lbl"));
        price_lbl->setMinimumSize(QSize(0, 30));
        price_lbl->setFont(font);

        price_panel->addWidget(price_lbl);

        price_txt = new QLineEdit(tool_tab_2);
        price_txt->setObjectName(QString::fromUtf8("price_txt"));
        price_txt->setMinimumSize(QSize(0, 30));
        price_txt->setMaximumSize(QSize(306, 16777215));
        price_txt->setLocale(QLocale(QLocale::Persian, QLocale::Iran));
        price_txt->setFrame(true);
        price_txt->setAlignment(Qt::AlignCenter);
        price_txt->setClearButtonEnabled(false);

        price_panel->addWidget(price_txt);


        verticalLayout_7->addLayout(price_panel);

        remain_panel = new QHBoxLayout();
        remain_panel->setObjectName(QString::fromUtf8("remain_panel"));
        remain_panel->setContentsMargins(-1, 6, -1, 6);
        remain_lbl = new QLabel(tool_tab_2);
        remain_lbl->setObjectName(QString::fromUtf8("remain_lbl"));
        remain_lbl->setMinimumSize(QSize(0, 30));
        remain_lbl->setFont(font);

        remain_panel->addWidget(remain_lbl);

        remain_txt = new QLineEdit(tool_tab_2);
        remain_txt->setObjectName(QString::fromUtf8("remain_txt"));
        remain_txt->setMinimumSize(QSize(0, 30));
        remain_txt->setMaximumSize(QSize(306, 16777215));
        remain_txt->setAlignment(Qt::AlignCenter);

        remain_panel->addWidget(remain_txt);


        verticalLayout_7->addLayout(remain_panel);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        insert_btn = new QPushButton(tool_tab_2);
        insert_btn->setObjectName(QString::fromUtf8("insert_btn"));
        insert_btn->setMinimumSize(QSize(0, 30));
        insert_btn->setFont(font);
        insert_btn->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(insert_btn, 0, 0, 1, 1);

        edit_btn = new QPushButton(tool_tab_2);
        edit_btn->setObjectName(QString::fromUtf8("edit_btn"));
        edit_btn->setMinimumSize(QSize(0, 30));
        edit_btn->setFont(font);
        edit_btn->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(edit_btn, 0, 1, 1, 1);

        delete_btn = new QPushButton(tool_tab_2);
        delete_btn->setObjectName(QString::fromUtf8("delete_btn"));
        delete_btn->setMinimumSize(QSize(0, 30));
        delete_btn->setFont(font);
        delete_btn->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(delete_btn, 1, 0, 1, 2);


        verticalLayout_7->addLayout(gridLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        tool_tab->addTab(tool_tab_2, QString());

        horizontalLayout_2->addWidget(tool_tab);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        product_table = new QTableWidget(product_tab);
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
        product_table->setFont(font);
        product_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        product_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        product_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        product_table->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(product_table);


        horizontalLayout_2->addLayout(verticalLayout_2);

        main_tab->addTab(product_tab, QString());
        user_tab = new QWidget();
        user_tab->setObjectName(QString::fromUtf8("user_tab"));
        horizontalLayout_7 = new QHBoxLayout(user_tab);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        report_gbox = new QGroupBox(user_tab);
        report_gbox->setObjectName(QString::fromUtf8("report_gbox"));
        report_gbox->setFont(font);
        verticalLayout_8 = new QVBoxLayout(report_gbox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        report_txt = new QTextEdit(report_gbox);
        report_txt->setObjectName(QString::fromUtf8("report_txt"));
        report_txt->setEnabled(true);
        report_txt->setFont(font);
        report_txt->setFrameShadow(QFrame::Sunken);
        report_txt->setLineWidth(1);
        report_txt->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_8->addWidget(report_txt);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 0);
        report_btn = new QPushButton(report_gbox);
        report_btn->setObjectName(QString::fromUtf8("report_btn"));
        report_btn->setMinimumSize(QSize(0, 30));
        report_btn->setFont(font);
        report_btn->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(report_btn, 0, 0, 1, 1);

        save_btn = new QPushButton(report_gbox);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));
        save_btn->setMinimumSize(QSize(0, 30));
        save_btn->setFont(font);
        save_btn->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_2->addWidget(save_btn, 0, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_2);


        horizontalLayout_7->addWidget(report_gbox);

        user_gbox = new QGroupBox(user_tab);
        user_gbox->setObjectName(QString::fromUtf8("user_gbox"));
        user_gbox->setFont(font);
        verticalLayout_6 = new QVBoxLayout(user_gbox);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        user_table = new QTableWidget(user_gbox);
        if (user_table->columnCount() < 2)
            user_table->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        user_table->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        user_table->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        user_table->setObjectName(QString::fromUtf8("user_table"));
        user_table->setFont(font);
        user_table->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        user_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        user_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        user_table->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(user_table);


        horizontalLayout_7->addWidget(user_gbox);

        main_tab->addTab(user_tab, QString());

        _2->addWidget(main_tab);


        verticalLayout->addWidget(main_panel);


        retranslateUi(admin_page);
        QObject::connect(name_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));
        QObject::connect(company_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));
        QObject::connect(group_rbtn, SIGNAL(clicked()), group_gbox, SLOT(hide()));
        QObject::connect(price_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));
        QObject::connect(remain_rbtn, SIGNAL(clicked()), group_gbox, SLOT(show()));

        main_tab->setCurrentIndex(0);
        tool_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(admin_page);
    } // setupUi

    void retranslateUi(QWidget *admin_page)
    {
        admin_page->setWindowTitle(QApplication::translate("admin_page", "Admin Page", nullptr));
        date_lbl->setText(QApplication::translate("admin_page", "1400/04/04  16:54", nullptr));
#ifndef QT_NO_TOOLTIP
        minimize_btn->setToolTip(QApplication::translate("admin_page", "Minimize", nullptr));
#endif // QT_NO_TOOLTIP
        minimize_btn->setText(QString());
#ifndef QT_NO_TOOLTIP
        close_btn->setToolTip(QApplication::translate("admin_page", "Close", nullptr));
#endif // QT_NO_TOOLTIP
        close_btn->setText(QString());
        group_gbox->setTitle(QApplication::translate("admin_page", "Group", nullptr));
#ifndef QT_NO_TOOLTIP
        group_combox->setToolTip(QApplication::translate("admin_page", "Click to Show Spesific Group", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        word_txt->setToolTip(QApplication::translate("admin_page", "Enter the Word for Search", nullptr));
#endif // QT_NO_TOOLTIP
        word_txt->setPlaceholderText(QApplication::translate("admin_page", "Word for Search", nullptr));
        by_gbox->setTitle(QApplication::translate("admin_page", "By", nullptr));
        name_rbtn->setText(QApplication::translate("admin_page", "Name", nullptr));
        company_rbtn->setText(QApplication::translate("admin_page", "Company", nullptr));
        group_rbtn->setText(QApplication::translate("admin_page", "Group", nullptr));
        price_rbtn->setText(QApplication::translate("admin_page", "Price", nullptr));
        remain_rbtn->setText(QApplication::translate("admin_page", "Remain", nullptr));
        tool_tab->setTabText(tool_tab->indexOf(search_tab), QApplication::translate("admin_page", "Search", nullptr));
        name_lbl->setText(QApplication::translate("admin_page", "Name :", nullptr));
        company_lbl->setText(QApplication::translate("admin_page", "Company :", nullptr));
        group_lbl->setText(QApplication::translate("admin_page", "Group :", nullptr));
        price_lbl->setText(QApplication::translate("admin_page", "Price :", nullptr));
        price_txt->setInputMask(QString());
        price_txt->setText(QString());
        remain_lbl->setText(QApplication::translate("admin_page", "Remain :", nullptr));
#ifndef QT_NO_TOOLTIP
        insert_btn->setToolTip(QApplication::translate("admin_page", "Click to Insert Product", nullptr));
#endif // QT_NO_TOOLTIP
        insert_btn->setText(QApplication::translate("admin_page", "Insert", nullptr));
#ifndef QT_NO_TOOLTIP
        edit_btn->setToolTip(QApplication::translate("admin_page", "Click to Edit Product", nullptr));
#endif // QT_NO_TOOLTIP
        edit_btn->setText(QApplication::translate("admin_page", "Edit", nullptr));
#ifndef QT_NO_TOOLTIP
        delete_btn->setToolTip(QApplication::translate("admin_page", "Click to Delete Product", nullptr));
#endif // QT_NO_TOOLTIP
        delete_btn->setText(QApplication::translate("admin_page", "Delete", nullptr));
        tool_tab->setTabText(tool_tab->indexOf(tool_tab_2), QApplication::translate("admin_page", "Edit/Delete/Insert", nullptr));
        QTableWidgetItem *___qtablewidgetitem = product_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admin_page", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = product_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admin_page", "Company", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = product_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admin_page", "Group", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = product_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("admin_page", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = product_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("admin_page", "Remain", nullptr));
#ifndef QT_NO_TOOLTIP
        product_table->setToolTip(QApplication::translate("admin_page", "Double-Click to Fill Lined Edits", nullptr));
#endif // QT_NO_TOOLTIP
        main_tab->setTabText(main_tab->indexOf(product_tab), QApplication::translate("admin_page", "Products", nullptr));
        report_gbox->setTitle(QApplication::translate("admin_page", "Daily Report", nullptr));
#ifndef QT_NO_TOOLTIP
        report_btn->setToolTip(QApplication::translate("admin_page", "Click to Finish the Day and Show Report", nullptr));
#endif // QT_NO_TOOLTIP
        report_btn->setText(QApplication::translate("admin_page", "End of the Day", nullptr));
#ifndef QT_NO_TOOLTIP
        save_btn->setToolTip(QApplication::translate("admin_page", "Click to Save the Report", nullptr));
#endif // QT_NO_TOOLTIP
        save_btn->setText(QApplication::translate("admin_page", "Save", nullptr));
        user_gbox->setTitle(QApplication::translate("admin_page", "Store Users", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = user_table->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("admin_page", "Username", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = user_table->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("admin_page", "Credit", nullptr));
#ifndef QT_NO_TOOLTIP
        user_table->setToolTip(QApplication::translate("admin_page", "Double-Click to Remove User", nullptr));
#endif // QT_NO_TOOLTIP
        main_tab->setTabText(main_tab->indexOf(user_tab), QApplication::translate("admin_page", "User/ Reports", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_page: public Ui_admin_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
