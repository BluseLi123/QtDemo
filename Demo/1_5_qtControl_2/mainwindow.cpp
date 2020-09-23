#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPalette>
\
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    iniInterface();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::iniInterface()
{
    ui->hslider_r->setRange(0,255);
    ui->hslider_g->setRange(0,255);
    ui->hslider_b->setRange(0,255);
    ui->hslider_a->setRange(0,255);

    ui->hslider_r->setValue(125);
    ui->hslider_g->setValue(240);
    ui->hslider_b->setValue(10);
    ui->hslider_a->setValue(255);

    QPalette lab_palette;
    lab_palette.setColor(QPalette::Background, QColor(ui->hslider_r->value(), ui->hslider_g->value(), ui->hslider_b->value(), ui->hslider_a->value()));
    ui->lab_color->setAutoFillBackground(true);
    ui->lab_color->setPalette(lab_palette);

    //ui->lab_color->setStyleSheet("QLabel{background:#000000;}");
}

void MainWindow::on_hslider_r_valueChanged(int value)
{
    QColor color(ui->hslider_r->value(), ui->hslider_g->value(), ui->hslider_b->value(), ui->hslider_a->value());
    //QColor >> QRgb(uint)
    QRgb mRgb = qRgb(color.red(),color.green(),color.blue());
    qDebug()<<mRgb;
    //QRgb(uint) >> QColor;
    QColor mColor = QColor(mRgb);
    qDebug()<<mColor;
    //QRgb(uint) >> QString;
    QString mRgbStr = QString::number(mRgb,16);
    qDebug()<<mRgbStr;
    //QString >> unint >> QColor
    QColor color2(mRgbStr.toUInt(NULL,16));

    qDebug()<<color2;
}

void MainWindow::on_hslider_g_valueChanged(int value)
{
    QPalette lab_palette;
    lab_palette.setColor(QPalette::Background, QColor(ui->hslider_r->value(), value, ui->hslider_b->value(), ui->hslider_a->value()));
    ui->lab_color->setAutoFillBackground(true);
    ui->lab_color->setPalette(lab_palette);
}

void MainWindow::on_hslider_b_valueChanged(int value)
{
    QString setColor="background-color: rgb(%1, %2, %3, %4)";
    ui->lab_color->setStyleSheet(setColor.arg(ui->hslider_r->value()).arg(ui->hslider_g->value()).arg(value).arg(ui->hslider_a->value()));
}

void MainWindow::on_hslider_a_valueChanged(int value)
{
    QString setColor="background-color: rgb(%1, %2, %3, %4)";
    ui->lab_color->setStyleSheet(setColor.arg(ui->hslider_r->value()).arg(ui->hslider_g->value()).arg(ui->hslider_b->value()).arg(value));
}

