#ifndef INFO_H
#define INFO_H

#include <QDialog>
#include <QIcon>
namespace Ui {
class Info;
}

class Info : public QDialog
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = nullptr);
    Info(int state);
    ~Info();

private:
    Ui::Info *ui;
};

#endif // INFO_H
