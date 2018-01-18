/****************************************************************************
** Meta object code from reading C++ file 'IHM_Serre.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "IHM_Serre.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IHM_Serre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IHM_Serre_t {
    QByteArrayData data[7];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IHM_Serre_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IHM_Serre_t qt_meta_stringdata_IHM_Serre = {
    {
QT_MOC_LITERAL(0, 0, 9), // "IHM_Serre"
QT_MOC_LITERAL(1, 10, 18), // "slotOuvrirOuvrants"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "slotFermerOuvrants"
QT_MOC_LITERAL(4, 49, 15), // "slotPulveInhibe"
QT_MOC_LITERAL(5, 65, 13), // "slotPulveAuto"
QT_MOC_LITERAL(6, 79, 11) // "mettreAJour"

    },
    "IHM_Serre\0slotOuvrirOuvrants\0\0"
    "slotFermerOuvrants\0slotPulveInhibe\0"
    "slotPulveAuto\0mettreAJour"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IHM_Serre[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IHM_Serre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IHM_Serre *_t = static_cast<IHM_Serre *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOuvrirOuvrants(); break;
        case 1: _t->slotFermerOuvrants(); break;
        case 2: _t->slotPulveInhibe(); break;
        case 3: _t->slotPulveAuto(); break;
        case 4: _t->mettreAJour(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject IHM_Serre::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IHM_Serre.data,
      qt_meta_data_IHM_Serre,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IHM_Serre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IHM_Serre::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IHM_Serre.stringdata0))
        return static_cast<void*>(const_cast< IHM_Serre*>(this));
    return QWidget::qt_metacast(_clname);
}

int IHM_Serre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
