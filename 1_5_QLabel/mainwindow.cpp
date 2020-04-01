#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QMovie *movie=new QMovie(":/Resources/image/girl.gif");
    ui->girlLab->setMovie(movie);
    movie->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
