/****************************************************************************
** Meta object code from reading C++ file 'plotter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plotter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Plotter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      28,    8,    8,    8, 0x08,
      41,    8,    8,    8, 0x08,
      49,    8,    8,    8, 0x08,
      67,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Plotter[] = {
    "Plotter\0\0updatedSlider(int)\0updatePlot()\0"
    "toCSV()\0vboxClicked(bool)\0fboxClicked(bool)\0"
};

void Plotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Plotter *_t = static_cast<Plotter *>(_o);
        switch (_id) {
        case 0: _t->updatedSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updatePlot(); break;
        case 2: _t->toCSV(); break;
        case 3: _t->vboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->fboxClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Plotter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Plotter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Plotter,
      qt_meta_data_Plotter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Plotter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Plotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Plotter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Plotter))
        return static_cast<void*>(const_cast< Plotter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Plotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
