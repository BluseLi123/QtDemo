#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/img/icon_logo.png"));
    this->setWindowTitle(tr("我的记事本"));

    Ini();
}

MainWindow::~MainWindow()
{
    delete ui;
}
//初始化变量
void MainWindow::Ini()
{
    ui->mainToolBar->addAction(ui->action_new);
    ui->mainToolBar->addAction(ui->action_open);
    ui->mainToolBar->addAction(ui->action_save);
    ui->mainToolBar->addAction(ui->action_save_all);
    ui->mainToolBar->addAction(ui->action_saveas);
    ui->mainToolBar->addAction(ui->action_close_current);
    ui->mainToolBar->addAction(ui->action_close_all);
    ui->mainToolBar->addAction(ui->action_undo);
    ui->mainToolBar->addAction(ui->action_redo);

    text_Edit_Current = new QTextEdit();
    text_Edit_1= new QTextEdit();
    text_Edit_2= new QTextEdit();
    text_Edit_3= new QTextEdit();
    text_Edit_4= new QTextEdit();
    text_Edit_5= new QTextEdit();
    text_Edit_6= new QTextEdit();
    text_Edit_7= new QTextEdit();
    text_Edit_8= new QTextEdit();
    text_Edit_9= new QTextEdit();
    text_Edit_10= new QTextEdit();
    text_Edit_11= new QTextEdit();
    text_Edit_12= new QTextEdit();

    Current_Index=0;
    Next_Index=0;

    //connect(ui->tabWidget_list,SIGNAL())
}
/*************************************************
 *
 * *********************槽函数*********************
 *
 * ***********************************************/
//响应菜单栏新建操作窗口
void MainWindow::on_action_new_triggered()
{
    Action_New();
}
//响应菜单栏打开文件
void MainWindow::on_action_open_triggered()
{
    Action_Open();
}
//保存文件
void MainWindow::on_action_save_triggered()
{
    Action_Save();
}
void MainWindow::on_action_save_all_triggered()
{
    Action_Save_All();
}
//将文件另存为
void MainWindow::on_action_saveas_triggered()
{
    Action_Saveas();
}
//响应菜单栏关闭当前操作窗口
void MainWindow::on_action_close_current_triggered()
{
    Action_Close_Current();
}
//响应菜单关闭全部可操作窗口
void MainWindow::on_action_close_all_triggered()
{
    Action_Close_All();
}
//响应菜单栏退出
void MainWindow::on_action_exit_triggered()
{
    Action_Exit();
}
//直接调用文本框的复制粘贴等操作
void MainWindow::on_action_undo_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->undo();
        ui->statusBar->showMessage(tr("已撤销"));
    }
}
void MainWindow::on_action_redo_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->redo();
        ui->statusBar->showMessage(tr("已回滚"));
    }
}
void MainWindow::on_action_cut_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->cut();
        ui->statusBar->showMessage(tr("已剪切"));
    }
}
void MainWindow::on_action_copy_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->copy();
        ui->statusBar->showMessage(tr("已复制"));
    }
}
void MainWindow::on_action_paste_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->paste();
        ui->statusBar->showMessage(tr("已粘贴"));
    }
}
void MainWindow::on_action_delete_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->clear();
        ui->statusBar->showMessage(tr("已清空"));
    }
}
void MainWindow::on_action_select_all_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->selectAll();
        ui->statusBar->showMessage(tr("已全选"));
    }
}
//设置字体，颜色，大小等
void MainWindow::on_action_size_plus_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        QFont font=text_Edit_Current->font();
        font.setPointSize(font.pointSize()+5);
        text_Edit_Current->setFont(font);
        ui->statusBar->showMessage(tr("字号增加5"));
    }
}
void MainWindow::on_action_size_redu_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        QFont font=text_Edit_Current->font();
        font.setPointSize(font.pointSize()-5);
        text_Edit_Current->setFont(font);
        ui->statusBar->showMessage(tr("字号减小5"));
    }
}
void MainWindow::on_action_color_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        QColor color = QColorDialog::getColor(Qt::blue);
        text_Edit_Current->setTextColor(color);

        ui->statusBar->showMessage(tr("颜色设置成功"));
    }
}
//设置四种字体，二级菜单
void MainWindow::on_action_1_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->setFont(QFont(tr("隶书"), 14));
    }
}
void MainWindow::on_action_2_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->setFont(QFont(tr("宋体"), 14));
    }
}
void MainWindow::on_action_3_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->setFont(QFont(tr("楷体"), 14));
    }
}
void MainWindow::on_action_4_triggered()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        text_Edit_Current->setFont(QFont(tr("黑体"), 14));
    }
}
//其他
void MainWindow::on_action_brief_triggered()
{
    info=new Info(1);
    info->exec();
}
void MainWindow::on_action_explain_triggered()
{
    info=new Info(2);
    info->exec();
}
/*************************************************
 *
 * *******************功能函数*********************
 *
 * ***********************************************/

