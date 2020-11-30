QT += testlib
QT += gui
CONFIG += qt warn_on depend_includepath testcase

INCLUDES +=../../FrontEndMain/Ship.h\
            ../../FrontEndMain/Grid.h

TEMPLATE = app

SOURCES +=  tst_testbattleship.cpp \
            ../../FrontEndMain/Ship.cpp \
            ../../FrontEndMain/Grid.cpp

HEADERS += \
    tst_testbattleship.h
