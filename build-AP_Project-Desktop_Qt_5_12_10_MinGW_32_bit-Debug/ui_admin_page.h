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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin_page
{
public:

    void setupUi(QWidget *admin_page)
    {
        if (admin_page->objectName().isEmpty())
            admin_page->setObjectName(QString::fromUtf8("admin_page"));
        admin_page->resize(400, 300);

        retranslateUi(admin_page);

        QMetaObject::connectSlotsByName(admin_page);
    } // setupUi

    void retranslateUi(QWidget *admin_page)
    {
        admin_page->setWindowTitle(QApplication::translate("admin_page", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin_page: public Ui_admin_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_PAGE_H
