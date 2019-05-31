include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG += qt
QT     += core widgets gui

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov

HEADERS +=     tests.h \
    ../app/widget.h 
    

SOURCES +=     main.cpp \
    ../app/widget.cpp

INCLUDEPATH += ../app

DISTFILES += listItems

FORMS += \
        ../app/widget.ui



