/****************************************************************************
** Meta object code from reading C++ file 'test7z.h'
**
** Created: Fri Jun 12 10:11:03 2020
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test7z.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test7z.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_test7z[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      30,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_test7z[] = {
    "test7z\0\0on_compress_clicked()\0"
    "on_decompress_clicked()\0"
};

const QMetaObject test7z::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_test7z,
      qt_meta_data_test7z, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &test7z::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *test7z::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *test7z::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_test7z))
        return static_cast<void*>(const_cast< test7z*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int test7z::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_compress_clicked(); break;
        case 1: on_decompress_clicked(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