/*********************查找文本编辑框*********************/
QTextEdit* MainWindow::Find_Current_Text_Edit(int index)
{
    switch(index)
    {
    case 0:
        return text_Edit_1;
    case 1:
        return text_Edit_2;
    case 2:
        return text_Edit_3;
    case 3:
        return text_Edit_4;
    case 4:
        return text_Edit_5;
    case 5:
        return text_Edit_6;
    case 6:
        return text_Edit_7;
    case 7:
        return text_Edit_8;
    case 8:
        return text_Edit_9;
    case 9:
        return text_Edit_10;
    case 10:
        return text_Edit_11;
    case 11:
        return text_Edit_12;
    default:
        //QMessageBox::critical(this, tr("错误"),tr("打开窗口上限"), QMessageBox::Ok);
        return NULL;
    }
}
/*********************新建对话窗口*********************/
void MainWindow::Action_New()
{
    text_Edit_Current=Find_Current_Text_Edit(Next_Index);
    //QTextEdit *text_Edit=new QTextEdit();
    if(text_Edit_Current!=NULL)
    {
        if(Next_Index < MAX_TEXT_EDIT)
        {
            Next_Index++;
        }

        QString fileName=tr("新建文本_")+QString::number(Next_Index);
        ui->tabWidget_list->insertTab(Next_Index, text_Edit_Current, fileName);
        ui->tabWidget_list->setTabsClosable(Next_Index);

        ui->tabWidget_list->setCurrentIndex(Next_Index-1);
        //ui->tableView->indexWidget();

        ui->statusBar->showMessage(tr("新建文件成功"));
    }
    else
    {
        QMessageBox::critical(this, tr("错误"),tr("打开窗口上限"), QMessageBox::Ok);
        ui->statusBar->showMessage(tr("文件上限"));
    }
}
/***************打开文件 允许打开多个文件 不能重复打开同一个文件****************/
void MainWindow::Action_Open()
{
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this, tr("打开文件"),"", tr("文本文件(*.txt)"));

    if(!fileName.isNull())
    {
        //判断文件是否打开过
        int i=0;
        while( i < ui->tabWidget_list->count() )
        {
            if(fileName==ui->tabWidget_list->tabText(i))
            {
                ui->tabWidget_list->setCurrentIndex(i);
                return;
            }
            i++;
        }

        QFile file(fileName);
        if(!file.open(QFile::ReadOnly|QFile::Text))
        {
            QMessageBox::information(this, tr("Error"),tr("read file error:&%1").arg(file.errorString()));
            return;
        }

        QTextStream in(&file);
        //产生一个text_edit用于显示文件文字或用户编辑
        //QTextEdit *text_Edit=new QTextEdit();
        text_Edit_Current=Find_Current_Text_Edit(Next_Index);
        if(text_Edit_Current!=NULL)
        {
            if(Next_Index < MAX_TEXT_EDIT)
            {
                Next_Index++;
            }

            //将text_edit加入到tabWidget_list中以便同时能够操作多个text_edit
            ui->tabWidget_list->insertTab(Next_Index, text_Edit_Current, fileName);
            ui->tabWidget_list->setTabsClosable(Next_Index);
            ui->tabWidget_list->setCurrentIndex(Next_Index-1);
            //将文字显示在text_edit中
            text_Edit_Current->setPlainText(in.readAll());
            ui->statusBar->showMessage(tr("打开文件成功，文件路径：")+fileName);
        }
        else
        {
            QMessageBox::critical(this, tr("错误"),tr("打开窗口上限"), QMessageBox::Ok);
            ui->statusBar->showMessage(tr("文件上限"));
        }
    }
}
/***************保存文件 ****************/
void MainWindow::Action_Save()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    QString file_path=ui->tabWidget_list->tabText(Current_Index);

    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        if(file_path.left(5)==tr("新建文本_"))
        {
            file_path=tr("./")+file_path+tr(".txt");
        }

        QFile file(file_path);//文件命名

        if (!file.open(QFile::WriteOnly | QFile::Text))		//检测文件是否打开
        {
            QMessageBox::information(this, "错误", "文本路径错误");
            return ;
        }
        QTextStream out(&file);					//分行写入文件
        out << text_Edit_Current->toPlainText();
        ui->statusBar->showMessage(tr("文件保存成功,保存路径：")+file_path);
    }
    else
    {
        ui->statusBar->showMessage(tr("未打开文件"));
    }
}
/***************保存所有打开文件****************/
void MainWindow::Action_Save_All()
{
    int i=0;
    QString file_path;
    while( i < ui->tabWidget_list->count() )
    {
        text_Edit_Current=Find_Current_Text_Edit(i);
        if(text_Edit_Current!=NULL)
        {
            file_path=ui->tabWidget_list->tabText(i);

            if(file_path.left(5)==tr("新建文本_"))
            {
                file_path=tr("./")+file_path+tr(".txt");
            }

            QFile file(file_path);//文件命名

            if (!file.open(QFile::WriteOnly | QFile::Text))		//检测文件是否打开
            {
                QMessageBox::information(this, tr("错误"), tr("文件路径错误"));
                return ;
            }
            QTextStream out(&file);					//分行写入文件
            out << text_Edit_Current->toPlainText();

            ui->statusBar->showMessage(tr("文件保存成功,保存路径：")+file_path);
        }
        i++;
    }
}
/***************将文件另存为****************/
void MainWindow::Action_Saveas()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    QString fileName=ui->tabWidget_list->tabText(Current_Index);

    text_Edit_Current=Find_Current_Text_Edit(Current_Index);
    if(text_Edit_Current!=NULL)
    {
        QString file_path = QFileDialog::getSaveFileName(this,tr("文件另存为"),fileName,tr("文本文件(*.txt)"));

        QFile file(file_path);//文件命名

        if (!file.open(QFile::WriteOnly | QFile::Text))		//检测文件是否打开
        {
            QMessageBox::information(this, "提示", "取消另存");
            return ;
        }
        QTextStream out(&file);					//分行写入文件
        out << text_Edit_Current->toPlainText();

        ui->statusBar->showMessage(tr("文件保存成功,保存路径：")+file_path);
    }
    else
    {
        ui->statusBar->showMessage(tr("未打开文件"));
    }
}
/*******************关闭当前可操作窗口*********************/
void MainWindow::Action_Close_Current()
{
    Current_Index=ui->tabWidget_list->currentIndex();
    ui->tabWidget_list->removeTab(Current_Index);
    Next_Index--;
    //Current_Index=ui->tabWidget_list->currentIndex();
    ui->statusBar->showMessage(tr("已关闭当前文件"));
}
/*******************关闭全部可操作窗口*********************/
void MainWindow::Action_Close_All()
{
    while(Next_Index--)
    {
       ui->tabWidget_list->removeTab(Next_Index);
    }
    ui->statusBar->showMessage(tr("已关闭所有文件"));
    Next_Index=0;
}
/*********************程序退出操作*********************/
void MainWindow::Action_Exit()
{
    exit(0);
}

/*********************关闭选中窗口*********************/
void MainWindow::on_tabWidget_list_tabCloseRequested(int index)
{
    //Current_Index=ui->tabWidget_list->currentIndex();
    if(Current_Index==index)
    {
        Action_Close_Current();
    }
    else
    {
        ui->tabWidget_list->removeTab(index);
        Next_Index--;
    }
    //Current_Index=ui->tabWidget_list->currentIndex();
    //ui->statusBar->showMessage(tr("已关闭当前文件"));
}
