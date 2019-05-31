TEMPLATE = subdirs


CONFIG +=qt

QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage -O0

SUBDIRS = app tests

CONFIG += ordered
