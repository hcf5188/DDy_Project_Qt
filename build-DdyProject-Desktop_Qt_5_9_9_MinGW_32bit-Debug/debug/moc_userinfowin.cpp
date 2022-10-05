/****************************************************************************
** Meta object code from reading C++ file 'userinfowin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DdyProject/userinfowin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userinfowin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_userinfoWin_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_userinfoWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_userinfoWin_t qt_meta_stringdata_userinfoWin = {
    {
QT_MOC_LITERAL(0, 0, 11), // "userinfoWin"
QT_MOC_LITERAL(1, 12, 15), // "RefreshUserInfo"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_returnBack_clicked"
QT_MOC_LITERAL(4, 51, 18), // "on_DelUser_clicked"
QT_MOC_LITERAL(5, 70, 20), // "on_updatePsw_clicked"
QT_MOC_LITERAL(6, 91, 14), // "on_New_clicked"
QT_MOC_LITERAL(7, 106, 10), // "AddNewUser"
QT_MOC_LITERAL(8, 117, 8), // "username"
QT_MOC_LITERAL(9, 126, 4), // "psw1"
QT_MOC_LITERAL(10, 131, 4) // "psw2"

    },
    "userinfoWin\0RefreshUserInfo\0\0"
    "on_returnBack_clicked\0on_DelUser_clicked\0"
    "on_updatePsw_clicked\0on_New_clicked\0"
    "AddNewUser\0username\0psw1\0psw2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userinfoWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    3,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,

       0        // eod
};

void userinfoWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        userinfoWin *_t = static_cast<userinfoWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RefreshUserInfo(); break;
        case 1: _t->on_returnBack_clicked(); break;
        case 2: _t->on_DelUser_clicked(); break;
        case 3: _t->on_updatePsw_clicked(); break;
        case 4: _t->on_New_clicked(); break;
        case 5: _t->AddNewUser((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject userinfoWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_userinfoWin.data,
      qt_meta_data_userinfoWin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *userinfoWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userinfoWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userinfoWin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int userinfoWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
