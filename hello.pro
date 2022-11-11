DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
TEMPLATE=app
TARGET=hello
INCLUDEPATH+=.

CONFIG+=qt

QT+=core gui widgets 


LINK="/usr/bin/clang++"
# Input
HEADERS+=hello.h
SOURCES+=hello.cpp main.cpp.
