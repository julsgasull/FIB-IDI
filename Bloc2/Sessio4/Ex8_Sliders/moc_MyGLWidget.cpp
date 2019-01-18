/****************************************************************************
** Meta object code from reading C++ file 'MyGLWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MyGLWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyGLWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyGLWidget_t {
    QByteArrayData data[25];
    char stringdata0[368];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyGLWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyGLWidget_t qt_meta_stringdata_MyGLWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MyGLWidget"
QT_MOC_LITERAL(1, 11, 15), // "setScaleChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 23), // "setEulerAngleChangedPsi"
QT_MOC_LITERAL(4, 52, 25), // "setEulerAngleChangedTheta"
QT_MOC_LITERAL(5, 78, 19), // "setRangeSliderWidth"
QT_MOC_LITERAL(6, 98, 20), // "setRangeSliderHeight"
QT_MOC_LITERAL(7, 119, 17), // "setWidthInitValue"
QT_MOC_LITERAL(8, 137, 18), // "setHeightInitValue"
QT_MOC_LITERAL(9, 156, 9), // "changeFOV"
QT_MOC_LITERAL(10, 166, 11), // "changeScale"
QT_MOC_LITERAL(11, 178, 9), // "changePsi"
QT_MOC_LITERAL(12, 188, 11), // "changeTheta"
QT_MOC_LITERAL(13, 200, 12), // "paintLegoman"
QT_MOC_LITERAL(14, 213, 13), // "paintPatricio"
QT_MOC_LITERAL(15, 227, 13), // "setOrthogonal"
QT_MOC_LITERAL(16, 241, 14), // "setPerspective"
QT_MOC_LITERAL(17, 256, 14), // "changeRedFloor"
QT_MOC_LITERAL(18, 271, 16), // "changeGreenFloor"
QT_MOC_LITERAL(19, 288, 15), // "changeBlueFloor"
QT_MOC_LITERAL(20, 304, 13), // "changeRedBack"
QT_MOC_LITERAL(21, 318, 15), // "changeGreenBack"
QT_MOC_LITERAL(22, 334, 14), // "changeBlueBack"
QT_MOC_LITERAL(23, 349, 8), // "setWidth"
QT_MOC_LITERAL(24, 358, 9) // "setHeight"

    },
    "MyGLWidget\0setScaleChanged\0\0"
    "setEulerAngleChangedPsi\0"
    "setEulerAngleChangedTheta\0setRangeSliderWidth\0"
    "setRangeSliderHeight\0setWidthInitValue\0"
    "setHeightInitValue\0changeFOV\0changeScale\0"
    "changePsi\0changeTheta\0paintLegoman\0"
    "paintPatricio\0setOrthogonal\0setPerspective\0"
    "changeRedFloor\0changeGreenFloor\0"
    "changeBlueFloor\0changeRedBack\0"
    "changeGreenBack\0changeBlueBack\0setWidth\0"
    "setHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyGLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       3,    1,  132,    2, 0x06 /* Public */,
       4,    1,  135,    2, 0x06 /* Public */,
       5,    2,  138,    2, 0x06 /* Public */,
       6,    2,  143,    2, 0x06 /* Public */,
       7,    1,  148,    2, 0x06 /* Public */,
       8,    1,  151,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  154,    2, 0x0a /* Public */,
      10,    1,  157,    2, 0x0a /* Public */,
      11,    1,  160,    2, 0x0a /* Public */,
      12,    1,  163,    2, 0x0a /* Public */,
      13,    0,  166,    2, 0x0a /* Public */,
      14,    0,  167,    2, 0x0a /* Public */,
      15,    0,  168,    2, 0x0a /* Public */,
      16,    0,  169,    2, 0x0a /* Public */,
      17,    1,  170,    2, 0x0a /* Public */,
      18,    1,  173,    2, 0x0a /* Public */,
      19,    1,  176,    2, 0x0a /* Public */,
      20,    1,  179,    2, 0x0a /* Public */,
      21,    1,  182,    2, 0x0a /* Public */,
      22,    1,  185,    2, 0x0a /* Public */,
      23,    1,  188,    2, 0x0a /* Public */,
      24,    1,  191,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MyGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyGLWidget *_t = static_cast<MyGLWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setScaleChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setEulerAngleChangedPsi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setEulerAngleChangedTheta((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRangeSliderWidth((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->setRangeSliderHeight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setWidthInitValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setHeightInitValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changeFOV((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changeScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->changePsi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->changeTheta((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->paintLegoman(); break;
        case 12: _t->paintPatricio(); break;
        case 13: _t->setOrthogonal(); break;
        case 14: _t->setPerspective(); break;
        case 15: _t->changeRedFloor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->changeGreenFloor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->changeBlueFloor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->changeRedBack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->changeGreenBack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->changeBlueBack((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->setHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyGLWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyGLWidget::setScaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyGLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyGLWidget::setEulerAngleChangedPsi)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyGLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyGLWidget::setEulerAngleChangedTheta)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyGLWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyGLWidget::setRangeSliderWidth)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MyGLWidget::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyGLWidget::setRangeSliderHeight)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MyGLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyGLWidget::setWidthInitValue)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MyGLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyGLWidget::setHeightInitValue)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject MyGLWidget::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_MyGLWidget.data,
      qt_meta_data_MyGLWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyGLWidget.stringdata0))
        return static_cast<void*>(const_cast< MyGLWidget*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions_3_3_Core"))
        return static_cast< QOpenGLFunctions_3_3_Core*>(const_cast< MyGLWidget*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int MyGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void MyGLWidget::setScaleChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyGLWidget::setEulerAngleChangedPsi(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyGLWidget::setEulerAngleChangedTheta(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyGLWidget::setRangeSliderWidth(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyGLWidget::setRangeSliderHeight(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyGLWidget::setWidthInitValue(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MyGLWidget::setHeightInitValue(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
