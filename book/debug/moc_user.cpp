/****************************************************************************
** Meta object code from reading C++ file 'user.h'
**
<<<<<<< HEAD
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
=======
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

<<<<<<< HEAD
#include "../cell/user.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
=======
#include <memory>
#include "../cell/user.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

<<<<<<< HEAD
#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSuserENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSuserENDCLASS = QtMocHelpers::stringData(
    "user"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSuserENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSuserENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSuserENDCLASS_t qt_meta_stringdata_CLASSuserENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4)   // "user"
=======
QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_t {
    QByteArrayData data[1];
    char stringdata0[5];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_t qt_meta_stringdata_user = {
    {
QT_MOC_LITERAL(0, 0, 4) // "user"

>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808
    },
    "user"
};
#undef QT_MOC_LITERAL
<<<<<<< HEAD
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSuserENDCLASS[] = {

 // content:
      12,       // revision
=======

static const uint qt_meta_data_user[] = {

 // content:
       8,       // revision
>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808
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

<<<<<<< HEAD
Q_CONSTINIT const QMetaObject user::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSuserENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSuserENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSuserENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<user, std::true_type>
    >,
    nullptr
} };

void user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
=======
void user::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject user::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_user.data,
    qt_meta_data_user,
    qt_static_metacall,
    nullptr,
    nullptr
} };

>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808

const QMetaObject *user::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
<<<<<<< HEAD
    if (!strcmp(_clname, qt_meta_stringdata_CLASSuserENDCLASS.stringdata0))
=======
    if (!strcmp(_clname, qt_meta_stringdata_user.stringdata0))
>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int user::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
<<<<<<< HEAD
=======
QT_END_MOC_NAMESPACE
>>>>>>> 5cad8d28bb783e651935dd6a6d410b0a9f5e7808
