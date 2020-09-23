#ifndef GRADIENTCOLOR_H
#define GRADIENTCOLOR_H

//QPainter QPen QBrush

#include <QWidget>

class GradientColor:public QWidget
{
    Q_OBJECT
public:
    explicit GradientColor(QWidget *parent = nullptr);
    ~GradientColor();

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // GRADIENTCOLOR_H
