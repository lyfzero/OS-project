/****************************************************************************
** Meta object code from reading C++ file 'searchdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../process-monitor-master/searchdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchDialog_t {
    QByteArrayData data[12];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchDialog_t qt_meta_stringdata_SearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchDialog"
QT_MOC_LITERAL(1, 13, 7), // "sendPid"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "pid"
QT_MOC_LITERAL(4, 26, 11), // "sendCommand"
QT_MOC_LITERAL(5, 38, 11), // "std::string"
QT_MOC_LITERAL(6, 50, 7), // "command"
QT_MOC_LITERAL(7, 58, 11), // "closeSignal"
QT_MOC_LITERAL(8, 70, 27), // "on_pidConfirmButton_clicked"
QT_MOC_LITERAL(9, 98, 26), // "on_pidCancelButton_clicked"
QT_MOC_LITERAL(10, 125, 31), // "on_commandConfirmButton_clicked"
QT_MOC_LITERAL(11, 157, 30) // "on_commandCancelButton_clicked"

    },
    "SearchDialog\0sendPid\0\0pid\0sendCommand\0"
    "std::string\0command\0closeSignal\0"
    "on_pidConfirmButton_clicked\0"
    "on_pidCancelButton_clicked\0"
    "on_commandConfirmButton_clicked\0"
    "on_commandCancelButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       7,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchDialog *_t = static_cast<SearchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendCommand((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 2: _t->closeSignal(); break;
        case 3: _t->on_pidConfirmButton_clicked(); break;
        case 4: _t->on_pidCancelButton_clicked(); break;
        case 5: _t->on_commandConfirmButton_clicked(); break;
        case 6: _t->on_commandCancelButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SearchDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchDialog::sendPid)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SearchDialog::*_t)(const std::string );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchDialog::sendCommand)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SearchDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SearchDialog::closeSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SearchDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchDialog.data,
      qt_meta_data_SearchDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog.stringdata0))
        return static_cast<void*>(const_cast< SearchDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SearchDialog::sendPid(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchDialog::sendCommand(const std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchDialog::closeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
