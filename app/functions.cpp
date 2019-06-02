#include "functions.h"
#include <QFile>
#include <QTextStream>
#include <QString>


void list_filling_malyar(QStringList *List, QString substring)
{
    QFile file("app/dataBase/fff_1.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    /* Счётчик пробелов */
    int spaces_counter = 0;

    /* Выбранная категория */
    QString category;

    QTextStream in(&file);
    //QTextStream out(&file2);

    while (!in.atEnd()) {
        QString line = in.readLine();

        if (line == "")
            spaces_counter++;

        if (spaces_counter%3 == 0 && line != "")
            category = line;

        if (spaces_counter%3 == 1 && line != "" && category == "Cocktails"){
            if (substring == ""){
                List->append(line [0].toUpper()
                        + line.mid(1, line.size () - 1).toLower ());
            }
            else {
                if (line.toUpper().startsWith(substring.toUpper()))
                    List->append(line [0].toUpper()
                            + line.mid(1, line.size () - 1).toLower ());
            }
        }
    }



    file.close();

}
