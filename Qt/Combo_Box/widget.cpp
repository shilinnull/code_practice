#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <iostream>
#include <fstream>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->comboBox->addItem("巨无霸");
    ui->comboBox->addItem("麦辣鸡腿堡");
    ui->comboBox_2->addItem("薯条");
    ui->comboBox_2->addItem("麦辣鸡翅");
    ui->comboBox_3->addItem("可乐");
    ui->comboBox_3->addItem("雪碧");


    ////////////////////////////////////////////


    std::ifstream file("F:/code-exercise/Qt/Combo_Box/config.txt");
    std::string line;
    while(std::getline(file, line))
    {
        ui->comboBox_4->addItem(QString::fromStdString(line));
    }
    file.close();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    qDebug() << "汉堡选择: " << ui->comboBox->currentText();
    qDebug() << "小食选择: " << ui->comboBox_2->currentText();
    qDebug() << "饮料选择: " << ui->comboBox_3->currentText();
}
