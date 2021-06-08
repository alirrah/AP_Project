/********************************************************************************
** Form generated from reading UI file 'user_page.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_PAGE_H
#define UI_USER_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_page
{
public:

    void setupUi(QWidget *user_page)
    {
        if (user_page->objectName().isEmpty())
            user_page->setObjectName(QString::fromUtf8("user_page"));
        user_page->resize(1005, 526);

        retranslateUi(user_page);

        QMetaObject::connectSlotsByName(user_page);
    } // setupUi

    void retranslateUi(QWidget *user_page)
    {
        user_page->setWindowTitle(QApplication::translate("user_page", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_page: public Ui_user_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_PAGE_H
