#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
#include <QGridLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // 创建 6 个按钮
    QPushButton* btn1 = new QPushButton("按钮1");
    QPushButton* btn2 = new QPushButton("按钮2");
    QPushButton* btn3 = new QPushButton("按钮3");
    QPushButton* btn4 = new QPushButton("按钮4");
    QPushButton* btn5 = new QPushButton("按钮5");
    QPushButton* btn6 = new QPushButton("按钮6");
    // 创建网格布局管理器, 并且添加元素
    QGridLayout* layout = new QGridLayout();
    layout->addWidget(btn1, 0, 0);
    layout->addWidget(btn2, 0, 1);
    layout->addWidget(btn3, 0, 2);
    layout->addWidget(btn4, 1, 0);
    layout->addWidget(btn5, 1, 1);
    layout->addWidget(btn6, 1, 2);

    // 设置拉伸比例
    // 第 0 列拉伸比例设为 1;
    layout->setColumnStretch(0, 1);
    // 第 1 列拉伸比例设为 0, 即为固定大小, 不参与拉伸
    layout->setColumnStretch(1, 0);
    // 第 2 列拉伸比例设为 3, 即为第 2 列的宽度是第 0 列的 3 倍
    layout->setColumnStretch(2, 3);

    this->setLayout(layout);
}

Widget::~Widget()
{
    delete ui;
}

