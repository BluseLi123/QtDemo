#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QDialog>
#include <QTranslator>
#include <QTextCodec>
#include <QLabel>
#include <QObject>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //设置编码
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));

    QTranslator *qtTranslator = new QTranslator;
    //加载翻译文件
    if(qtTranslator->load("./language.qm"))
    {
        a.installTranslator(qtTranslator);
    }

    //主窗口
    QMainWindow w;
    w.setFixedSize(200,100);
    QLabel *lab1=new QLabel(&w);
    lab1->setText(QObject::tr("Hello Qt"));
    QLabel *lab2=new QLabel(&w);
    lab2->setText(QString("你好 QT"));
    lab2->setGeometry(50,50,100,40);
    //登录框
    QDialog log;
    log.setWindowTitle("登录框");
    log.setFixedSize(300, 200);
    QLabel *nameLab=new QLabel(&log);
    nameLab->setText("用户名");
    nameLab->setGeometry(50,30,50,40);
    QLabel *passwdLab=new QLabel(&log);
    passwdLab->setText("密码");
    passwdLab->setGeometry(50,80,50,40);
    QLineEdit *nameEdit=new QLineEdit(&log);
    QLineEdit *passwdEdit=new QLineEdit(&log);
    nameEdit->setPlaceholderText("账号/电话/邮箱");
    nameEdit->setGeometry(100,30,150,40);
    passwdEdit->setPlaceholderText("密码/验证码");
    passwdEdit->setGeometry(100,80,150,40);
    passwdEdit->setEchoMode(QLineEdit::Password);
    QPushButton *logbtn=new QPushButton(&log);
    logbtn->setGeometry(100, 150, 100, 30);
    logbtn->setText("登录");
    QObject::connect(logbtn, SIGNAL(clicked()), &log, SLOT(accept()));

    if(log.exec()==QDialog::Accepted)
    {
        w.show();
    }

    return a.exec();
}
