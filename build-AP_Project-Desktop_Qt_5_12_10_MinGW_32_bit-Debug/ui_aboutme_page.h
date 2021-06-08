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
#include <QtWidgets/QApplication>
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
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QWidget *aboutme_page)
    {
        if (aboutme_page->objectName().isEmpty())
            aboutme_page->setObjectName(QString::fromUtf8("aboutme_page"));
        aboutme_page->resize(595, 439);
        QFont font;
        font.setPointSize(12);
        aboutme_page->setFont(font);
        verticalLayout = new QVBoxLayout(aboutme_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(aboutme_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(aboutme_page);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(40, 40));
        pushButton->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(aboutme_page);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        label_3 = new QLabel(aboutme_page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(aboutme_page);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(aboutme_page);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(aboutme_page);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(aboutme_page);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(aboutme_page);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_2->addWidget(label_8);

        label_10 = new QLabel(aboutme_page);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(aboutme_page);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_2->addWidget(label_11);

        label_9 = new QLabel(aboutme_page);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_2->addWidget(label_9);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(aboutme_page);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(80, 40));
        pushButton_2->setMaximumSize(QSize(80, 40));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(aboutme_page);

        QMetaObject::connectSlotsByName(aboutme_page);
    } // setupUi

    void retranslateUi(QWidget *aboutme_page)
    {
        aboutme_page->setWindowTitle(QApplication::translate("aboutme_page", "Form", nullptr));
        label->setText(QApplication::translate("aboutme_page", "About Me", nullptr));
        pushButton->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("aboutme_page", "This app is a grocery store.", nullptr));
        label_4->setText(QApplication::translate("aboutme_page", "Written by : Alireza Rahmani Samani", nullptr));
        label_5->setText(QApplication::translate("aboutme_page", "Version : 1.0", nullptr));
        label_6->setText(QApplication::translate("aboutme_page", "For : Advanced Programming", nullptr));
        label_7->setText(QApplication::translate("aboutme_page", "Explanation :", nullptr));
        label_8->setText(QApplication::translate("aboutme_page", "This program consists of two parts, the", nullptr));
        label_10->setText(QApplication::translate("aboutme_page", " user and the admin, each of which is", nullptr));
        label_11->setText(QApplication::translate("aboutme_page", " separate from the othe.", nullptr));
        label_9->setText(QApplication::translate("aboutme_page", "Thanks for using this app.", nullptr));
        pushButton_2->setText(QApplication::translate("aboutme_page", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutme_page: public Ui_aboutme_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTME_PAGE_H
