#ifndef WIDGET_H
#define WIDGET_H

#include <C:\Qt\5.12.2\mingw73_64\include>
#include <string>
#include <QListWidgetItem>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    void comboBox_filling();
    void textBrowser_filling(QString name);
    void list_filling(const QString &arg1);
    explicit Widget(QWidget *parent = NULL);
    ~Widget();

private slots:
    void on_comboBox_activated();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_List_itemActivated(QListWidgetItem *item);

   // void on_lineEdit_selectionChanged();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
