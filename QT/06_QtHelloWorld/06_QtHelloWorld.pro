#-------------------------------------------------
#
# Project created by QtCreator 2015-04-22T22:28:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 06_QtHelloWorld#название испол-го файла
TEMPLATE = app#делаем приложение
#lib- делаем разделяемую динамически подгруж-ю библиотеку

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h#заголовочный файл

FORMS    += mainwindow.ui#формы - интерфейс
