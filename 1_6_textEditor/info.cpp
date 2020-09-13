#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/img/icon_logo.png"));

    ui->textEdit_1->setEnabled(false);
    ui->textEdit_2->setEnabled(false);
}

Info::Info(int state) :
    ui(new Ui::Info)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/img/icon_logo.png"));

    ui->textEdit_1->setEnabled(false);
    ui->textEdit_2->setEnabled(false);

    if(state==1)
    {
        this->setWindowTitle(tr("简介"));
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        this->setWindowTitle(tr("功能"));
        ui->stackedWidget->setCurrentIndex(1);
    }
}

Info::~Info()
{
    delete ui;
}
