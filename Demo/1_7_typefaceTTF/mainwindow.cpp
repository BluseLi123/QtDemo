#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "typeface.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->on_btn_choose_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_typeface_pre_clicked()
{
    if(ttf_index--<=0)
        ttf_index=ttf_res->length()-1;

    this->setFont(ttf_res->at(ttf_index).filePath());
}

void MainWindow::on_btn_typeface_next_clicked()
{
    if(ttf_index++>=ttf_res->length()-1)
        ttf_index=0;

    this->setFont(ttf_res->at(ttf_index).filePath());
}

void MainWindow::on_btn_choose_clicked()
{
    QString path=QFileDialog::getExistingDirectory(nullptr, tr("选择字库"),"../",QFileDialog::ShowDirsOnly);
    QDir *dir=new QDir(path);
    QStringList filter;
    filter<<"*.ttf";
    dir->setNameFilters(filter);
    ttf_res->clear();
    ttf_res=new QList<QFileInfo>(dir->entryInfoList(filter));

    if(ttf_res->isEmpty())
    {
        ui->btn_typeface_pre->setEnabled(false);
        ui->btn_typeface_next->setEnabled(false);
    }
    else {
        ui->btn_typeface_pre->setEnabled(true);
        ui->btn_typeface_next->setEnabled(true);

        ttf_index=0;
        this->setFont(ttf_res->at(ttf_index).filePath());
    }
}

void MainWindow::setFont(QString path)
{
    QFont font = QApplication::font();
    QString font_family = Typeface::Instance()->loadFontFamilyFromFiles(path);
    font.setFamily(font_family);
    ui->lab_ttf->setText(font_family);
    //全局设置
    QApplication::setFont(font);
}
