#-------------------------------------------------
#
# Project created by QtCreator 2020-03-20T17:35:42
#
#-------------------------------------------------

########################################################################################################
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 1_2_helloQt
TEMPLATE = app
DESTDIR  = $$PWD/../bin
TRANSLATIONS = language.ts
RC_FILE +=proj.rc
CONFIG += c++11
SOURCES += \
        main.cpp
########################################################################################################
#########Qt5.13配置环境变量
#在系统属性-->高级-->环境变量-->系统变量-->path中添加 编译环境：
#我的是这个 E:\Qt\Qt5.13.0\5.13.0\mingw73_32\bin
#         E:\Qt\Qt5.13.0\5.13.0\mingw73_64\bin
#然后将添加的几项上移动顶部（之前报过错）
#然后编译之后可以直接运行.exe可执行文件。

########代码创建窗口 不使用UI

########加载程序ICON 为可执行程序写入版本信息 参考https://www.cnblogs.com/Braveliu/p/4506844.html
#新建.rc文件 然后添加代码如下
# IDI_ICON1 ICON "image/AppIcon.ico"
# #pragma code_page(65001)
# #if defined(UNDER_CE)
# #include <winbase.h>
# #else
# #include <winver.h>
# #endif

# VS_VERSION_INFO VERSIONINFO
#    FILEVERSION 1,0,0,10
#    PRODUCTVERSION 1,0,0,10
#    FILEFLAGSMASK 0x3fL
# #ifdef _DEBUG
#    FILEFLAGS VS_FF_DEBUG
# #else
#    FILEFLAGS 0x0L
# #endif
#    FILEOS VOS__WINDOWS32
#    FILETYPE VFT_DLL
#    FILESUBTYPE 0x0L
#    BEGIN
#        BLOCK "StringFileInfo"
#        BEGIN
#            BLOCK "080404b0"
#            BEGIN
#                VALUE "CompanyName", "www.bluseli.cn"
#                VALUE "FileDescription", "www.bluseli.cn"
#                VALUE "FileVersion", "1.0.0.10"
#                VALUE "ProductVersion", "1.0.0.10"
#                VALUE "LegalCopyright", "版权所有 (C) www.bluseli.cn"
#                VALUE "LegalTrademarks", "www.bluseli.cn"
#                VALUE "OriginalFilename", "1_2_helloQt.exe"
#                VALUE "ProductName", "www.bluseli.cn"
#                VALUE "InternalName", "1_2_helloQt.exe"
#           END
#        END

#        BLOCK "VarFileInfo"
#        BEGIN
#            VALUE "Translation", 0x804, 1200
#        END
#    END

#最后.pro中加入 RC_FILE +=proj.rc


########Qt中tr的使用 参考https://blog.csdn.net/tju355/article/details/7253133
#tr是用来实现国际化
#tr是经过多级函数调用才实现了翻译操作，是有代价的
#QObject::tr()
#QCoreApplication::translate()
#QTextCodec::setCodecForLocale

#编码问题(QString的中文问题)
#QString 采用的unicode
#当将窄字符串赋值到QString时，我们需要告诉它我们的窄串采用的何种编码(gbk?、utf-8?)
#究竟何种编码主要取决于我们的源代码文件的编码(windows上一般是gbk，其他平台一般utf-8)
#如果不指定编码，s1,s2,s3将全部都是(国内大多数人所称的)乱码。因为QString将这些const char *按照latin1来解释的，而不是用户期待的gbk或utf8。
#QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));
#QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));

########tr如何实现翻译 参考https://blog.csdn.net/menger3388/article/details/86011411
#.pro中添加TRANSLATIONS = language.ts
#工具-->外部-->Qt语言家==>更新翻译
#然后工程下会生成language.ts
#用Qt语言家(E:\Qt\Qt5.13.0\5.13.0\mingw73_32\bin\linguist.exe)打开这个文件 然后添加翻译 生成.qm文件
#工具-->外部-->Qt语言家==>发布翻译
#代码中加载翻译文件
#QTranslator *qtTranslator = new QTranslator;
#if(qtTranslator->load("./language.qm")){
#  a.installTranslator(qtTranslator);
#}
########################################################################################################
message("-----------------------------")
message("从此深耕不回头")
message("www.bluseli.cn")
message("贪贪贪丶慎独")
message("2 .helloQt_2")
message("-----------------------------")

HEADERS +=
