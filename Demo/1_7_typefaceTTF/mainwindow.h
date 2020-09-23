#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_typeface_pre_clicked();
    void on_btn_typeface_next_clicked();

    void setFont(QString path);
    
    void on_btn_choose_clicked();

private:
    Ui::MainWindow *ui;

    QList<QFileInfo> *ttf_res;
    int ttf_index;
};
#endif // MAINWINDOW_H
