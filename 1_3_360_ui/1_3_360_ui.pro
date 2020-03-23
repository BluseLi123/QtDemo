#-------------------------------------------------
#
# Project created by QtCreator 2020-01-19T09:49:00
#
#-------------------------------------------------

########################################################################################################
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 1_3_360_ui
TEMPLATE = app
DESTDIR  = $$PWD/../bin
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11
SOURCES += \
        main.cpp \
        mainwindow.cpp
HEADERS += \
        mainwindow.h
FORMS += \
        mainwindow.ui
RESOURCES += \
        image.qrc
########################################################################################################
########窗口布局
#直接编辑UI文件，样式表设计样式
#方便倒是方便，总感觉不太好

########Qt控件
#这里简单的使用了几个控件 后面专门弄一个控件
#QLabel
#QPushButton
#QToolButton
#QHBoxLayout
#QVBoxLayout
#QWidget
#QStackedWidget
#控件都是从控件栏里面拖出来

########QSS 可参考CSS https://www.w3school.com.cn/cssref/index.asp
#这先简单的用一下，后面每种控件写几种样式

########窗口整体拖动
#示例代码来自某个博主，具体出自哪儿我给忘了，网上还很多
#大概实现思路就是重写了鼠标按下事件，移动事件，抬起事件
#当鼠标按下时将获取鼠标位置，移动事件时改变窗口位置，抬起时结束。
#    //拖拽窗口
#    bool        windowsDrag;
#    QPoint      mouseStartPoint;
#    QPoint      windowTopLeftPoint;
#    //重写事件
#    void mousePressEvent(QMouseEvent *event);
#    void mouseMoveEvent(QMouseEvent *event);
#    void mouseReleaseEvent(QMouseEvent *event);

########资源文件 .qrc
#也就是把所有的资源 图片、Icon等列在文件中，
#使用资源的时候这里用到了两种
#    使用Icon、Pixmap加载
#    使用CSS加载
#libpng warning: iCCP: known incorrect sRGB profile
#这个报错是资源的问题 刘典武刘大佬写了消除PNG警告的工具，是的源码我还没看~~

########UI文件
#直接看UI源码 XML格式

########################################################################################################
message("-----------------------------")
message("从此深耕不回头")
message("www.bluseli.cn")
message("贪贪贪丶慎独")
message("3 .360ui")
message("-----------------------------")