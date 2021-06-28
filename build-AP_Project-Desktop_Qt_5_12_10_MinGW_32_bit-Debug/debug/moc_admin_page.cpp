/****************************************************************************
** Meta object code from reading C++ file 'admin_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AP_Project/admin_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_admin_page_t {
    QByteArrayData data[21];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_admin_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_admin_page_t qt_meta_stringdata_admin_page = {
    {
QT_MOC_LITERAL(0, 0, 10), // "admin_page"
QT_MOC_LITERAL(1, 11, 20), // "on_close_btn_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "on_minimize_btn_clicked"
QT_MOC_LITERAL(4, 57, 15), // "mousePressEvent"
QT_MOC_LITERAL(5, 73, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 86, 5), // "event"
QT_MOC_LITERAL(7, 92, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(8, 107, 8), // "showTime"
QT_MOC_LITERAL(9, 116, 6), // "search"
QT_MOC_LITERAL(10, 123, 34), // "on_product_table_cellDoubleCl..."
QT_MOC_LITERAL(11, 158, 3), // "row"
QT_MOC_LITERAL(12, 162, 6), // "column"
QT_MOC_LITERAL(13, 169, 21), // "on_delete_btn_clicked"
QT_MOC_LITERAL(14, 191, 19), // "on_edit_btn_clicked"
QT_MOC_LITERAL(15, 211, 15), // "clean_line_edit"
QT_MOC_LITERAL(16, 227, 21), // "on_insert_btn_clicked"
QT_MOC_LITERAL(17, 249, 21), // "on_report_btn_clicked"
QT_MOC_LITERAL(18, 271, 19), // "on_save_btn_clicked"
QT_MOC_LITERAL(19, 291, 16), // "set_group_combox"
QT_MOC_LITERAL(20, 308, 21) // "on_remove_btn_clicked"

    },
    "admin_page\0on_close_btn_clicked\0\0"
    "on_minimize_btn_clicked\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent\0"
    "showTime\0search\0on_product_table_cellDoubleClicked\0"
    "row\0column\0on_delete_btn_clicked\0"
    "on_edit_btn_clicked\0clean_line_edit\0"
    "on_insert_btn_clicked\0on_report_btn_clicked\0"
    "on_save_btn_clicked\0set_group_combox\0"
    "on_remove_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_admin_page[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
       8,    0,   97,    2, 0x08 /* Private */,
       9,    0,   98,    2, 0x08 /* Private */,
      10,    2,   99,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    0,  105,    2, 0x08 /* Private */,
      15,    0,  106,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void admin_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<admin_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_btn_clicked(); break;
        case 1: _t->on_minimize_btn_clicked(); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->showTime(); break;
        case 5: _t->search(); break;
        case 6: _t->on_product_table_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_delete_btn_clicked(); break;
        case 8: _t->on_edit_btn_clicked(); break;
        case 9: _t->clean_line_edit(); break;
        case 10: _t->on_insert_btn_clicked(); break;
        case 11: _t->on_report_btn_clicked(); break;
        case 12: _t->on_save_btn_clicked(); break;
        case 13: _t->set_group_combox(); break;
        case 14: _t->on_remove_btn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject admin_page::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_admin_page.data,
    qt_meta_data_admin_page,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *admin_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *admin_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_admin_page.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int admin_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
