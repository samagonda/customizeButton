#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QTimer *timer = new QTimer(this);
          connect(timer, SIGNAL(timeout()), this, SLOT(update()));
          timer->start(3000);
    b=new MyButton(this);
    b->setText("SHASHIKUMAR");
//    b->setGeometry(10,10,250,200);
//    b->show();
    connect(b,SIGNAL(clicked()),this,SLOT(onClicked()));

    connect(b,SIGNAL(released()),this,SLOT(onreleased()));
}
void Widget::onClicked()
{
    qDebug()<<"mouse click";
}
void Widget::update()
{

  b->setText("SAMAGONDA");

}
void Widget:: onreleased()
{
    qDebug()<<"mouse released";

}
Widget::~Widget()
{

}
