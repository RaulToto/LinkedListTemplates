QT += core
QT -= gui

CONFIG += c++11

TARGET = LinkedList2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    list.h \
    listnode.h \
    stack.h
