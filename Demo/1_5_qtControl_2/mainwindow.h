#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void iniInterface();

private slots:

    void on_hslider_r_valueChanged(int value);
    void on_hslider_g_valueChanged(int value);
    void on_hslider_b_valueChanged(int value);
    void on_hslider_a_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
