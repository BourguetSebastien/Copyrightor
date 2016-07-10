/****************************************************************************
** Meta object code from reading C++ file 'selectionview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../selectionview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectionview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SelectionView_t {
    QByteArrayData data[8];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectionView_t qt_meta_stringdata_SelectionView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SelectionView"
QT_MOC_LITERAL(1, 14, 8), // "dragFile"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "url"
QT_MOC_LITERAL(4, 28, 8), // "dragCopy"
QT_MOC_LITERAL(5, 37, 10), // "chooseFile"
QT_MOC_LITERAL(6, 48, 11), // "chooseFiles"
QT_MOC_LITERAL(7, 60, 15) // "chooseOutputDir"

    },
    "SelectionView\0dragFile\0\0url\0dragCopy\0"
    "chooseFile\0chooseFiles\0chooseOutputDir"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectionView[] = {

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
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    0,   45,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SelectionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectionView *_t = static_cast<SelectionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dragFile((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->dragCopy((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 2: _t->chooseFile(); break;
        case 3: _t->chooseFiles(); break;
        case 4: _t->chooseOutputDir(); break;
        default: ;
        }
    }
}

const QMetaObject SelectionView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SelectionView.data,
      qt_meta_data_SelectionView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SelectionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectionView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SelectionView.stringdata0))
        return static_cast<void*>(const_cast< SelectionView*>(this));
    return QWidget::qt_metacast(_clname);
}

int SelectionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
