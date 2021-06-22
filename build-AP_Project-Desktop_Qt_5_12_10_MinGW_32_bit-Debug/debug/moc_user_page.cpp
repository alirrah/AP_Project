/****************************************************************************
** Meta object code from reading C++ file 'user_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AP_Project/user_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_page_t {
    QByteArrayData data[12];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_page_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_page_t qt_meta_stringdata_user_page = {
    {
QT_MOC_LITERAL(0, 0, 9), // "user_page"
QT_MOC_LITERAL(1, 10, 20), // "on_close_btn_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "on_minimize_btn_clicked"
QT_MOC_LITERAL(4, 56, 15), // "mousePressEvent"
QT_MOC_LITERAL(5, 72, 12), // "QMouseEvent*"
QT_MOC_LITERAL(6, 85, 5), // "event"
QT_MOC_LITERAL(7, 91, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(8, 106, 6), // "search"
QT_MOC_LITERAL(9, 113, 8), // "showTime"
QT_MOC_LITERAL(10, 122, 22), // "on_aboutme_btn_clicked"
QT_MOC_LITERAL(11, 145, 22) // "on_payment_btn_clicked"

    },
    "user_page\0on_close_btn_clicked\0\0"
    "on_minimize_btn_clicked\0mousePressEvent\0"
    "QMouseEvent*\0event\0mouseMoveEvent\0"
    "search\0showTime\0on_aboutme_btn_clicked\0"
    "on_payment_btn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_page[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void user_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<user_page *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_btn_clicked(); break;
        case 1: _t->on_minimize_btn_clicked(); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->search(); break;
        case 5: _t->showTime(); break;
        case 6: _t->on_aboutme_btn_clicked(); break;
        case 7: _t->on_payment_btn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject user_page::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_user_page.data,
    qt_meta_data_user_page,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *user_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user_page.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int user_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
