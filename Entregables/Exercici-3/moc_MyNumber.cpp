/****************************************************************************
** Meta object code from reading C++ file 'MyNumber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyNumber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyNumber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyNumber_t {
    QByteArrayData data[17];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyNumber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyNumber_t qt_meta_stringdata_MyNumber = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyNumber"
QT_MOC_LITERAL(1, 9, 15), // "setResultSignal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "setResetSignal"
QT_MOC_LITERAL(4, 41, 21), // "setResetAbsolutSignal"
QT_MOC_LITERAL(5, 63, 14), // "acumularSignal"
QT_MOC_LITERAL(6, 78, 11), // "errorSignal"
QT_MOC_LITERAL(7, 90, 10), // "guardarOp1"
QT_MOC_LITERAL(8, 101, 10), // "guardarOp2"
QT_MOC_LITERAL(9, 112, 12), // "guardarOpSum"
QT_MOC_LITERAL(10, 125, 13), // "guardarOpRest"
QT_MOC_LITERAL(11, 139, 13), // "guardarOpMult"
QT_MOC_LITERAL(12, 153, 12), // "guardarOpDiv"
QT_MOC_LITERAL(13, 166, 6), // "setRes"
QT_MOC_LITERAL(14, 173, 10), // "setAbsolut"
QT_MOC_LITERAL(15, 184, 8), // "acumular"
QT_MOC_LITERAL(16, 193, 5) // "reset"

    },
    "MyNumber\0setResultSignal\0\0setResetSignal\0"
    "setResetAbsolutSignal\0acumularSignal\0"
    "errorSignal\0guardarOp1\0guardarOp2\0"
    "guardarOpSum\0guardarOpRest\0guardarOpMult\0"
    "guardarOpDiv\0setRes\0setAbsolut\0acumular\0"
    "reset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyNumber[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       4,    0,   95,    2, 0x06 /* Public */,
       5,    1,   96,    2, 0x06 /* Public */,
       6,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  102,    2, 0x0a /* Public */,
       8,    1,  105,    2, 0x0a /* Public */,
       9,    0,  108,    2, 0x0a /* Public */,
      10,    0,  109,    2, 0x0a /* Public */,
      11,    0,  110,    2, 0x0a /* Public */,
      12,    0,  111,    2, 0x0a /* Public */,
      13,    0,  112,    2, 0x0a /* Public */,
      14,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
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

void MyNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyNumber *_t = static_cast<MyNumber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setResultSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setResetSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setResetAbsolutSignal(); break;
        case 3: _t->acumularSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->errorSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->guardarOp1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->guardarOp2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->guardarOpSum(); break;
        case 8: _t->guardarOpRest(); break;
        case 9: _t->guardarOpMult(); break;
        case 10: _t->guardarOpDiv(); break;
        case 11: _t->setRes(); break;
        case 12: _t->setAbsolut(); break;
        case 13: _t->acumular(); break;
        case 14: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyNumber::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyNumber::setResultSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyNumber::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyNumber::setResetSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyNumber::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyNumber::setResetAbsolutSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyNumber::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyNumber::acumularSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MyNumber::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyNumber::errorSignal)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyNumber::staticMetaObject = {
    { &QLCDNumber::staticMetaObject, qt_meta_stringdata_MyNumber.data,
      qt_meta_data_MyNumber,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyNumber.stringdata0))
        return static_cast<void*>(this);
    return QLCDNumber::qt_metacast(_clname);
}

int MyNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLCDNumber::qt_metacall(_c, _id, _a);
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
void MyNumber::setResultSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyNumber::setResetSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyNumber::setResetAbsolutSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MyNumber::acumularSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyNumber::errorSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
