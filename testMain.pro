#-------------------------------------------------
#
# Project created by QtCreator 2012-02-09T03:24:24
#
#-------------------------------------------------

QT       += core gui

TARGET = testMain
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    trainwindow.cpp \
    nettrainwindow.cpp

HEADERS  += mainwindow.h \
    trainwindow.h \
    nettrainwindow.h

FORMS    += mainwindow.ui \
    trainwindow.ui \
    nettrainwindow.ui

unix|win32: LIBS += -lfann

OTHER_FILES += \
    api/api.pri
