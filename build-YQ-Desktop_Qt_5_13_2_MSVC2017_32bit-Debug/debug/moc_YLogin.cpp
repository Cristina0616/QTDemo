/****************************************************************************
** Meta object code from reading C++ file 'YLogin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../YQ/YLogin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'YLogin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_YLogin_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_YLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_YLogin_t qt_meta_stringdata_YLogin = {
    {
QT_MOC_LITERAL(0, 0, 6), // "YLogin"
QT_MOC_LITERAL(1, 7, 17), // "Slots_CloseWindow"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "Slots_LoginQQ"
QT_MOC_LITERAL(4, 40, 21), // "Slots_MinsizeProgress"
QT_MOC_LITERAL(5, 62, 16), // "Slots_ShowNormal"
QT_MOC_LITERAL(6, 79, 13), // "Slots_TrayMsg"
QT_MOC_LITERAL(7, 93, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(8, 127, 6), // "reason"
QT_MOC_LITERAL(9, 134, 14) // "Slots_HideTips"

    },
    "YLogin\0Slots_CloseWindow\0\0Slots_LoginQQ\0"
    "Slots_MinsizeProgress\0Slots_ShowNormal\0"
    "Slots_TrayMsg\0QSystemTrayIcon::ActivationReason\0"
    "reason\0Slots_HideTips"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_YLogin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void YLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<YLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Slots_CloseWindow(); break;
        case 1: _t->Slots_LoginQQ(); break;
        case 2: _t->Slots_MinsizeProgress(); break;
        case 3: _t->Slots_ShowNormal(); break;
        case 4: _t->Slots_TrayMsg((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 5: _t->Slots_HideTips(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject YLogin::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_YLogin.data,
    qt_meta_data_YLogin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *YLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *YLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_YLogin.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int YLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
