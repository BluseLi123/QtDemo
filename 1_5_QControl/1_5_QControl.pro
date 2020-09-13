#-------------------------------------------------
#
# Project created by QtCreator 2020-03-29T20:52:50
#
#-------------------------------------------------

########################################################################################################
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 1_5_QControl
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        colorlabel.cpp \
        gradientcolor.cpp \
        main.cpp \
        mainwindow.cpp \
        textticker.cpp

HEADERS += \
        colorlabel.h \
        gradientcolor.h \
        mainwindow.h \
        textticker.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    res.qrc


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
########################################################################################################
message("-----------------------------")
message("从此深耕不回头")
message("www.bluseli.cn")
message("贪贪贪丶慎独")
message("5 .Qt控件的简单使用")
message("-----------------------------")

DISTFILES +=
