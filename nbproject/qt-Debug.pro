# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = ProjetS
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += BulletinMeteo.cpp BulletinMeteoFake.cpp Etat.cpp.cc IHM_Serre.cpp.cc Observable.cpp Observateur.cpp SupervisionSerre.cpp.cc VueMeteo.cpp main.cpp
HEADERS += BulletinMeteo.h BulletinMeteoFake.h Etat.h IHM_Serre.h Observable.h Observateur.h SupervisionSerre.h VueMeteo.h
FORMS += Etat.ui IHM_Serre.ui SupervisionSerre.ui VueMeteo.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
