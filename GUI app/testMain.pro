#-------------------------------------------------
#
# Project created by QtCreator 2012-02-09T03:24:24
#
#-------------------------------------------------

QT       += core gui

ICON = icon.icns

TARGET = "Fixing The Trains"
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    trainwindow.cpp

HEADERS  += mainwindow.h \
    trainwindow.h

FORMS    += mainwindow.ui \
    trainwindow.ui

unix|win32: LIBS += -lfann

OTHER_FILES += \
    api/api.pri
