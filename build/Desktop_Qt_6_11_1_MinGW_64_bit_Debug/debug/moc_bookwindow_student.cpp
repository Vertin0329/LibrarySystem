/****************************************************************************
** Meta object code from reading C++ file 'bookwindow_student.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bookwindow_student.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookwindow_student.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18BookWindow_StudentE_t {};
} // unnamed namespace

template <> constexpr inline auto BookWindow_Student::qt_create_metaobjectdata<qt_meta_tag_ZN18BookWindow_StudentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "BookWindow_Student",
        "on_pushButton_navtosearch_clicked",
        "",
        "on_pushButton_navtomain_clicked",
        "on_pushButton_navtoaboutus_clicked",
        "on_tableWidget_cellClicked",
        "row",
        "on_pushButton_toWeb_clicked",
        "on_pushButton_borrow_clicked",
        "on_pushButton_filter_clicked",
        "timeFunction",
        "on_pushButton_backToSearch_clicked",
        "on_pushButton_return_clicked",
        "on_pushButton_renew_clicked",
        "on_lineEdit_searchinput_returnPressed",
        "on_comboBox_searchby_currentIndexChanged",
        "index",
        "on_pushButton_EditProfile_clicked",
        "on_pushButton_ChangeConfig_clicked",
        "on_pushButton_LogOut_clicked",
        "on_pushButton_PreviousPage_clicked",
        "on_pushButton_NextPage_clicked",
        "on_pushButton_Reload_clicked",
        "on_tableWidget_Status_cellClicked",
        "column"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_pushButton_navtosearch_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_navtomain_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_navtoaboutus_clicked'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tableWidget_cellClicked'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'on_pushButton_toWeb_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_borrow_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_filter_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'timeFunction'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_backToSearch_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_return_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_renew_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_lineEdit_searchinput_returnPressed'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBox_searchby_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'on_pushButton_EditProfile_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_ChangeConfig_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_LogOut_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_PreviousPage_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_NextPage_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_Reload_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tableWidget_Status_cellClicked'
        QtMocHelpers::SlotData<void(int, int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::Int, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BookWindow_Student, qt_meta_tag_ZN18BookWindow_StudentE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject BookWindow_Student::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BookWindow_StudentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BookWindow_StudentE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18BookWindow_StudentE_t>.metaTypes,
    nullptr
} };

void BookWindow_Student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BookWindow_Student *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_pushButton_navtosearch_clicked(); break;
        case 1: _t->on_pushButton_navtomain_clicked(); break;
        case 2: _t->on_pushButton_navtoaboutus_clicked(); break;
        case 3: _t->on_tableWidget_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_pushButton_toWeb_clicked(); break;
        case 5: _t->on_pushButton_borrow_clicked(); break;
        case 6: _t->on_pushButton_filter_clicked(); break;
        case 7: _t->timeFunction(); break;
        case 8: _t->on_pushButton_backToSearch_clicked(); break;
        case 9: _t->on_pushButton_return_clicked(); break;
        case 10: _t->on_pushButton_renew_clicked(); break;
        case 11: _t->on_lineEdit_searchinput_returnPressed(); break;
        case 12: _t->on_comboBox_searchby_currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_pushButton_EditProfile_clicked(); break;
        case 14: _t->on_pushButton_ChangeConfig_clicked(); break;
        case 15: _t->on_pushButton_LogOut_clicked(); break;
        case 16: _t->on_pushButton_PreviousPage_clicked(); break;
        case 17: _t->on_pushButton_NextPage_clicked(); break;
        case 18: _t->on_pushButton_Reload_clicked(); break;
        case 19: _t->on_tableWidget_Status_cellClicked((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *BookWindow_Student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookWindow_Student::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18BookWindow_StudentE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BookWindow_Student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 20;
    }
    return _id;
}
QT_WARNING_POP
