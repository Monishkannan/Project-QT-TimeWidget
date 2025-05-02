#include "widget.h"
#include "ui_widget.h"
#include "datetimewidget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent) , ui(new Ui::Widget)
{
    ui->setupUi(this);
    datetimewidget* Date =new datetimewidget(this);
    ui->verticalLayout->addWidget(Date);
}

Widget::~Widget()
{
    delete ui;
}

