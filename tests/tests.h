#ifndef TESTS_H 
#define TESTS_H 

#include <gtest/gtest.h>
#include "functions.h"

/* Тест проверяющий, что список "Коктейли" 
* заполнен правильно 
*/ 
TEST(test1, suite1)
{
    QStringList List;
    list_filling_malyar(&List, "");
    
    int count = 0;
    QFile file2("app/listItems");
   
    if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
   
    QTextStream out(&file2);
   
    while (!out.atEnd()) {
        QString line = out.readLine();
        EXPECT_EQ(line, List.at(count));
        count++;
    }
    
    SUCCEED();
}

/* Тест проверяющий, что в подсказке вылезают нужные элементы
 *  и что регистр не имеет значения
 */
TEST(test2, suite2)
{
   QStringList List;
   list_filling_malyar(&List, "co");
    
   EXPECT_EQ(2, List.count());
   EXPECT_EQ("Cosmopolitan", List.at(0));
   EXPECT_EQ("Corpse reviver", List.at(1));
    
   SUCCEED();
}

/* Тест проверяющий, что в подсказке вылезают нужные элементы
 *  и что регистр не имеет значения
 */
TEST(test3, suite3)
{
    QStringList List;
    list_filling_malyar(&List, "Co");
    
    EXPECT_EQ("Cosmopolitan", List.at(0));
    EXPECT_EQ("Corpse reviver", List.at(1));
    
    SUCCEED();
}

/* Тест проверяющий, что в подсказке вылезают нужные элементы
 *  и что регистр не имеет значения
 */
TEST(test4, suite4){
    QStringList List, w;
    list_filling_malyar(&List, "p");
    list_filling_malyar(&w, "P");
    
    int count = 0;
    
    while (count < 5) {
       EXPECT_EQ(w.at(count), List.at(count));
       count++;
   }
}
}
#endif // TESTS_H 
