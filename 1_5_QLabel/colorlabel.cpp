#include "colorlabel.h"
#include <QPainter>

ColorLabel::ColorLabel(QWidget *parent)
    : QLabel(parent)
{
    timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(colorChange()));
    timer->start(500);
    R=255;G=0;B=255;
}

ColorLabel::~ColorLabel()
{
}
void ColorLabel::paintEvent(QPaintEvent *event)
{
//    //__super::paintEvent(event);
//    QPainter painter(this);
//    painter.setPen();
//    QPen pen;
//    QBrush brush(QColor(R,G,B, 125)); //画刷
//    pen.setColor(QColor(R,G,B));
//    painter.setPen(pen);
//    painter.setBrush(brush);
//    painter.drawText(0, 5, this->text());

    QPainter painter(this);
    QRadialGradient radialGradient(QPointF(100, 190),50,QPointF(275,200));
    radialGradient.setColorAt(0, QColor(255, 255, 100, 150));
    radialGradient.setColorAt(1, QColor(0, 0, 0, 50));
    painter.setBrush(radialGradient);
    painter.drawEllipse(QPointF(100, 190), 50, 50);
}
void ColorLabel::colorChange()
{
    update();
    R++;G++;B--;
    if(R>255)
    {
        R=0;
    }
    if(G>255)
    {
        G=0;
    }
    if(B>255)
    {
        B=0;
    }
    if(R<255)
    {
        R=255;
    }
    if(G<0)
    {
        G=255;
    }
    if(B<0)
    {
        B=255;
    }
}

