#include "widget.h"
#include "ui_widget.h"
#include "QLabel"



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

//    QLabel lable1;
//    lable1.setText("111111");

    QLabel* lable = new QLabel(this);
    lable->setText("hello world");
}

Widget::~Widget()
{
    delete ui;
}

