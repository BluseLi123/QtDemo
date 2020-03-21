#include <QApplication>
#include <QMainWindow>
#include <QTranslator>
#include <QLabel>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator *qtTranslator = new QTranslator;
    //加载翻译文件
    if(qtTranslator->load("./language.qm"))
    {
        a.installTranslator(qtTranslator);
    }

    QMainWindow w;
    QLabel *lab=new QLabel(&w);
    lab->setText(QObject::tr("Hello Qt"));
    w.show();

    return a.exec();
}
