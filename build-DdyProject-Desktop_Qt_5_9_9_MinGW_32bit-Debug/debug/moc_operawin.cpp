/****************************************************************************
** Meta object code from reading C++ file 'operawin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DdyProject/operawin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'operawin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OperaWin_t {
    QByteArrayData data[10];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OperaWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OperaWin_t qt_meta_stringdata_OperaWin = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OperaWin"
QT_MOC_LITERAL(1, 9, 19), // "on_ReturnBt_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "on_ShoudongBt_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_AutoTest_clicked"
QT_MOC_LITERAL(5, 72, 16), // "on_ClrBt_clicked"
QT_MOC_LITERAL(6, 89, 21), // "on_KongB_Test_clicked"
QT_MOC_LITERAL(7, 111, 16), // "on_CfgBt_clicked"
QT_MOC_LITERAL(8, 128, 23), // "on_AllOperaData_clicked"
QT_MOC_LITERAL(9, 152, 21) // "on_UserInfoOp_clicked"

    },
    "OperaWin\0on_ReturnBt_clicked\0\0"
    "on_ShoudongBt_clicked\0on_AutoTest_clicked\0"
    "on_ClrBt_clicked\0on_KongB_Test_clicked\0"
    "on_CfgBt_clicked\0on_AllOperaData_clicked\0"
    "on_UserInfoOp_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OperaWin[] = {

 // content:
       7,       // revision
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
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void OperaWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OperaWin *_t = static_cast<OperaWin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ReturnBt_clicked(); break;
        case 1: _t->on_ShoudongBt_clicked(); break;
        case 2: _t->on_AutoTest_clicked(); break;
        case 3: _t->on_ClrBt_clicked(); break;
        case 4: _t->on_KongB_Test_clicked(); break;
        case 5: _t->on_CfgBt_clicked(); break;
        case 6: _t->on_AllOperaData_clicked(); break;
        case 7: _t->on_UserInfoOp_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OperaWin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_OperaWin.data,
      qt_meta_data_OperaWin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OperaWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OperaWin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OperaWin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int OperaWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
