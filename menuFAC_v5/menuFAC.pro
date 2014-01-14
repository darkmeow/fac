#-------------------------------------------------
#
# Project created by QtCreator 2014-01-04T05:35:07
#
#-------------------------------------------------

QT       += core gui
CONFIG += console
CONFIG += qt
CONFIG -= app_bundle

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = menuFAC
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    LoginPassword.cpp

HEADERS  += mainwindow.h \
    LoginPassword.h \
    videowindow.h

FORMS    += mainwindow.ui \
    pass.ui

RESOURCES = menuFAC.qrc

INCLUDEPATH += /opt/local/include
LIBS += -L/opt/local/lib
LIBS += `/opt/local/bin/pkg-config --cflags --libs opencv`

QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.9

