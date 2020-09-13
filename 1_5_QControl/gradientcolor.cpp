#include "gradientcolor.h"
#include <QPainter>

GradientColor::GradientColor(QWidget *parent)
    : QWidget(parent)
{
    this->update();
}
//霍亚飞老师 https://www.qter.org/forum.php?mod=viewthread&tid=91&extra=page%3D2
void GradientColor::paintEvent(QPaintEvent *event)
{
    //画直线
    QPainter painter(this);
    painter.drawLine(QPointF(5, 5), QPointF(90, 90));

    //画矩形
    QPen pen; //画笔
    pen.setColor(QColor(255, 0, 0));
    QBrush brush(QColor(0, 255, 0, 125)); //画刷
    painter.setPen(pen); //添加画笔
    painter.setBrush(brush); //添加画刷
    painter.drawRect(105, 5, 90, 90); //绘制矩形

    //画
    pen.setStyle(Qt::DashDotDotLine);
    brush.setColor(Qt::blue);
    brush.setStyle(Qt::HorPattern);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(205,5,90,90);

    //画弧线
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    QRectF rectangle(305.0, 20.0, 90.0, 90.0); //矩形
    int startAngle = 30 * 16;     //起始角度
    int spanAngle = 120 * 16;   //跨越度数
    painter.drawArc(rectangle, startAngle, spanAngle);

    //线性渐变
    QLinearGradient linearGradient(QPointF(40, 190), QPointF(70, 190));
    //插入颜色
    linearGradient.setColorAt(0, Qt::yellow);
    linearGradient.setColorAt(0.5, Qt::red);
    linearGradient.setColorAt(1, Qt::green);
    //指定渐变区域以外的区域的扩散方式
    linearGradient.setSpread(QGradient::RepeatSpread);
    //使用渐变作为画刷
    painter.setBrush(linearGradient);
    painter.drawRect(405, 5, 90, 90);

    //辐射渐变
    QRadialGradient radialGradient(QPointF(550, 50),50,QPointF(550,50));
    radialGradient.setColorAt(0, QColor(255, 255, 100, 150));
    radialGradient.setColorAt(1, QColor(0, 0, 0, 50));
    painter.setBrush(radialGradient);
    painter.drawEllipse(QPointF(550, 50), 50, 50);

    //锥形渐变
    QConicalGradient conicalGradient(QPointF(650, 50), 100);
    conicalGradient.setColorAt(0.2, Qt::cyan);
    conicalGradient.setColorAt(0.9, Qt::black);
    painter.setBrush(conicalGradient);
    painter.drawEllipse(QPointF(650, 50), 50, 50);

    //设置一个矩形
    //为了更直观地看到字体的位置，我们绘制出这个矩形
    QRectF rect(705, 5, 245, 90);
    painter.drawRect(rect);
    painter.setPen(QColor(Qt::red));
    //我们这里先让字体水平居中
    painter.drawText(rect, Qt::AlignHCenter, "WWW.BLUSLEI.SITE");

    //绘制文字
    QFont font("宋体", 15, QFont::Bold, true);
    font.setLetterSpacing(QFont::AbsoluteSpacing,5);
    painter.setFont(font);
    painter.drawText(710, 55, "WWW.BLUSLEI.CN");

    //绘制文字
    painter.setPen(Qt::green);
    font.setLetterSpacing(QFont::AbsoluteSpacing,0);
    font.setBold(false);
    font.setFamily("黑体");
    font.setPointSize(10);
    font.setItalic(true);
    painter.setFont(font);
    painter.drawText(710, 85, "这是霍亚飞老师的例程，我悄悄复制的");

    //简单的使用路径
    QPainterPath path1;
    path1.addEllipse(15, 115, 50, 50);
    path1.lineTo(95, 195);
    painter.setPen(Qt::blue);
    painter.setBrush(Qt::red);
    painter.drawPath(path1);

    //复制图形
    QPainterPath path2;
    path2.addPath(path1);
    path2.translate(100,0);
    painter.drawPath(path2);

    QPainterPath path3;
    painter.setBrush(Qt::transparent);
    path3.lineTo(0,100);
    path3.lineTo(this->width(),100);
    painter.drawPath(path3);

    QPainterPath path4;
    path4.addRect(215, 105, 40, 40);
    path4.lineTo(295, 195);
    painter.drawPath(path4);

    QPainterPath path5;
    path5.addRect(315, 105, 40, 40);
    //移动到(100, 100)点
    path5.moveTo(325, 115);
    path5.lineTo(395, 195);
    painter.drawPath(path5);

    //简单绘制图片
    QPixmap pix;
    pix.load(":/Resources/image/girl.gif");
    painter.drawPixmap(405, 105, 190, 90, pix);

    painter.translate(605, 105);//设置为了新的坐标原点
    painter.drawPixmap(0, 0, 190, 90, pix);

    //缩放
    pix = pix.scaled(pix.width()*0.2, pix.height()*0.2,Qt::KeepAspectRatio);

    //painter.translate(0, 0);

    //倾斜
    painter.shear(0.5, 0);
    painter.drawPixmap(185, 15, pix);

    painter.shear(-0.5, 0);
    painter.translate(-605, -105);
    painter.setBrush(Qt::red);
    painter.drawRect(55, 250, 90, 90);
    painter.setBrush(Qt::yellow);
    painter.drawRect(5, 200, 90, 90);

    //painter.drawPixmap(185, 315, pix);
    // 平移变换
    painter.setBrush(Qt::yellow);
    painter.drawRect(155, 200, 50, 50);
    //将点（100，100）设为原点
    painter.translate(100, 100);
    painter.setBrush(Qt::red);
    painter.drawRect(155, 200, 50, 50);
    painter.translate(-100, -100);
    painter.drawLine(155, 200, 175, 220);

    //缩放
    painter.setBrush(Qt::yellow);
    painter.drawRect(305, 200, 100, 100);
    painter.scale(2, 2); //放大两倍
    painter.setBrush(Qt::red);
    painter.drawRect(505, 200, 50, 50);
}

GradientColor::~GradientColor()
{
}
