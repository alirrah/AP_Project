/********************************************************************************
** Form generated from reading UI file 'admin_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_PAGE_H
#define UI_ADMIN_PAGE_H

#include <QtCore/QVariant>
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
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QLineEdit *lineEdit_11;
    QSpacerItem *verticalSpacer_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
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
        admin_page->resize(1023, 631);
        verticalLayout = new QVBoxLayout(admin_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        top_panel = new QFrame(admin_page);
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

        horizontalLayout->addWidget(minimize_btn);

        close_btn = new QPushButton(top_panel);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        sizePolicy.setHeightForWidth(close_btn->sizePolicy().hasHeightForWidth());
        close_btn->setSizePolicy(sizePolicy);
        close_btn->setMinimumSize(QSize(40, 40));
        close_btn->setFont(font);
        close_btn->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(close_btn);


        verticalLayout->addWidget(top_panel);

        main_tab = new QTabWidget(admin_page);
        main_tab->setObjectName(QString::fromUtf8("main_tab"));
        main_tab->setFont(font);
        main_tab->setTabPosition(QTabWidget::West);
        product_tab = new QWidget();
        product_tab->setObjectName(QString::fromUtf8("product_tab"));
        horizontalLayout_2 = new QHBoxLayout(product_tab);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tool_tab = new QTabWidget(product_tab);
        tool_tab->setObjectName(QString::fromUtf8("tool_tab"));
        tool_tab->setMaximumSize(QSize(400, 16777215));
        search_tab = new QWidget();
        search_tab->setObjectName(QString::fromUtf8("search_tab"));
        verticalLayout_3 = new QVBoxLayout(search_tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        group_gbox = new QGroupBox(search_tab);
        group_gbox->setObjectName(QString::fromUtf8("group_gbox"));
        verticalLayout_4 = new QVBoxLayout(group_gbox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        group_combox = new QComboBox(group_gbox);
        group_combox->setObjectName(QString::fromUtf8("group_combox"));
        group_combox->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(group_combox);


        verticalLayout_3->addWidget(group_gbox);

        word_txt = new QLineEdit(search_tab);
        word_txt->setObjectName(QString::fromUtf8("word_txt"));
        word_txt->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(word_txt);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        by_gbox = new QGroupBox(search_tab);
        by_gbox->setObjectName(QString::fromUtf8("by_gbox"));
        verticalLayout_5 = new QVBoxLayout(by_gbox);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        name_rbtn = new QRadioButton(by_gbox);
        name_rbtn->setObjectName(QString::fromUtf8("name_rbtn"));
        name_rbtn->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(name_rbtn);

        company_rbtn = new QRadioButton(by_gbox);
        company_rbtn->setObjectName(QString::fromUtf8("company_rbtn"));
        company_rbtn->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(company_rbtn);

        group_rbtn = new QRadioButton(by_gbox);
        group_rbtn->setObjectName(QString::fromUtf8("group_rbtn"));
        group_rbtn->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(group_rbtn);

        price_rbtn = new QRadioButton(by_gbox);
        price_rbtn->setObjectName(QString::fromUtf8("price_rbtn"));
        price_rbtn->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(price_rbtn);

        remain_rbtn = new QRadioButton(by_gbox);
        remain_rbtn->setObjectName(QString::fromUtf8("remain_rbtn"));
        remain_rbtn->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(remain_rbtn);


        verticalLayout_3->addWidget(by_gbox);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        tool_tab->addTab(search_tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_7 = new QVBoxLayout(tab_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 6, 0, 6);
        label_2 = new QLabel(tab_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(tab_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));
        lineEdit_2->setMaximumSize(QSize(306, 16777215));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 6, -1, 6);
        label_3 = new QLabel(tab_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(label_3);

        lineEdit_3 = new QLineEdit(tab_5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 30));
        lineEdit_3->setMaximumSize(QSize(306, 16777215));

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 6, -1, 6);
        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_4 = new QLineEdit(tab_5);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 30));
        lineEdit_4->setMaximumSize(QSize(306, 16777215));

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 6, -1, 6);
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_5 = new QLineEdit(tab_5);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(0, 30));
        lineEdit_5->setMaximumSize(QSize(306, 16777215));

        horizontalLayout_6->addWidget(lineEdit_5);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 6, -1, 6);
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(0, 30));

        horizontalLayout_12->addWidget(label_10);

        lineEdit_11 = new QLineEdit(tab_5);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(0, 30));
        lineEdit_11->setMaximumSize(QSize(306, 16777215));

        horizontalLayout_12->addWidget(lineEdit_11);


        verticalLayout_7->addLayout(horizontalLayout_12);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(tab_5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(tab_5);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(pushButton_5, 1, 0, 1, 2);


        verticalLayout_7->addLayout(gridLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);

        tool_tab->addTab(tab_5, QString());

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
        product_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
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
        verticalLayout_8 = new QVBoxLayout(report_gbox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        report_txt = new QTextEdit(report_gbox);
        report_txt->setObjectName(QString::fromUtf8("report_txt"));
        report_txt->setEnabled(true);
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

        gridLayout_2->addWidget(report_btn, 0, 0, 1, 1);

        save_btn = new QPushButton(report_gbox);
        save_btn->setObjectName(QString::fromUtf8("save_btn"));
        save_btn->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(save_btn, 0, 1, 1, 1);


        verticalLayout_8->addLayout(gridLayout_2);


        horizontalLayout_7->addWidget(report_gbox);

        user_gbox = new QGroupBox(user_tab);
        user_gbox->setObjectName(QString::fromUtf8("user_gbox"));
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
        user_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        user_table->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_6->addWidget(user_table);


        horizontalLayout_7->addWidget(user_gbox);

        main_tab->addTab(user_tab, QString());

        verticalLayout->addWidget(main_tab);


        retranslateUi(admin_page);

        main_tab->setCurrentIndex(1);
        tool_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(admin_page);
    } // setupUi

    void retranslateUi(QWidget *admin_page)
    {
        admin_page->setWindowTitle(QApplication::translate("admin_page", "Form", nullptr));
        date_lbl->setText(QApplication::translate("admin_page", "TextLabel", nullptr));
        minimize_btn->setText(QString());
        close_btn->setText(QString());
        group_gbox->setTitle(QApplication::translate("admin_page", "Group", nullptr));
        by_gbox->setTitle(QApplication::translate("admin_page", "By", nullptr));
        name_rbtn->setText(QApplication::translate("admin_page", "Name", nullptr));
        company_rbtn->setText(QApplication::translate("admin_page", "Company", nullptr));
        group_rbtn->setText(QApplication::translate("admin_page", "Group", nullptr));
        price_rbtn->setText(QApplication::translate("admin_page", "Price", nullptr));
        remain_rbtn->setText(QApplication::translate("admin_page", "Remain", nullptr));
        tool_tab->setTabText(tool_tab->indexOf(search_tab), QApplication::translate("admin_page", "Search", nullptr));
        label_2->setText(QApplication::translate("admin_page", "Name :", nullptr));
        label_3->setText(QApplication::translate("admin_page", "Company :", nullptr));
        label_4->setText(QApplication::translate("admin_page", "Group :", nullptr));
        label_5->setText(QApplication::translate("admin_page", "Price :", nullptr));
        label_10->setText(QApplication::translate("admin_page", "Remain :", nullptr));
        pushButton_3->setText(QApplication::translate("admin_page", "Insert", nullptr));
        pushButton_4->setText(QApplication::translate("admin_page", "Edit", nullptr));
        pushButton_5->setText(QApplication::translate("admin_page", "Delete", nullptr));
        tool_tab->setTabText(tool_tab->indexOf(tab_5), QApplication::translate("admin_page", "Edit/Delete/Insert", nullptr));
        QTableWidgetItem *___qtablewidgetitem = product_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("admin_page", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = product_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("admin_page", "Company", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = product_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("admin_page", "Group", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = product_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("admin_page", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = product_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("admin_page", "Remain", nullptr));
        main_tab->setTabText(main_tab->indexOf(product_tab), QApplication::translate("admin_page", "Products", nullptr));
        report_gbox->setTitle(QApplication::translate("admin_page", "Daily Report", nullptr));
        report_btn->setText(QApplication::translate("admin_page", "End of the Day", nullptr));
        save_btn->setText(QApplication::translate("admin_page", "Save", nullptr));
        user_gbox->setTitle(QApplication::translate("admin_page", "Store Users", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = user_table->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("admin_page", "Username", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = user_table->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("admin_page", "Credit", nullptr));
        main_tab->setTabText(main_tab->indexOf(user_tab), QApplication::translate("admin_page", "User/ Reports", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_page: public Ui_admin_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
