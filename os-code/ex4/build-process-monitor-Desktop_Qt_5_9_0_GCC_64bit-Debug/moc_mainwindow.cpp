/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../process-monitor-master/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "on_sectionClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 19), // "on_selectionChanged"
QT_MOC_LITERAL(5, 56, 14), // "QItemSelection"
QT_MOC_LITERAL(6, 71, 8), // "selected"
QT_MOC_LITERAL(7, 80, 10), // "deselected"
QT_MOC_LITERAL(8, 91, 21), // "on_killButton_clicked"
QT_MOC_LITERAL(9, 113, 21), // "on_niceButton_clicked"
QT_MOC_LITERAL(10, 135, 20), // "on_runButton_clicked"
QT_MOC_LITERAL(11, 156, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(12, 180, 25), // "on_shutdownButton_clicked"
QT_MOC_LITERAL(13, 206, 23), // "on_rebootButton_clicked"
QT_MOC_LITERAL(14, 230, 9), // "searchPid"
QT_MOC_LITERAL(15, 240, 3), // "pid"
QT_MOC_LITERAL(16, 244, 13), // "searchCommand"
QT_MOC_LITERAL(17, 258, 11), // "std::string"
QT_MOC_LITERAL(18, 270, 7), // "command"
QT_MOC_LITERAL(19, 278, 18), // "searchDialogClosed"
QT_MOC_LITERAL(20, 297, 13), // "keyPressEvent"
QT_MOC_LITERAL(21, 311, 10), // "QKeyEvent*"
QT_MOC_LITERAL(22, 322, 5) // "event"

    },
    "MainWindow\0on_sectionClicked\0\0index\0"
    "on_selectionChanged\0QItemSelection\0"
    "selected\0deselected\0on_killButton_clicked\0"
    "on_niceButton_clicked\0on_runButton_clicked\0"
    "on_searchButton_clicked\0"
    "on_shutdownButton_clicked\0"
    "on_rebootButton_clicked\0searchPid\0pid\0"
    "searchCommand\0std::string\0command\0"
    "searchDialogClosed\0keyPressEvent\0"
    "QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    2,   77,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    1,   88,    2, 0x08 /* Private */,
      16,    1,   91,    2, 0x08 /* Private */,
      19,    0,   94,    2, 0x08 /* Private */,
      20,    1,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_sectionClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 2: _t->on_killButton_clicked(); break;
        case 5: _t->on_searchButton_clicked(); break;
        case 6: _t->on_shutdownButton_clicked(); break;
        case 7: _t->on_rebootButton_clicked(); break;
        case 8: _t->searchPid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->searchCommand((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 10: _t->searchDialogClosed(); break;
        case 11: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
