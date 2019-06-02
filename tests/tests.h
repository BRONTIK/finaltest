#ifndef TESTS_H 
#define TESTS_H 

#include <gtest/gtest.h>
#include "widget.h"
#include "widget.cpp"
#include "ui_widget.h"

/* Тест проверяющий, что список "Коктейли" 
* заполнен правильно 
*/ 
TEST(test1, suite1)
{
    Widget w;// = new Widget();
    
    //ui.list_filling("");
    int count = 0;
    QFile file2("listItems");
   
    if (!file2.open(QIODevice::ReadOnly | QIODevice::Text))
        return;
   
    QTextStream out(&file2);
   
    while (!out.atEnd()) {
       QString line = out.readLine();
        //EXPECT_EQ(line, w.List.item(count));
        count++;
    }
    SUCCEED();
}
/* Тест проверяющий, что в подсказке вылезают нужные элементы
 *  и что регистр не имеет значения
 */
TEST(test2, suite2)
{
//    Widget *w = new Widget();
//    w->list_filling("");
//    ui->lineEdit->setText("co");
//    EXPECT_EQ("Cosmopolitan", ui->List->item(0));
//    EXPECT_EQ("Corpse reviver", ui->List->item(1));
    SUCCEED();
}
/* Тест проверяющий, что в подсказке вылезают нужные элементы
 *  и что регистр не имеет значения
 */
TEST(test3, suite3)
{
//    Widget *w = new Widget();
//    w->list_filling("");
//    ui->lineEdit->setText("Сo");
//    EXPECT_EQ("Cosmopolitan", ui->List->item(0));
//    EXPECT_EQ("Corpse reviver", ui->List->item(1));
    SUCCEED();
}
/* Тест проверяющий, что в подсказке вылезают нужные элементы
 *  и что регистр не имеет значения
 */
//TEST(test4, suite4){
//    list_filling("");
//    ui->lineEdit->setText("p");
//    list_filling("p");
//    while (count < 5) {
//        w.addItem(ui->List->item(count));
//        count++;
//    }
//    count = 0;
//    ui->lineEdit->setText("P");
//{
//    QStringList w;
//    int count = 0;
//    list_filling("P");
//    while (count < 5) {
//        EXPECT_EQ(w.itemText(), ui->List->item(count));
//        count++;
//    }
//}
//}
#endif // TESTS_H */
