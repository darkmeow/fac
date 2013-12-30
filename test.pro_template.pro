####### TEMPLATE PARA ARCHIVO.PRO

-------------------------------------------


## MAC
TARGET = tests
TEMPLATE = app

CONFIG += console
CONFIG += qt
CONFIG -= app_bundle
QT += widgets

SOURCES += main.cpp
INCLUDEPATH += /opt/local/include
LIBS += -L/opt/local/lib
LIBS += `/opt/local/bin/pkg-config --cflags --libs opencv`

QMAKE_MACOSX_DEPLOYMENT_TARGET = 10.9

## WIN


#TARGET = tests
#TEMPLATE = app

#CONFIG += console
#CONFIG += qt
#CONFIG -= app_bundle
#QT += widgets

#SOURCES += main.cpp
#INCLUDEPATH += /opt/local/include
#LIBS += -L/opt/local/lib
#LIBS += `/opt/local/bin/pkg-config --cflags --libs opencv`

#INCLUDEPATH += C:\\OpenCV-2.3.1\\install\\include
#LIBS += -LC:\\OpenCV-2.3.1\\install\\lib \
#    -lopencv_core231.dll \
#    -lopencv_highgui231.dll \
#    -lopencv_imgproc231.dll \
#    -lopencv_features2d231.dll \
#    -lopencv_calib3d231.dll

#HEADERS  +=
#FORMS    +=

## LINUX

