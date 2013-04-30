#-------------------------------------------------
#
# Project created by QtCreator 2013-04-29T21:24:03
#
#-------------------------------------------------

QT       += core gui

TARGET = Checkers
TEMPLATE = app


SOURCES +=\
    checkerswindow.cpp \
    main.cpp \
    move.cpp \
    checkers.cpp \
    player.cpp \
    realplayer.cpp \
    guiboard.cpp \
    aiplayer.cpp

HEADERS  += \
    checkerswindow.h \
    move.h \
    checkers.h \
    player.h \
    common.h \
    realplayer.h \
    guiboard.h \
    aiplayer.h

FORMS    += checkerswindow.ui

OTHER_FILES += \
    ../README.md
