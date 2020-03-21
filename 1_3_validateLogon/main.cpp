/********************************************************
 *  @projectName CampusManageSystem
 *  @brief       摘要
 *  @author      王润萌
 *  @date        2020-03-04
 *******************************************************/
#include "logon/logon.h"
#include <QApplication>
#include <QMainWindow>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Logon logon;
    QMainWindow w;
    if(logon.exec()==QDialog::Accepted)
    {
        w.show();
    }
    return a.exec();
}
