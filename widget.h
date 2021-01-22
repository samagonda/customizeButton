#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<mybutton.h>
#include<QDebug>
#include<QTimer>
class Widget : public QWidget
{
    Q_OBJECT
MyButton *b;

public:
    Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void onClicked();
    void  onreleased();
    void update();
};

#endif // WIDGET_H
