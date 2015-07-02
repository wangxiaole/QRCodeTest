#-------------------------------------------------
#
# Project created by QtCreator 2015-03-31T11:58:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qrcodeTest
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui


LIBS += -L/usr/lib -lqrencode
