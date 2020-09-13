#include "textticker.h"
#include <QPainter>
#include <QTimer>

TextTicker::TextTicker(QWidget *parent)
    : QLabel(parent)
{
    curIndex = 0;//当前角码
    showText = "www.bluseli.cn      www.bluseli.site";//显示的文字
    charWidth = fontMetrics().width("w");//每个字符的宽度

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &TextTicker::updateIndex);
    timer->start(100);
}

TextTicker::~TextTicker()
{

}

void TextTicker::paintEvent(QPaintEvent *event)
{
    //__super::paintEvent(event);
    QPainter painter(this);
    painter.drawText(0, 20, showText.mid(curIndex));
    painter.drawText(this->width() - charWidth*curIndex, 20, showText.left(curIndex));
}

void TextTicker::updateIndex()
{
    update();
    curIndex++;
    if (curIndex*charWidth > this->width())
        curIndex = 0;
}

//代码来自这里
//https://blog.csdn.net/u011417605/article/details/51211853
//https://blog.csdn.net/u011417605/article/details/51211853
