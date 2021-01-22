#include "mybutton.h"

QString MyButton::Text() const
{
    return m_Text;
}

void MyButton::setText(const QString &Text)
{
    if( m_Text ==Text)
    {
        return;
    }
    else {
        m_Text = Text;
       this->update();
    }
}

int MyButton::Height() const
{
    return m_Height;
}

void MyButton::setHeight(int Height)
{
    m_Height = Height;
}

int MyButton::Width() const
{
    return m_Width;
}

void MyButton::setWidth(int Width)
{
    m_Width = Width;
}

MyButton::MyButton(QWidget *parent) : QWidget(parent)
{
    m_Height=100;
    m_Width=200;

}

void MyButton::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    //    QTextOption  pos(Qt::Alignment );
    p.setBrush(Qt::red);
    p.setPen(Qt::SolidLine);
    QRectF rect(0,0,this->m_Width,this->m_Height);
    p.drawRect(rect);
    p.drawText(rect,this->m_Text);


}

void MyButton::mousePressEvent(QMouseEvent *mouse)
{
    emit clicked();
    emit pressed();
}

void MyButton::mouseReleaseEvent(QMouseEvent *mouse)
{
    emit released();
}
