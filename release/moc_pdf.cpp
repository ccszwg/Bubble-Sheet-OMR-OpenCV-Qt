/****************************************************************************
** Meta object code from reading C++ file 'pdf.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pdf.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pdf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_pdf_t {
    QByteArrayData data[12];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_pdf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_pdf_t qt_meta_stringdata_pdf = {
    {
QT_MOC_LITERAL(0, 0, 3), // "pdf"
QT_MOC_LITERAL(1, 4, 16), // "failedConverting"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 17), // "startedConverting"
QT_MOC_LITERAL(4, 40, 15), // "progressUpdated"
QT_MOC_LITERAL(5, 56, 4), // "perc"
QT_MOC_LITERAL(6, 61, 14), // "newlyConverted"
QT_MOC_LITERAL(7, 76, 11), // "std::string"
QT_MOC_LITERAL(8, 88, 16), // "convertedImgName"
QT_MOC_LITERAL(9, 105, 18), // "finishedConverting"
QT_MOC_LITERAL(10, 124, 8), // "timeTook"
QT_MOC_LITERAL(11, 133, 13) // "ConvertToImgs"

    },
    "pdf\0failedConverting\0\0startedConverting\0"
    "progressUpdated\0perc\0newlyConverted\0"
    "std::string\0convertedImgName\0"
    "finishedConverting\0timeTook\0ConvertToImgs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_pdf[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       9,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::LongLong,   10,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void pdf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        pdf *_t = static_cast<pdf *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->failedConverting(); break;
        case 1: _t->startedConverting(); break;
        case 2: _t->progressUpdated((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->newlyConverted((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: _t->finishedConverting((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->ConvertToImgs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (pdf::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pdf::failedConverting)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (pdf::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pdf::startedConverting)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (pdf::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pdf::progressUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (pdf::*)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pdf::newlyConverted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (pdf::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&pdf::finishedConverting)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject pdf::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_pdf.data,
      qt_meta_data_pdf,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *pdf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pdf::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pdf.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int pdf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void pdf::failedConverting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void pdf::startedConverting()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void pdf::progressUpdated(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void pdf::newlyConverted(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void pdf::finishedConverting(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
