#include <gtest/gtest.h>
#include "tests.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;// = new Widget();
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
