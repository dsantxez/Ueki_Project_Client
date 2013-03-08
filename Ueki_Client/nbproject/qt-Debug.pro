# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = Ueki_Client
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui network phonon
SOURCES += Forms/MainMenu.cpp main.cpp
HEADERS += Forms/MainMenu.h
FORMS += Forms/MainMenu.ui
RESOURCES += Resources/Images.qrc Resources/Music.qrc
TRANSLATIONS += Resources/English.ts
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = ./Forms
RCC_DIR = ./Resources
UI_DIR = ./Forms
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
