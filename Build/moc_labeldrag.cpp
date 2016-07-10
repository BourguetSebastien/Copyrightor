/****************************************************************************
** Meta object code from reading C++ file 'labeldrag.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../labeldrag.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labeldrag.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LabelDrag_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LabelDrag_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LabelDrag_t qt_meta_stringdata_LabelDrag = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LabelDrag"
QT_MOC_LITERAL(1, 10, 10), // "dropEvtUrl"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "url"
QT_MOC_LITERAL(4, 26, 14), // "dragEnterEvent"
QT_MOC_LITERAL(5, 41, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(6, 58, 5), // "event"
QT_MOC_LITERAL(7, 64, 9), // "dropEvent"
QT_MOC_LITERAL(8, 74, 11) // "QDropEvent*"

    },
    "LabelDrag\0dropEvtUrl\0\0url\0dragEnterEvent\0"
    "QDragEnterEvent*\0event\0dropEvent\0"
    "QDropEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LabelDrag[] = {

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
       4,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    6,

       0        // eod
};

void LabelDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LabelDrag *_t = static_cast<LabelDrag *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dropEvtUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 2: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LabelDrag::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LabelDrag::dropEvtUrl)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LabelDrag::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_LabelDrag.data,
      qt_meta_data_LabelDrag,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LabelDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LabelDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LabelDrag.stringdata0))
        return static_cast<void*>(const_cast< LabelDrag*>(this));
    return QLabel::qt_metacast(_clname);
}

int LabelDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void LabelDrag::dropEvtUrl(QUrl _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
