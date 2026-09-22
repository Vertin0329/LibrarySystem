QT += widgets sql network core gui

CONFIG += c++20

include(QZXing/QZXing.pri)

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountverifydialog.cpp \
    addnewdialog.cpp \
    bookborrowconfirmdialog.cpp \
    bookrenewdialog.cpp \
    bookreturndialog.cpp \
    bookwindow_librarian.cpp \
    bookwindow_student.cpp \
    deletebookdialog.cpp \
    filterbookforlibrariandialog.cpp \
    filterdialog.cpp \
    filterlogforuserdialog.cpp \
    filteruserforlibrariandialog.cpp \
    logoutconfirmdialog.cpp \
    main.cpp \
    loginwindow.cpp \
    qrcodegenerator.cpp

HEADERS += \
    accountverifydialog.h \
    addnewdialog.h \
    bookborrowconfirmdialog.h \
    bookrenewdialog.h \
    bookreturndialog.h \
    bookwindow_librarian.h \
    bookwindow_student.h \
    deletebookdialog.h \
    filterbookforlibrariandialog.h \
    filterdialog.h \
    filterlogforuserdialog.h \
    filteruserforlibrariandialog.h \
    loginwindow.h \
    logoutconfirmdialog.h \
    qrcodegenerator.h

FORMS += \
    accountverifydialog.ui \
    addnewdialog.ui \
    bookborrowconfirmdialog.ui \
    bookrenewdialog.ui \
    bookreturndialog.ui \
    bookwindow_librarian.ui \
    bookwindow_student.ui \
    deletebookdialog.ui \
    filterbookforlibrariandialog.ui \
    filterdialog.ui \
    filterlogforuserdialog.ui \
    filteruserforlibrariandialog.ui \
    loginwindow.ui \
    logoutconfirmdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
