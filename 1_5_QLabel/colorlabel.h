#ifndef COLORLABEL_H
#define COLORLABEL_H

#include <QLabel>
#include <QTimer>

class ColorLabel : public QLabel
{
    Q_OBJECT
public:
    ColorLabel(QWidget *parent = nullptr);
    ~ColorLabel();

private slots:
    void colorChange();

protected:
    void paintEvent(QPaintEvent *event);


private:
    QTimer *timer;
    int R,G,B;
};

#endif // COLORLABEL_H
