#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QColorDialog>
#include <QTextEdit>
#include <QFile>
#include <QFont>

#include "info.h"

#define MAX_TEXT_EDIT 12

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTextEdit *Find_Current_Text_Edit(int index);

    void Ini();
    void Action_New();
    void Action_Open();
    void Action_Save();
    void Action_Save_All();
    void Action_Saveas();
    void Action_Close_Current();
    void Action_Close_All();
    void Action_Exit();

private slots:
    void on_action_exit_triggered();

    void on_action_open_triggered();

    void on_action_close_current_triggered();

    void on_action_close_all_triggered();

    void on_action_new_triggered();

    void on_action_save_triggered();

    void on_action_save_all_triggered();

    void on_action_saveas_triggered();

    void on_action_undo_triggered();

    void on_action_redo_triggered();

    void on_action_cut_triggered();

    void on_action_copy_triggered();

    void on_action_paste_triggered();

    void on_action_delete_triggered();

    void on_action_select_all_triggered();

    void on_action_size_plus_triggered();

    void on_action_size_redu_triggered();

    void on_action_color_triggered();

    void on_action_brief_triggered();

    void on_action_explain_triggered();

    void on_action_1_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_tabWidget_list_tabCloseRequested(int index);

private:
    Ui::MainWindow *ui;

    int Current_Index;
    int Next_Index;
    Info *info;
    QTextEdit *text_Edit_Current;
    QTextEdit *text_Edit_1;
    QTextEdit *text_Edit_2;
    QTextEdit *text_Edit_3;
    QTextEdit *text_Edit_4;
    QTextEdit *text_Edit_5;
    QTextEdit *text_Edit_6;
    QTextEdit *text_Edit_7;
    QTextEdit *text_Edit_8;
    QTextEdit *text_Edit_9;
    QTextEdit *text_Edit_10;
    QTextEdit *text_Edit_11;
    QTextEdit *text_Edit_12;
};

#endif // MAINWINDOW_H
