/****************************************************************************
** Meta object code from reading C++ file 'teacherManger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../teacherManger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teacherManger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_teacherManger_t {
    QByteArrayData data[14];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_teacherManger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_teacherManger_t qt_meta_stringdata_teacherManger = {
    {
QT_MOC_LITERAL(0, 0, 13), // "teacherManger"
QT_MOC_LITERAL(1, 14, 7), // "addData"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "tempdata"
QT_MOC_LITERAL(4, 32, 6), // "m_data"
QT_MOC_LITERAL(5, 39, 10), // "deleteData"
QT_MOC_LITERAL(6, 50, 9), // "showDiget"
QT_MOC_LITERAL(7, 60, 16), // "showChangeDioget"
QT_MOC_LITERAL(8, 77, 10), // "changeData"
QT_MOC_LITERAL(9, 88, 13), // "tempSouredata"
QT_MOC_LITERAL(10, 102, 4), // "data"
QT_MOC_LITERAL(11, 107, 13), // "onItemClicked"
QT_MOC_LITERAL(12, 121, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(13, 139, 4) // "item"

    },
    "teacherManger\0addData\0\0tempdata\0m_data\0"
    "deleteData\0showDiget\0showChangeDioget\0"
    "changeData\0tempSouredata\0data\0"
    "onItemClicked\0QTableWidgetItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_teacherManger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x0a /* Public */,
      11,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void teacherManger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        teacherManger *_t = static_cast<teacherManger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addData((*reinterpret_cast< tempdata(*)>(_a[1]))); break;
        case 1: _t->deleteData(); break;
        case 2: _t->showDiget(); break;
        case 3: _t->showChangeDioget(); break;
        case 4: _t->changeData((*reinterpret_cast< tempSouredata(*)>(_a[1]))); break;
        case 5: _t->onItemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject teacherManger::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_teacherManger.data,
      qt_meta_data_teacherManger,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *teacherManger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *teacherManger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_teacherManger.stringdata0))
        return static_cast<void*>(const_cast< teacherManger*>(this));
    return QWidget::qt_metacast(_clname);
}

int teacherManger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
