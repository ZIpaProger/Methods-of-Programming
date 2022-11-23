/****************************************************************************
** Meta object code from reading C++ file 'xando.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Xand0/xando.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xando.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XandO_t {
    QByteArrayData data[10];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XandO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XandO_t qt_meta_stringdata_XandO = {
    {
QT_MOC_LITERAL(0, 0, 5), // "XandO"
QT_MOC_LITERAL(1, 6, 12), // "on_X_clicked"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 12), // "on_O_clicked"
QT_MOC_LITERAL(4, 33, 24), // "on_X_O_windowIconChanged"
QT_MOC_LITERAL(5, 58, 4), // "icon"
QT_MOC_LITERAL(6, 63, 15), // "on_Play_clicked"
QT_MOC_LITERAL(7, 79, 23), // "onGameAreaButtonClicked"
QT_MOC_LITERAL(8, 103, 14), // "onComputerSlot"
QT_MOC_LITERAL(9, 118, 15) // "on_Info_clicked"

    },
    "XandO\0on_X_clicked\0\0on_O_clicked\0"
    "on_X_O_windowIconChanged\0icon\0"
    "on_Play_clicked\0onGameAreaButtonClicked\0"
    "onComputerSlot\0on_Info_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XandO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QIcon,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XandO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XandO *_t = static_cast<XandO *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_X_clicked(); break;
        case 1: _t->on_O_clicked(); break;
        case 2: _t->on_X_O_windowIconChanged((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 3: _t->on_Play_clicked(); break;
        case 4: _t->onGameAreaButtonClicked(); break;
        case 5: _t->onComputerSlot(); break;
        case 6: _t->on_Info_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject XandO::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_XandO.data,
      qt_meta_data_XandO,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *XandO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XandO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XandO.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int XandO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
