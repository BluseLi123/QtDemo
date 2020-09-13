#ifndef TEXTTICKER_H
#define TEXTTICKER_H

#include <QtWidgets/QLabel>

class TextTicker : public QLabel
{
    Q_OBJECT

public:
    TextTicker(QWidget *parent = nullptr);
    ~TextTicker();

protected:
    void paintEvent(QPaintEvent *event);
    void updateIndex();

private:
    int charWidth;
    int curIndex;
    QString showText;
};


#endif // TEXTTICKER_H

//代码来自这里
//https://blog.csdn.net/u011417605/article/details/51211853
//https://blog.csdn.net/u011417605/article/details/51211853
