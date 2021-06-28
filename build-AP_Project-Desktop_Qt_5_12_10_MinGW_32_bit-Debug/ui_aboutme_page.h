/********************************************************************************
** Form generated from reading UI file 'aboutme_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTME_PAGE_H
#define UI_ABOUTME_PAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutme_page
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *top_panel;
    QHBoxLayout *horizontalLayout;
    QLabel *aboutme_lbl;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_btn;
    QSpacerItem *verticalSpacer;
    QFrame *main_panel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *image;
    QVBoxLayout *tell_panel;
    QLabel *lbl1;
    QLabel *lbl2;
    QLabel *lbl3;
    QLabel *lbl4;
    QLabel *lbl5;
    QLabel *lbl6;
    QLabel *lbl7;
    QLabel *lbl8;
    QLabel *lbl9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *button_panel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ok_btn;

    void setupUi(QWidget *aboutme_page)
    {
        if (aboutme_page->objectName().isEmpty())
            aboutme_page->setObjectName(QString::fromUtf8("aboutme_page"));
        aboutme_page->resize(617, 446);
        QFont font;
        font.setPointSize(12);
        aboutme_page->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/About.ico"), QSize(), QIcon::Normal, QIcon::Off);
        aboutme_page->setWindowIcon(icon);
        aboutme_page->setStyleSheet(QString::fromUtf8("#top_panel\n"
"{\n"
"	 background-color: qlineargradient(spread:reflect, x1:0.5, y1:0, x2:0, y2:0, stop:0 rgba(91, 204, 233, 200), stop:1 rgba(32, 80, 96, 150));\n"
" }\n"
"#lbl1, #lbl2, #lbl3, #lbl3, #lbl4, #lbl5, #lbl6, #lbl7, #lbl8, #lbl9, #aboutme_lbl\n"
"{\n"
" 	color: white;\n"
" }\n"
"#centralwidget \n"
"{\n"
"	border-image :url(:/image/blurred-background-supermarket-aisle-with-products_62890-121.jpg);\n"
" }\n"
"#ok_btn, #close_btn\n"
"{\n"
"  	color: white;\n"
"  	background-color: #45ada8;\n"
"  	border-width: 0px;\n"
"  	border-radius: 3px;\n"
"}\n"
"#ok_btn:hover\n"
"{\n"
" 	background-color: #547980;\n"
" }\n"
" #close_btn:hover\n"
"{\n"
"	 background-color: rgb(158, 0, 0);\n"
"}\n"
"#main_panel\n"
"{\n"
"  	background: rgba(0, 0, 0, 0.5);\n"
"  	border-radius: 8px;\n"
"}\n"
"#image\n"
"{\n"
"	border-radius : 8px;\n"
"}\n"
"#aboutme_page\n"
"{\n"
"	background-color : rgb(190, 190, 190)\n"
"}"));
        verticalLayout = new QVBoxLayout(aboutme_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        top_panel = new QFrame(aboutme_page);
        top_panel->setObjectName(QString::fromUtf8("top_panel"));
        horizontalLayout = new QHBoxLayout(top_panel);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        aboutme_lbl = new QLabel(top_panel);
        aboutme_lbl->setObjectName(QString::fromUtf8("aboutme_lbl"));
        aboutme_lbl->setFont(font);

        horizontalLayout->addWidget(aboutme_lbl);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_btn = new QPushButton(top_panel);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setMinimumSize(QSize(40, 40));
        close_btn->setMaximumSize(QSize(40, 40));
        close_btn->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon1);
        close_btn->setIconSize(QSize(35, 35));

        horizontalLayout->addWidget(close_btn);


        verticalLayout->addWidget(top_panel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        main_panel = new QFrame(aboutme_page);
        main_panel->setObjectName(QString::fromUtf8("main_panel"));
        horizontalLayout_3 = new QHBoxLayout(main_panel);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 9, -1, -1);
        image = new QLabel(main_panel);
        image->setObjectName(QString::fromUtf8("image"));
        image->setMinimumSize(QSize(285, 250));
        image->setMaximumSize(QSize(285, 250));
        image->setPixmap(QPixmap(QString::fromUtf8(":/image/156677927.jpg")));
        image->setScaledContents(true);

        horizontalLayout_3->addWidget(image);

        tell_panel = new QVBoxLayout();
        tell_panel->setObjectName(QString::fromUtf8("tell_panel"));
        tell_panel->setContentsMargins(6, 6, 6, 6);
        lbl1 = new QLabel(main_panel);
        lbl1->setObjectName(QString::fromUtf8("lbl1"));
        lbl1->setFont(font);

        tell_panel->addWidget(lbl1);

        lbl2 = new QLabel(main_panel);
        lbl2->setObjectName(QString::fromUtf8("lbl2"));
        lbl2->setFont(font);

        tell_panel->addWidget(lbl2);

        lbl3 = new QLabel(main_panel);
        lbl3->setObjectName(QString::fromUtf8("lbl3"));
        lbl3->setFont(font);

        tell_panel->addWidget(lbl3);

        lbl4 = new QLabel(main_panel);
        lbl4->setObjectName(QString::fromUtf8("lbl4"));
        lbl4->setFont(font);

        tell_panel->addWidget(lbl4);

        lbl5 = new QLabel(main_panel);
        lbl5->setObjectName(QString::fromUtf8("lbl5"));
        lbl5->setFont(font);

        tell_panel->addWidget(lbl5);

        lbl6 = new QLabel(main_panel);
        lbl6->setObjectName(QString::fromUtf8("lbl6"));
        lbl6->setFont(font);

        tell_panel->addWidget(lbl6);

        lbl7 = new QLabel(main_panel);
        lbl7->setObjectName(QString::fromUtf8("lbl7"));
        lbl7->setFont(font);

        tell_panel->addWidget(lbl7);

        lbl8 = new QLabel(main_panel);
        lbl8->setObjectName(QString::fromUtf8("lbl8"));
        lbl8->setFont(font);

        tell_panel->addWidget(lbl8);

        lbl9 = new QLabel(main_panel);
        lbl9->setObjectName(QString::fromUtf8("lbl9"));
        lbl9->setFont(font);

        tell_panel->addWidget(lbl9);


        horizontalLayout_3->addLayout(tell_panel);


        verticalLayout->addWidget(main_panel);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        button_panel = new QHBoxLayout();
        button_panel->setObjectName(QString::fromUtf8("button_panel"));
        button_panel->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        button_panel->addItem(horizontalSpacer_2);

        ok_btn = new QPushButton(aboutme_page);
        ok_btn->setObjectName(QString::fromUtf8("ok_btn"));
        ok_btn->setMinimumSize(QSize(80, 40));
        ok_btn->setMaximumSize(QSize(80, 40));
        ok_btn->setFont(font);
        ok_btn->setCursor(QCursor(Qt::PointingHandCursor));

        button_panel->addWidget(ok_btn);


        verticalLayout->addLayout(button_panel);


        retranslateUi(aboutme_page);

        QMetaObject::connectSlotsByName(aboutme_page);
    } // setupUi

    void retranslateUi(QWidget *aboutme_page)
    {
        aboutme_page->setWindowTitle(QApplication::translate("aboutme_page", "Form", nullptr));
        aboutme_lbl->setText(QApplication::translate("aboutme_page", "About Me", nullptr));
        close_btn->setText(QString());
        image->setText(QString());
        lbl1->setText(QApplication::translate("aboutme_page", "This app is a grocery store.", nullptr));
        lbl2->setText(QApplication::translate("aboutme_page", "Written by : Alireza Rahmani Samani", nullptr));
        lbl3->setText(QApplication::translate("aboutme_page", "Version : 1.1", nullptr));
        lbl4->setText(QApplication::translate("aboutme_page", "For : Advanced Programming", nullptr));
        lbl5->setText(QApplication::translate("aboutme_page", "Explanation :", nullptr));
        lbl6->setText(QApplication::translate("aboutme_page", "This program consists of two parts, the", nullptr));
        lbl7->setText(QApplication::translate("aboutme_page", " user and the admin, each of which is", nullptr));
        lbl8->setText(QApplication::translate("aboutme_page", " separate from the othe.", nullptr));
        lbl9->setText(QApplication::translate("aboutme_page", "Thanks for using this app.", nullptr));
        ok_btn->setText(QApplication::translate("aboutme_page", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutme_page: public Ui_aboutme_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTME_PAGE_H
