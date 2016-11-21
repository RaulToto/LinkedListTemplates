QT += core
QT -= gui

CONFIG += c++11

TARGET = PuntoTemplate
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    point.cpp

HEADERS += \
    point.h
