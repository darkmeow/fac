/****************************************************************************
** Meta object code from reading C++ file 'LoginPassword.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LoginPassword.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginPassword.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginPassword_t {
    QByteArrayData data[17];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LoginPassword_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LoginPassword_t qt_meta_stringdata_LoginPassword = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 5),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 12),
QT_MOC_LITERAL(4, 34, 11),
QT_MOC_LITERAL(5, 46, 8),
QT_MOC_LITERAL(6, 55, 6),
QT_MOC_LITERAL(7, 62, 6),
QT_MOC_LITERAL(8, 69, 6),
QT_MOC_LITERAL(9, 76, 6),
QT_MOC_LITERAL(10, 83, 6),
QT_MOC_LITERAL(11, 90, 6),
QT_MOC_LITERAL(12, 97, 6),
QT_MOC_LITERAL(13, 104, 6),
QT_MOC_LITERAL(14, 111, 6),
QT_MOC_LITERAL(15, 118, 5),
QT_MOC_LITERAL(16, 124, 3)
    },
    "LoginPassword\0login\0\0validateUser\0"
    "badPassword\0validate\0press1\0press2\0"
    "press3\0press4\0press5\0press6\0press7\0"
    "press8\0press9\0clear\0del\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginPassword[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06,
       3,    1,   90,    2, 0x06,
       4,    0,   93,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   94,    2, 0x0a,
       6,    0,   95,    2, 0x0a,
       7,    0,   96,    2, 0x0a,
       8,    0,   97,    2, 0x0a,
       9,    0,   98,    2, 0x0a,
      10,    0,   99,    2, 0x0a,
      11,    0,  100,    2, 0x0a,
      12,    0,  101,    2, 0x0a,
      13,    0,  102,    2, 0x0a,
      14,    0,  103,    2, 0x0a,
      15,    0,  104,    2, 0x0a,
      16,    0,  105,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void LoginPassword::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginPassword *_t = static_cast<LoginPassword *>(_o);
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->validateUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->badPassword(); break;
        case 3: _t->validate(); break;
        case 4: _t->press1(); break;
        case 5: _t->press2(); break;
        case 6: _t->press3(); break;
        case 7: _t->press4(); break;
        case 8: _t->press5(); break;
        case 9: _t->press6(); break;
        case 10: _t->press7(); break;
        case 11: _t->press8(); break;
        case 12: _t->press9(); break;
        case 13: _t->clear(); break;
        case 14: _t->del(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginPassword::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginPassword::login)) {
                *result = 0;
            }
        }
        {
            typedef void (LoginPassword::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginPassword::validateUser)) {
                *result = 1;
            }
        }
        {
            typedef void (LoginPassword::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginPassword::badPassword)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject LoginPassword::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LoginPassword.data,
      qt_meta_data_LoginPassword,  qt_static_metacall, 0, 0}
};


const QMetaObject *LoginPassword::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginPassword::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginPassword.stringdata))
        return static_cast<void*>(const_cast< LoginPassword*>(this));
    return QObject::qt_metacast(_clname);
}

int LoginPassword::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LoginPassword::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void LoginPassword::validateUser(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LoginPassword::badPassword()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
