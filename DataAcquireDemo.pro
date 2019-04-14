#-------------------------------------------------
#
# Project created by QtCreator 2019-04-13T20:24:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DataAcquireDemo
TEMPLATE = app


SOURCES += main.cpp\
        DataAcquireDemo.cpp \
    InitAPP.cpp \
    IconTool.cpp

HEADERS  += DataAcquireDemo.h \
    head.h \
    InitAPP.h \
    IconTool.h

FORMS    += DataAcquireDemo.ui

RESOURCES += \
    resource.qrc

DISTFILES += \
    DataAcquireTrans.qph
