/****************************************************************************
** Meta object code from reading C++ file 'DockWindow.h'
**
** Created: Thu Apr 18 07:04:53 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/DockWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__DockWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   17,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Gui__DockWindow[] = {
    "Gui::DockWindow\0\0theView\0"
    "sendCloseView(MDIView*)\0"
};

void Gui::DockWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DockWindow *_t = static_cast<DockWindow *>(_o);
        switch (_id) {
        case 0: _t->sendCloseView((*reinterpret_cast< MDIView*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Gui::DockWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::DockWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Gui__DockWindow,
      qt_meta_data_Gui__DockWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::DockWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::DockWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::DockWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__DockWindow))
        return static_cast<void*>(const_cast< DockWindow*>(this));
    if (!strcmp(_clname, "BaseView"))
        return static_cast< BaseView*>(const_cast< DockWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int Gui::DockWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Gui::DockWindow::sendCloseView(MDIView * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE