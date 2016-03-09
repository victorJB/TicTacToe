#-------------------------------------------------
#
# Project created by QtCreator 2016-03-07T14:24:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JuegoGato
TEMPLATE = app


SOURCES += main.cpp\
        gato.cpp \
    bienvenida.cpp \
    ticTacToe.cpp

HEADERS  += gato.h \
    bienvenida.h \
    ticTacToe.h

FORMS    += gato.ui \
    bienvenida.ui
