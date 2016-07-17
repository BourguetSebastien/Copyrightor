#-------------------------------------------------
#
# Project created by QtCreator 2016-04-30T22:25:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Copyrightor
TEMPLATE = app

ICON = icon.icns

#CONFIG(release) {
#   message( "release" )
#   DEFINES += QT_NO_DEBUG_OUTPUT
#   DEFINES += QT_NO_WARNING_OUTPUT
#   CONFIG += static
#   QMAKE_LFLAGS += -static -static
#}

SOURCES += main.cpp\
    mainwindow.cpp \
    labeldrag.cpp \
    selectionview.cpp \
    model.cpp \
    controler.cpp \
    editionview.cpp \
    graphicimageitem.cpp \
    cornergrabber.cpp

HEADERS  += mainwindow.h \
    labeldrag.h \
    selectionview.h \
    model.h \
    controler.h \
    editionview.h \
    graphicimageitem.h \
    cornergrabber.h

RESOURCES += \
    recources.qrc
