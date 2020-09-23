Hello Qt
--------------------------------------------

pro 配置详解  
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

参考 https://blog.csdn.net/liang19890820/article/details/51774724  https://www.cnblogs.com/wanghuixi/p/9572863.html  

注释 快捷键：Ctrl + /    

Qt中使用Git进行版本控制 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

参考 https://blog.csdn.net/qq_39557240/article/details/100188147  

Git创建创库

可参考 https://jingyan.baidu.com/article/295430f18d33490c7e0050e4.html  

- 配置git	

  工具-->选项-->版本控制-->配置填上git位置(E:\Program Files\Git)   

- 创建仓库	

  工具-->Git-->创建仓库 工程下会生成.git  

- 创建连接

  工具-->Git-->Remote Repository-->Manager Remote-->添加    名称->仓库名 URL->仓库连接  
  工具-->Git-->Remote Repository-->Fetch  

- Commit

  工具-->Git-->Local Repository-->Commit    填好Email->Description->selectall->commit  

- Push

  工具-->Git-->Remote Repository-->Push  

git push 被拒绝 ! [rejected] 

参考 https://blog.csdn.net/mp624183768/article/details/84979850 

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

Qt中使用git进行版本控制实际上就是git的使用。


如何编写规范的README.md 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

参考 https://www.jianshu.com/p/4d1b104c7ab4 https://www.cnblogs.com/wj-1314/p/8547763.html   

Markdown的语法  

.. code-block:: 

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

rst语法
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
现在已经更改为rst格式的文档了，我觉得这个更方便些。
有参考野火的REST语法 https://ebf-contribute-guide.readthedocs.io/zh_CN/latest/rest-syntax/base-syntax.html
也有参考博客：https://www.jianshu.com/p/1885d5570b37

.. code-block:: 

	野火sphinx文档规范

	图片
	.. image:: media/logo.png
	:align: center

	代码引用
	.. literalinclude:: ../../base_code/hello.c
	:caption: ../../base_code/hello.c
	:language: c
	:linenos:

	类似docx的题注引用
	.. literalinclude:: ../../base_code/hello.c
	:caption: ../../base_code/hello.c
	:language: c
	:name: 代码清单或自己起的引用名字
	:linenos:

	引用的方式是使用 ":name:"定义的名字加下划线 "_",如：

	代码清单或自己起的引用名字_

	.. image:: ../media/rest-syntax/pic-video/logo.png
	:align: center
	:name: 野火logo

	引用的方式是使用 ":name:"定义的名字加下划线 "_",如：

	野火logo_

	.. list-table:: Frozen Delights!
		:widths: 15 10 30
		:header-rows: 1
		:name: 测试表格

		* - Treat
		- Quantity
		- Description
		* - Albatross
		- 2.99
		- On a stick!
		* - Crunchy Frog
		- 1.49
		- If we took the bones out, it wouldn't be
			crunchy, now would it?
		* - Gannet Ripple
		- 1.99
		- On a stick!

	引用的方式是使用 ":name:"定义的名字加下划线 "_",如：

	测试表格_


	首行          .. vim: syntax=rst

	ReST基础语法

	一级标题    
	==============================

	二级标题 安装工具
	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

	三级标题 实现方式二 i_cdev变量
	------------------------------

	四级标题
	^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

	五级标题
	""""""""""""""""""""""""""""""

	六级标题
	******************************

	**强调**

	*斜体*

	``monospace,会变色，具体作用不清楚``


	无序列表
	---------------------------
	- hhhhhhhh
	- hhhhhhhh
	- hhhhhhhh
	- hhhhhhhh
	- hhhhhhhh
	- hhhhhhhh


	有序列表
	------------------------
	支持数字、大小写字母和罗马数字

	1. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh

	a. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh
	#. hhhhhhhh


	表格
	------------------------
	.. list-table:: Frozen Delights!
		:widths: 15 10 30
		:header-rows: 1

		* - Treat
		- Quantity
		- Description
		* - Albatross
		- 2.99
		- On a stick!
		* - Crunchy Frog
		- 1.49
		- If we took the bones out, it wouldn't be
			crunchy, now would it?
		* - Gannet Ripple
		- 1.99
		- On a stick!

	=====  =====  =======
	A      B      A and B
	=====  =====  =======
	False  False  False
	True   False  False
	False  True   False
	True   True   True
	=====  =====  =======

	.. csv-table:: Frozen Delights!
		:header: "Treat", "Quantity", "Description"
		:widths: 15, 10, 30

		"Albatross", 2.99, "On a stick!"
		"Crunchy Frog", 1.49, "If we took the bones out, it wouldn't be
		crunchy, now would it?"
		"Gannet Ripple", 1.99, "On a stick!"

	标志位

	超链接
	------------------------
	直接嵌入网址：
	`野火公司官网 <http://www.embedfire.com>`_

	使用引用的方式把具体网址定义在其它地方： `野火公司官网`_

	.. _野火公司官网: http://www.embedfire.com


	图片引用
	------------------------
	.. _my-reference-label支持中文:

	.. figure: ../media/rest-syntax/pic-video/logo.png
	:alt: 野火logo
	:align: center

	引用方式 :ref:`my-reference-label支持中文` 。


	表格引用
	------------------------
	.. _拨码开关启动配置表:

	.. table:: 拨码开关启动配置表

	==== ====== ========== ==== == ===
	编号 名称   NAND FLASH eMMC SD USB
	==== ====== ========== ==== == ===
	1    MODE0  0          0    0  1
	2    MODE1  1          1    1  0
	3    CFG1-4 1          0    0  X
	4    CFG1-5 0          1    0  X
	5    CFG1-6 0          1    1  X
	6    CFG1-7 1          0    0  X
	7    CFG2-3 0          1    0  X
	8    CFG2-5 0          0    1  X
	==== ====== ========== ==== == ===

	引用示例 :ref:`拨码开关启动配置表` 。
	自定义名称引用 :ref:`自定义名称 <拨码开关启动配置表>` 。


	引用文档
	------------------------
	自定义引用文字

	:doc:`引用本地的其它rst文档,rst后缀要省略，如about_us <../about_us>`

	使用标题文字
	:doc:`../about_us`


	使用标签引用文档
	------------------------
	:ref:`自定义链接文字 <about_embedfire>`

	:ref:`about_embedfire`


	跨文档引用标题
	------------------------
	文档A
	=============
	Some Document
	=============


	Internal Headline
	=================

	文档B
	===============
	Some Other Doc
	===============


	A link-  :ref:`Internal Headline`


	引用非rst文档
	------------------------
	:download:`引用非rst的本地文档 <../requirements.txt>`.


	快速定义代码块
	------------------------
	.. highlight:: sh

	此指令后如下的“::”定义的块都会以sh语法进行高亮，直到遇到下一条highlight指令。

	::

	#此命令在主机执行
	sudo apt install python
	echo "helloworld,this is a script test!"
	
	
	code-block代码高亮
	------------------------
	shell 高亮测试
	.. code-block:: sh
	:caption: test
	:name: test333
	:emphasize-lines: 2
	:linenos:

	#此命令在主机执行
	sudo apt install python
	echo "helloworld,this is a script test!"

	C高亮测试 
	.. code-block:: c
	:caption: c test
	:emphasize-lines: 4,5
	:linenos:

	#include <stdio.h>

	int main()
	{
		printf("hello, world! This is a C program.\n");
		for(int i=0;i<10;i++ ){
		printf("output i=%d\n",i);
		}

		return 0;
	}
	
	verilog高亮测试
	.. code-block:: v
	:caption: verilog test
	:emphasize-lines: 4,5
	:linenos:

	module  key_filter
	#(
		parameter CNT_MAX = 20'd999_999 //计数器计数最大值
	)
	(
		input   wire    sys_clk     ,   //系统时钟50Mhz
		input   wire    sys_rst_n   ,   //全局复位
		input   wire    key_in      ,   //按键输入信号

		output  reg     key_flag        //key_flag为1时表示消抖后检测到按键被按下
										//key_flag为0时表示没有检测到按键被按下
	);
	
	
	literalinclude直接嵌入本地文件并高亮（嵌入整个文件）
	------------------------
	插入C代码
	.. literalinclude:: ../../base_code/hello.c
	:caption: ../../base_code/hello.c
	:language: c
	:emphasize-lines: 5,7-12
	:linenos:
	:name: hello.c
	
	插入shell代码
	.. literalinclude:: ../../base_code/hello_world.sh
	:caption: ../../base_code/hello_world.sh
	:language: sh
	:linenos:
	
	插入Makefile代码
	.. literalinclude:: ../../base_code/Makefile
	:caption: ../../base_code/Makefile
	:language: makefile
	:linenos:
	
	
	literalinclude直接嵌入本地文件并高亮（嵌入文件的某部分）
	------------------------
	.. literalinclude:: ../../base_code/hello.c
	:caption: ../../base_code/hello.c
	:language: c
	:linenos:
	:lines: 1,3,5-8
	
	文件对比
	.. literalinclude:: ../../base_code/hello.c
	:diff: ../../base_code/hello_diff.c


	插入图片
	------------------------
	figure命令
	.. figure: ../media/rest-syntax/pic-video/logo.png
	:alt: 野火logo
	:align: center
	:caption: 野火logo
	
	image命令
	.. image:: ../media/rest-syntax/pic-video/logo.png
	:align: center
	:alt: 野火logo
	
	|logo|,使用"|宏名|"的形式替换文字。
	.. |logo| image:: ../media/rest-syntax/pic-video/logo.png

	.. image:: ../media/rest-syntax/pic-video/logo.png
	:align: center
	:width: 5.63529in
	:height: 0.97222in
	

	插入图片
	------------------------
	.. note:: This is a note admonition.
	This is the second line of the first paragraph.

	- The note contains all indented body elements
	following.
	- It includes this bullet list.

	.. hint:: This is a hint admonition.

	.. important:: This is a important admonition.

	.. tip:: This is a tip admonition.

	.. warning:: This is a warning admonition.

	.. caution:: This is a caution admonition.

	.. attention:: This is a attention admonition.

	.. error:: This is a error admonition.

	.. danger:: This is a danger admonition.


Qt程序发布  
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

参考 https://www.cnblogs.com/xiangtingshen/p/10988325.html  

程序以release版本编译  
打开cmd 并通过cd命令并切换到.exe所在目录  
输入打包命令 windeployqt yourappname.exe  
如果还有dll缺失，请手动复制  dll在你使用的编译器的bin目录 


代码创建窗口 不使用UI  对话框和主窗口 信号和槽  

Qt5.13配置环境变量  
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

在系统属性-->高级-->环境变量-->系统变量-->path中添加 编译环境：  
我的是这个

E:\Qt\Qt5.13.0\5.13.0\mingw73_32\bin  

E:\Qt\Qt5.13.0\5.13.0\mingw73_64\bin 

然后将添加的几项上移动顶部（之前报过错）  
然后编译之后可以直接运行.exe可执行文件。  


加载程序ICON 为可执行程序写入版本信息
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

参考 https://www.cnblogs.com/Braveliu/p/4506844.html  

新建.rc文件 然后添加代码如下 

.. code-block:: 

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


最后.pro中加入 
RC_FILE +=proj.rc  


Qt中tr的使用
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

参考 https://blog.csdn.net/tju355/article/details/7253133

tr是用来实现国际化  
tr是经过多级函数调用才实现了翻译操作，是有代价的  
QObject::tr()  
QCoreApplication::translate()  
QTextCodec::setCodecForLocale  

编码问题(QString的中文问题)  

QString 采用的unicode
当将窄字符串赋值到QString时，我们需要告诉它我们的窄串采用的何种编码(gbk?、utf-8?)  
究竟何种编码主要取决于我们的源代码文件的编码(windows上一般是gbk，其他平台一般utf-8)  
如果不指定编码，s1,s2,s3将全部都是(国内大多数人所称的)乱码。
因为QString将这些const char \*按照latin1来解释的，而不是用户期待的gbk或utf8。  

.. code-block::

	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));  
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));  

tr如何实现翻译
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

参考 https://blog.csdn.net/menger3388/article/details/86011411  

- .pro中添加TRANSLATIONS = language.ts  
- 工具-->外部-->Qt语言家==>更新翻译  
- 然后工程下会生成language.ts  
- 用Qt语言家(E:\Qt\Qt5.13.0\5.13.0\mingw73_32\bin\linguist.exe)打开这个文件 然后添加翻译 生成.qm文件  
- 工具-->外部-->Qt语言家==>发布翻译  
- 代码中加载翻译文件  

.. code-block::

	QTranslator *qtTranslator = new QTranslator;
	if(qtTranslator->load("./language.qm")){
		a.installTranslator(qtTranslator);
	}