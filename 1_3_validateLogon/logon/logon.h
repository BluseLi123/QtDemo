/********************************************************
 *  @projectName CampusManageSystem
 *  @brief       摘要
 *  @author      王润萌
 *  @date        2020-03-04
 *******************************************************/
#ifndef LOGIN_H
#define LOGIN_H

#define IDtype 0;
#define Phonetype 1;

#include <QDialog>

class QLineEdit;
class QLabel;
class QCheckBox;
class QToolButton;
class QStackedWidget;
class QComboBox;

namespace Ui {
class Logon;
}

class Logon : public QDialog
{
    Q_OBJECT

public:
    explicit Logon(QWidget *parent = nullptr);
    ~Logon();

    QLabel      *signtypeLab;
    QToolButton *signiconTbtn;
    QPushButton *signidBtn;
    QPushButton *signphoneBtn;
    QPushButton *getMessageBtn;
    QLineEdit   *userName;
    QLineEdit   *passWord;
    QCheckBox   *saveBox;
    QCheckBox   *autoBox;
    QLabel      *forgetpswdLab;

    QStackedWidget *widgetMain;
    QStackedWidget *widgetType;

    int         loginMode;
    int         loginType;

    bool        m_bDrag;
    QPoint      mouseStartPoint;
    QPoint      windowTopLeftPoint;

protected:
    //拖拽窗口
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private slots:
    void setloginMode();
    void setidType();
    void setphoneType();
    void trysignin();
    void exit();

private:
    Ui::Logon *ui;
};

#endif // LOGIN_H
