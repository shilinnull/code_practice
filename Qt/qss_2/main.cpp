#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    a.setStyleSheet(".QWidget{color: red;}");
//    QString style = "QPushButton{color: yellow;}";
//    style += "#pushButton{color: red; }";
//    style += "#pushButton_2 {color: green; }";

//    a.setStyleSheet(style);

    a.setStyleSheet("QPushButton, QLabel, QLineEdit { color: red; } ");
    Widget w;
    w.show();
    return a.exec();
}
