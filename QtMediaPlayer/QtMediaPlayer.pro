#-------------------------------------------------
#
# Project created by QtCreator 2015-09-19T14:56:40
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

CONFIG+= C++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtMediaPlayer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ccontrollpanel.cpp \
    ccontrollbutton.cpp

HEADERS  += mainwindow.h \
    ccontrollpanel.h \
    ccontrollbutton.h

FORMS    += mainwindow.ui
