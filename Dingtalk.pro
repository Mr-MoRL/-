######################################################################
# Automatically generated by qmake (3.1) Fri Apr 10 13:39:22 2020
######################################################################

TEMPLATE = app
TARGET = Dingtalk
INCLUDEPATH += .

# Input
HEADERS += alinum.h \
           forgetpass.h \
           mainwindow.h \
           network.h \
           newuser.h \
           refreshcircle.h \
           titlebar.h \
           titlebar1.h \
           ui_alinum.h \
           ui_forgetpass.h \
           ui_mainwindow.h \
           ui_mainwindow1.h \
           ui_network.h \
           ui_newuser.h \
           ui_titlebar.h \
           ui_titlebar1.h \
    refreshcircle1.h \
    logincircling.h \
    ui_logincircleing.h \
    alilogincircling.h \
    ui_alilogincircling.h
FORMS += alinum.ui \
         forgetpass.ui \
         mainwindow.ui \
         network.ui \
         newuser.ui \
         titlebar.ui \
         titlebar1.ui \
    logincircling.ui \
    alilogincircling.ui
SOURCES += alinum.cpp \
           forgetpass.cpp \
           main.cpp \
           mainwindow.cpp \
           network.cpp \
           newuser.cpp \
           refreshcircle.cpp \
           titlebar.cpp \
           titlebar1.cpp \
    refreshcircle1.cpp \
    logincircling.cpp \
    alilogincircling.cpp
RESOURCES += img/imgsource.qrc
RC_FILE += Application.rc
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
