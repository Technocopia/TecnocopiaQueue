/****************************************************************************
** Meta object code from reading C++ file 'OnlineDocumentation.h'
**
** Created: Thu Apr 18 22:17:03 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../free-cad/src/Gui/OnlineDocumentation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OnlineDocumentation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Gui__OnlineDocumentation[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Gui__OnlineDocumentation[] = {
    "Gui::OnlineDocumentation\0"
};

void Gui::OnlineDocumentation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::OnlineDocumentation::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::OnlineDocumentation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gui__OnlineDocumentation,
      qt_meta_data_Gui__OnlineDocumentation, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::OnlineDocumentation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::OnlineDocumentation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::OnlineDocumentation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__OnlineDocumentation))
        return static_cast<void*>(const_cast< OnlineDocumentation*>(this));
    return QObject::qt_metacast(_clname);
}

int Gui::OnlineDocumentation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__PythonOnlineHelp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Gui__PythonOnlineHelp[] = {
    "Gui::PythonOnlineHelp\0"
};

void Gui::PythonOnlineHelp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::PythonOnlineHelp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::PythonOnlineHelp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Gui__PythonOnlineHelp,
      qt_meta_data_Gui__PythonOnlineHelp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::PythonOnlineHelp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::PythonOnlineHelp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::PythonOnlineHelp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PythonOnlineHelp))
        return static_cast<void*>(const_cast< PythonOnlineHelp*>(this));
    return QObject::qt_metacast(_clname);
}

int Gui::PythonOnlineHelp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Gui__HttpServer[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      30,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Gui__HttpServer[] = {
    "Gui::HttpServer\0\0readClient()\0"
    "discardClient()\0"
};

void Gui::HttpServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HttpServer *_t = static_cast<HttpServer *>(_o);
        switch (_id) {
        case 0: _t->readClient(); break;
        case 1: _t->discardClient(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Gui::HttpServer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Gui::HttpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_Gui__HttpServer,
      qt_meta_data_Gui__HttpServer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Gui::HttpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Gui::HttpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Gui::HttpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__HttpServer))
        return static_cast<void*>(const_cast< HttpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int Gui::HttpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE