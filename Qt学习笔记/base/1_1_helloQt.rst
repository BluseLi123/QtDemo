#Hello Qt

##pro 配置详解  
参考https://blog.csdn.net/liang19890820/article/details/51774724  https://www.cnblogs.com/wanghuixi/p/9572863.html  
注释 快捷键：Ctrl + /    

##Qt中使用Git进行版本控制 
参考https://blog.csdn.net/qq_39557240/article/details/100188147  
Git创建创库
可参考https://jingyan.baidu.com/article/295430f18d33490c7e0050e4.html  
配置git		工具-->选项-->版本控制-->配置填上git位置(E:\Program Files\Git)    
创建仓库	工具-->Git-->创建仓库 工程下会生成.git  
创建连接	工具-->Git-->Remote Repository-->Manager Remote-->添加    名称->仓库名 URL->仓库连接  
			工具-->Git-->Remote Repository-->Fetch  
Commit		工具-->Git-->Local Repository-->Commit    填好Email->Description->selectall->commit  
Push		工具-->Git-->Remote Repository-->Push  

git push 被拒绝 ! [rejected] 参考 https://blog.csdn.net/mp624183768/article/details/84979850  
第一种解决方法是强推  
即利用强覆盖方式用你本地的代码替代git仓库内的内容  
git push -f  
第二种解决办法是先把git的东西fetch到你本地然后merge后再push  
git fetch  
git merge  
这两句相当于$ git pull  
如果出现[branch "master"]  
	 remote = origin  
	 merge = refs/heads/master  
这说明:  
1，当你处于master branch, 默认的remote就是origin。  
2，当你在master branch上使用git  pull时，没有指定remote和branch，那么git就会采用默认的remote（也就是origin）来merge在master branch上所有的改变  
如果不想或者不会编辑config文件的话，可以在bash上输入如下命令行：  
	git config branch.master.remote origin  
	git config branch.master.merge refs/heads/master  
然后再git pull,重新git push你要上传的文件。  

error: failed to push some refs to  
git remote add origin https://github.com/xxx  
git push -u xxx master  
nothing added to commit but untracked files present  
git add xxx  

常用命令  
git init  
git commit -m xxx  
git add -A  
OK  

##如何编写规范的README.md  
参考https://www.jianshu.com/p/4d1b104c7ab4 https://www.cnblogs.com/wj-1314/p/8547763.html   
Markdown的语法  
*斜体*  
**粗体**  
***加粗斜体***  
~~删除线~~  
/# 一级标题  
/## 二级标题  
/### 三级标题  
/#### 四级标题  
/##### 五级标题  
/###### 六级标题  
欢迎访问[贪贪贪丶慎独](http://www.bluseli.cn)    
欢迎访问[贪贪贪丶慎独](http://www.bluseli.site "贪贪贪丶慎独")    
Markdown(这里使用到的语法)[参考][1]简书作者[安卓_背包客][],非商业转载只需要注明出处哈~~    
[1]:https://www.jianshu.com/p/4d1b104c7ab4 "参考"    
[安卓_背包客]:https://www.jianshu.com/u/bba3892c501f    
<http://https://github.com/BluseLi123/QtDemo/>    
<address@https://github.com/BluseLi123/QtDemo>    
## 0\. 目录{#index}  
跳转到[目录](#index)  
- 无序列表项 一  
- 无序列表项 二  
- 无序列表项 三  
1. 有序列表项 一  
2. 有序列表项 二  
3. 有序列表项 三  

* 贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独
贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独
贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独
* 贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独
贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独
贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独贪贪贪丶慎独

* 阅读的方法:
> 树上的男爵。
> 我们的祖先。

> 这是一个有两段文字的引用,
> 最近在看.
> 还行.
>
> 要不要考虑看下？
> 卡尔维诺.

>>> 请问 Markdwon 怎么用？ - 小白  
>> 我也没有下细去研究！ - 作者  
> 我觉得能用就行？ - 不要喷我  

我的酷狗：
![酷狗音乐](https://github.com/BluseLi123/QtDemo/blob/master/screenshot/360ui.png "其实是360")

使用 Markdown
[^1]可以效率的书写文档, 直接转换成 HTML[^2], 你可以使用 Leanote[^Le] 编辑器进行书写。
[^1]:Markdown是一种纯文本标记语言
[^2]:HyperText Markup Language 超文本标记语言
[^Le]:开源笔记平台，支持Markdown和笔记直接发为博文

质能守恒方程可以用一个很简洁的方程式 $E=mc^2$ 来表达。
$\sum_{i=1}^n a_i=0$  
$f(x_1,x_x,\ldots,x_n) = x_1^2 + x_2^2 + \cdots + x_n^2 $  
$\sum^{j-1}_{k=0}{\widehat{\gamma}_{kj} z_k}$  

学号|姓名|分数
-|-|-
小明|男|75
小红|女|79
小陆|男|92

产品|价格
-|-:
还是不要出现 的好|￥元/年
主要是我也没 用过|$元/年

* * *
***
*****
- - -

C语言里的函数scanf()怎么使用？
<pre>
#include <stdio.h>
int main(void)
{
	printf("Hello world\n");
}

#include <stdio.h>
int main(void)
{
	printf("Hello world\n");
}
、、、
</pre>

<div class="footer">© 2020 Bluseli Corporation</div>

<table>
<tr>
<th rowspan="2">值班人员</th>
<th>星期一</th>
<th>星期二</th>
<th>星期三</th>
</tr>
<tr>
<td>XXX</td>
<td>XXXX</td>
<td>XX</td>
</tr>
</table>

MarkDown写目录
两个空格换行  

##Qt程序发布  
参考https://www.cnblogs.com/xiangtingshen/p/10988325.html  
程序以release版本编译  
打开cmd 并通过cd命令并切换到.exe所在目录  
输入打包命令 windeployqt yourappname.exe  
如果还有dll缺失，请手动复制  dll在你使用的编译器的bin目录 


#代码创建窗口 不使用UI  对话框和主窗口 信号和槽  
##Qt5.13配置环境变量  
在系统属性-->高级-->环境变量-->系统变量-->path中添加 编译环境：  
我的是这个	E:\Qt\Qt5.13.0\5.13.0\mingw73_32\bin  
			E:\Qt\Qt5.13.0\5.13.0\mingw73_64\bin  
然后将添加的几项上移动顶部（之前报过错）  
然后编译之后可以直接运行.exe可执行文件。  

##加载程序ICON 为可执行程序写入版本信息 参考https://www.cnblogs.com/Braveliu/p/4506844.html  
新建.rc文件 然后添加代码如下  
<pre>
	IDI_ICON1 ICON "image/AppIcon.ico"
	#pragma code_page(65001)
	#if defined(UNDER_CE)
	#include <winbase.h>
	#else
	#include <winver.h>
	#endif

	VS_VERSION_INFO VERSIONINFO
	FILEVERSION 1,0,0,10
	PRODUCTVERSION 1,0,0,10
	FILEFLAGSMASK 0x3fL
	#ifdef _DEBUG
		FILEFLAGS VS_FF_DEBUG
	#else
		FILEFLAGS 0x0L
	#endif
	FILEOS VOS__WINDOWS32
	FILETYPE VFT_DLL
	FILESUBTYPE 0x0L
	BEGIN
		BLOCK "StringFileInfo"
			BEGIN
				BLOCK "080404b0"
					BEGIN
						VALUE "CompanyName", "www.bluseli.cn"
						VALUE "FileDescription", "www.bluseli.cn"
						VALUE "FileVersion", "1.0.0.10"
						VALUE "ProductVersion", "1.0.0.10"
						VALUE "LegalCopyright", "版权所有 (C) www.bluseli.cn"
						VALUE "LegalTrademarks", "www.bluseli.cn"
						VALUE "OriginalFilename", "1_2_helloQt.exe"
						VALUE "ProductName", "www.bluseli.cn"
						VALUE "InternalName", "1_2_helloQt.exe"
					END
				END

			BLOCK "VarFileInfo"
		BEGIN
			VALUE "Translation", 0x804, 1200
		END
	END
</pre>
最后.pro中加入 RC_FILE +=proj.rc  


##Qt中tr的使用  
参考https://blog.csdn.net/tju355/article/details/7253133  
tr是用来实现国际化  
tr是经过多级函数调用才实现了翻译操作，是有代价的  
QObject::tr()  
QCoreApplication::translate()  
QTextCodec::setCodecForLocale  

##编码问题(QString的中文问题)  
QString 采用的unicode
当将窄字符串赋值到QString时，我们需要告诉它我们的窄串采用的何种编码(gbk?、utf-8?)  
究竟何种编码主要取决于我们的源代码文件的编码(windows上一般是gbk，其他平台一般utf-8)  
如果不指定编码，s1,s2,s3将全部都是(国内大多数人所称的)乱码。因为QString将这些const char *按照latin1来解释的，而不是用户期待的gbk或utf8。  
QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));  
QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));  

##tr如何实现翻译  
参考https://blog.csdn.net/menger3388/article/details/86011411  
-.pro中添加TRANSLATIONS = language.ts  
-工具-->外部-->Qt语言家==>更新翻译  
-然后工程下会生成language.ts  
-用Qt语言家(E:\Qt\Qt5.13.0\5.13.0\mingw73_32\bin\linguist.exe)打开这个文件 然后添加翻译 生成.qm文件  
-工具-->外部-->Qt语言家==>发布翻译  
-代码中加载翻译文件  
<pre>
QTranslator *qtTranslator = new QTranslator;
if(qtTranslator->load("./language.qm")){
	a.installTranslator(qtTranslator);
}
</pre>