/****************************************************************************
** Meta object code from reading C++ file 'tarea2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TareasParcialII/tarea2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tarea2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tarea2_t {
    QByteArrayData data[6];
    char stringdata[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tarea2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tarea2_t qt_meta_stringdata_Tarea2 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Tarea2"
QT_MOC_LITERAL(1, 7, 21), // "on_BtnAgregar_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "on_BtnInsertar_clicked"
QT_MOC_LITERAL(4, 53, 22), // "on_BtnImprimir_clicked"
QT_MOC_LITERAL(5, 76, 22) // "on_BtnEliminar_clicked"

    },
    "Tarea2\0on_BtnAgregar_clicked\0\0"
    "on_BtnInsertar_clicked\0on_BtnImprimir_clicked\0"
    "on_BtnEliminar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tarea2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tarea2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tarea2 *_t = static_cast<Tarea2 *>(_o);
        switch (_id) {
        case 0: _t->on_BtnAgregar_clicked(); break;
        case 1: _t->on_BtnInsertar_clicked(); break;
        case 2: _t->on_BtnImprimir_clicked(); break;
        case 3: _t->on_BtnEliminar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Tarea2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Tarea2.data,
      qt_meta_data_Tarea2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tarea2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tarea2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tarea2.stringdata))
        return static_cast<void*>(const_cast< Tarea2*>(this));
    return QDialog::qt_metacast(_clname);
}

int Tarea2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
