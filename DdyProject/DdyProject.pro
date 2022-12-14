QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clearwin.cpp \
    configwin.cpp \
    detailinfowin.cpp \
    dialog_newuser.cpp \
    kongbai.cpp \
    main.cpp \
    ddylogin.cpp \
    operawin.cpp \
    shiyanwin.cpp \
    shoudong.cpp \
    userinfo.cpp \
    userinfowin.cpp

HEADERS += \
    clearwin.h \
    configwin.h \
    ddylogin.h \
    detailinfowin.h \
    dialog_newuser.h \
    kongbai.h \
    operawin.h \
    shiyanwin.h \
    shoudong.h \
    userinfo.h \
    userinfowin.h

FORMS += \
    clearwin.ui \
    configwin.ui \
    ddylogin.ui \
    detailinfowin.ui \
    dialog_newuser.ui \
    kongbai.ui \
    operawin.ui \
    shiyanwin.ui \
    shoudong.ui \
    userinfowin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
