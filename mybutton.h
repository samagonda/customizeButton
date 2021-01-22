#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QWidget>
#include<QPainter>
#include<QPaintEvent>
#include<QDebug>
#include<QTextOption >
class MyButton : public QWidget
{
    Q_OBJECT

    QString m_Text;
    int m_Height,m_Width;


public:
    explicit MyButton(QWidget *parent = nullptr);
void mousePressEvent(QMouseEvent *mouse);
void paintEvent(QPaintEvent *event);
void mouseReleaseEvent(QMouseEvent *mouse);

QString Text() const;
void setText(const QString &Text);

int Height() const;
void setHeight(int Height);

int Width() const;
void setWidth(int Width);

signals:

void clicked();
void pressed();
void released();


};

#endif // MYBUTTON_H
