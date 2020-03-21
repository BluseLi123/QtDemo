#include <QApplication>
#include <QMainWindow>
#include <QTranslator>
#include <QTextCodec>
#include <QLabel>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));

    QTranslator *qtTranslator = new QTranslator;
    //加载翻译文件
    if(qtTranslator->load("./language.qm"))
    {
        a.installTranslator(qtTranslator);
    }

    QMainWindow w;
    QLabel *lab1=new QLabel(&w);
    lab1->setText(QObject::tr("Hello Qt"));
    QLabel *lab2=new QLabel(&w);
    lab2->setText(QString("你好 QT"));
    lab2->setGeometry(50,50,100,40);
    w.show();

    return a.exec();
}
