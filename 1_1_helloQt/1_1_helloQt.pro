#-------------------------------------------------
#
# Project created by QtCreator 2020-03-20T16:55:16
#
#-------------------------------------------------

# 注释 快捷键：Ctrl + /
# pro 配置详解 参考https://blog.csdn.net/liang19890820/article/details/51774724
#                https://www.cnblogs.com/wanghuixi/p/9572863.html

# 使用core gui模块
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#生成最后目标的名字
TARGET = 1_1_helloQt
#模板变量告诉qmake为这个应用程序生成哪种makefile。 app(应用程序) lib(生成库) subdirs(生成库) aux vcapp vclib(VB VC)
TEMPLATE = app
#工程的依赖路径
#DEPENDPATH +=
#指定生成目标的路径
DESTDIR  = $$PWD/../bin

#仅适用于Windows，指定的图标应该包含在一个生成的.rc文件里。如果RC_FILE 和RES_FILE变量都没有设置这才可利用。
#RC_ICONS
#加载要用到的语言翻译(.ts)文件。
#TRANSLATIONS

#指RCC将qrc文件转化为头文件所存放的目录
#RCC_DIR
#指定来自uic的所有中间文件放置的目录（.ui文件转化成ui_*.h文件的存放目录）。
#UI_DIR
#MOC命令将含Q_OBJECT的头文件转换为标准的头文件存放的目录
#MOC_DIR
#程序图标
#RC_FILE

#qmake添加这个变量的值作为编译器C预处理器宏(-D选项)  往往可以指定项目的特殊版本（比如：正式版、试用版）、对一些特殊功能模块（比如：加密狗）进行限制等。
DEFINES += QT_DEPRECATED_WARNINGS
#ifdef QT_DEPRECATED_WARNINGS
    #Do something
#else
    #Do something
#endif

#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#指定编译器选项和项目配置，值由qmake内部识别并具有特殊意义 告诉qmake应用程序的配置信息
#这个变量可以用来指定是生成debug模式还是release模式，也可以都生成。
#也可以用来打开编译器警告(warn_on输出尽可能多的警告信息)或者关闭(warn_off -编译器会输出尽可能少的警告信息)。还可以用来配置要Qt加载库。
#想要qt+多线程：CONFIG+=qt thread
#启用c++11支持。
CONFIG += c++11
#LIBS：加载动态库
#LIBS =
##include目录
#INCLUDEPATH =
#源文件
SOURCES += \
        main.cpp \
        mainwindow.cpp
#头文件
HEADERS += \
        mainwindow.h
#UI文件
FORMS += \
        mainwindow.ui

#指定资源文件 (qrc) 的名称
#RESOURCES

#windows是win32，Linux平台是unix。

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#以通过在其它任何一个变量的变量名前加$$来把这个变量的值分配给当前的变量。
#例如：MY_DEFINES= $$DEFINE
#将DEFINE的值分配给MY_DEFINES

#Hello Qt

#Qt中使用Git进行版本控制 参考https://blog.csdn.net/qq_39557240/article/details/100188147
#配置git 工具-->选项-->版本控制-->配置填上git位置(E:\Program Files\Git)
#创建仓库 工具-->Git-->创建仓库 工程下会生成.git

message("-----------------------------")
message("从此深耕不回头")
message("www.bluseli.cn")
message("贪贪贪丶慎独")
message("1 .pro文件详解")
message("-----------------------------")
