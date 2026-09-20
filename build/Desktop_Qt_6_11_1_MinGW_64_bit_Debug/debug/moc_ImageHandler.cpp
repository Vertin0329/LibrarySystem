/****************************************************************************
** Meta object code from reading C++ file 'ImageHandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QZXing/ImageHandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ImageHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12ImageHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto ImageHandler::qt_create_metaobjectdata<qt_meta_tag_ZN12ImageHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ImageHandler",
        "save",
        "",
        "imageObj",
        "path",
        "offsetX",
        "offsetY",
        "width",
        "height"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'save'
        QtMocHelpers::SlotData<void(QObject *, const QString &, const int, const int, const int, const int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 3 }, { QMetaType::QString, 4 }, { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void(QObject *, const QString &, const int, const int, const int)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QObjectStar, 3 }, { QMetaType::QString, 4 }, { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
            { QMetaType::Int, 7 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void(QObject *, const QString &, const int, const int)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QObjectStar, 3 }, { QMetaType::QString, 4 }, { QMetaType::Int, 5 }, { QMetaType::Int, 6 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void(QObject *, const QString &, const int)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QObjectStar, 3 }, { QMetaType::QString, 4 }, { QMetaType::Int, 5 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void(QObject *, const QString &)>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QObjectStar, 3 }, { QMetaType::QString, 4 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ImageHandler, qt_meta_tag_ZN12ImageHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ImageHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ImageHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ImageHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12ImageHandlerE_t>.metaTypes,
    nullptr
} };

void ImageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ImageHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->save((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[6]))); break;
        case 1: _t->save((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[5]))); break;
        case 2: _t->save((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[4]))); break;
        case 3: _t->save((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->save((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ImageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12ImageHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ImageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
