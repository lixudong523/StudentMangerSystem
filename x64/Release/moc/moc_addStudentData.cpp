/****************************************************************************
** Meta object code from reading C++ file 'addStudentData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../addStudentData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addStudentData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addStudentData_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addStudentData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addStudentData_t qt_meta_stringdata_addStudentData = {
    {
QT_MOC_LITERAL(0, 0, 14), // "addStudentData"
QT_MOC_LITERAL(1, 15, 7), // "okFinsh"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "tempdata"
QT_MOC_LITERAL(4, 33, 9), // "clickedOK"
QT_MOC_LITERAL(5, 43, 12) // "clickedCance"

    },
    "addStudentData\0okFinsh\0\0tempdata\0"
    "clickedOK\0clickedCance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addStudentData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addStudentData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addStudentData *_t = static_cast<addStudentData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->okFinsh((*reinterpret_cast< tempdata(*)>(_a[1]))); break;
        case 1: _t->clickedOK(); break;
        case 2: _t->clickedCance(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (addStudentData::*_t)(tempdata );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&addStudentData::okFinsh)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject addStudentData::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_addStudentData.data,
      qt_meta_data_addStudentData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *addStudentData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addStudentData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addStudentData.stringdata0))
        return static_cast<void*>(const_cast< addStudentData*>(this));
    return QDialog::qt_metacast(_clname);
}

int addStudentData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void addStudentData::okFinsh(tempdata _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
