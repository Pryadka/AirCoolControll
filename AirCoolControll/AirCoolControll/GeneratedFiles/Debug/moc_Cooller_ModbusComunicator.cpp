/****************************************************************************
** Meta object code from reading C++ file 'Cooller_ModbusComunicator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Cooller_ModbusComunicator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Cooller_ModbusComunicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cooller_ModbusComunicator_t {
    QByteArrayData data[10];
    char stringdata[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cooller_ModbusComunicator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cooller_ModbusComunicator_t qt_meta_stringdata_Cooller_ModbusComunicator = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Cooller_ModbusComunicator"
QT_MOC_LITERAL(1, 26, 11), // "updateState"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 8), // "newSpeed"
QT_MOC_LITERAL(4, 48, 7), // "newPort"
QT_MOC_LITERAL(5, 56, 9), // "newDevice"
QT_MOC_LITERAL(6, 66, 18), // "communicationError"
QT_MOC_LITERAL(7, 85, 28), // "QSerialPort::SerialPortError"
QT_MOC_LITERAL(8, 114, 17), // "sendConfiguration"
QT_MOC_LITERAL(9, 132, 20) // "externalStateChanged"

    },
    "Cooller_ModbusComunicator\0updateState\0"
    "\0newSpeed\0newPort\0newDevice\0"
    "communicationError\0QSerialPort::SerialPortError\0"
    "sendConfiguration\0externalStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cooller_ModbusComunicator[] = {

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
       3,    1,   50,    2, 0x08 /* Private */,
       4,    1,   53,    2, 0x08 /* Private */,
       5,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Cooller_ModbusComunicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cooller_ModbusComunicator *_t = static_cast<Cooller_ModbusComunicator *>(_o);
        switch (_id) {
        case 0: _t->updateState(); break;
        case 1: _t->newSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->newPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->newDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->communicationError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        case 5: _t->sendConfiguration(); break;
        case 6: _t->externalStateChanged(); break;
        default: ;
        }
    }
}

const QMetaObject Cooller_ModbusComunicator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cooller_ModbusComunicator.data,
      qt_meta_data_Cooller_ModbusComunicator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Cooller_ModbusComunicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cooller_ModbusComunicator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Cooller_ModbusComunicator.stringdata))
        return static_cast<void*>(const_cast< Cooller_ModbusComunicator*>(this));
    return QObject::qt_metacast(_clname);
}

int Cooller_ModbusComunicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
