/****************************************************************************
** Meta object code from reading C++ file 'structCalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/structCalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'structCalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_structCalculator_t {
    QByteArrayData data[10];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_structCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_structCalculator_t qt_meta_stringdata_structCalculator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "structCalculator"
QT_MOC_LITERAL(1, 17, 8), // "sendText"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "text"
QT_MOC_LITERAL(4, 32, 17), // "switchDisplayType"
QT_MOC_LITERAL(5, 50, 8), // "bChecked"
QT_MOC_LITERAL(6, 59, 20), // "btnSelectTypePressed"
QT_MOC_LITERAL(7, 80, 16), // "btnNumPadPressed"
QT_MOC_LITERAL(8, 97, 8), // "btnClear"
QT_MOC_LITERAL(9, 106, 8) // "btnEnter"

    },
    "structCalculator\0sendText\0\0text\0"
    "switchDisplayType\0bChecked\0"
    "btnSelectTypePressed\0btnNumPadPressed\0"
    "btnClear\0btnEnter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_structCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void structCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        structCalculator *_t = static_cast<structCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->switchDisplayType((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->btnSelectTypePressed(); break;
        case 3: _t->btnNumPadPressed(); break;
        case 4: _t->btnClear(); break;
        case 5: _t->btnEnter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (structCalculator::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&structCalculator::sendText)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject structCalculator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_structCalculator.data,
      qt_meta_data_structCalculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *structCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *structCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_structCalculator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int structCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void structCalculator::sendText(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
