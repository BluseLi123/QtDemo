########################################################################################################

#Hello Qt
[TOC]
##pro 配置详解
参考	https://blog.csdn.net/liang19890820/article/details/51774724
		https://www.cnblogs.com/wanghuixi/p/9572863.html
注释 快捷键：Ctrl + /

##Qt中使用Git进行版本控制 参考https://blog.csdn.net/qq_39557240/article/details/100188147
Git创建创库    可参考https://jingyan.baidu.com/article/295430f18d33490c7e0050e4.html
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
2，当你在master branch上使用git pull时，没有指定remote和branch，那么git就会采用默认的remote（也就是origin）来merge在master branch上所有的改变
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

##如何编写规范的README.md 参考https://www.cnblogs.com/wj-1314/p/8547763.html https://www.jianshu.com/p/4d1b104c7ab4
Markdown的语法
*斜体*
**粗体**
***加粗斜体***
~~删除线~~

# 一级标题
## 二级标题
### 三级标题
#### 四级标题
##### 五级标题
###### 六级标题
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
Markdown
: 轻量级文本标记语言，可以转换成html，pdf等格式（左侧有一个可见的冒号和四个不可见的空格）
代码块 2
: 这是代码块的定义（左侧有一个可见的冒号和四个不可见的空格）

代码块（左侧有八个不可见的空格
</pre>
</dd>
</dl>

* 轻轻的我走了， 正如我轻轻的来； 我轻轻的招手， 作别西天的云彩。
那河畔的金柳， 是夕阳中的新娘； 波光里的艳影， 在我的心头荡漾。
软泥上的青荇， 油油的在水底招摇； 在康河的柔波里， 我甘心做一条水草！
* 那榆荫下的一潭， 不是清泉， 是天上虹； 揉碎在浮藻间， 沉淀着彩虹似的梦。
寻梦？撑一支长篙， 向青草更青处漫溯； 满载一船星辉， 在星辉斑斓里放歌。
但我不能放歌， 悄悄是别离的笙箫； 夏虫也为我沉默， 沉默是今晚的康桥！
悄悄的我走了， 正如我悄悄的来； 我挥一挥衣袖， 不带走一片云彩。

* 阅读的方法:
> 打开书本。
> 打开电灯。

> 这是一个有两段文字的引用,
> 无意义的占行文字1.
> 无意义的占行文字2.
>
> 无意义的占行文字3.
> 无意义的占行文字4.

1986\. What a great season.

>>> 请问 Markdwon 怎么用？ - 小白
>> 自己看教程！ - 愤青
> 教程在哪？ - 小白

美丽花儿：
![美丽花儿](http://upload-images.jianshu.io/upload_images/4416412-cc44a55a6b975181.jpg?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240 "美丽花儿")

使用 Markdown[^1]可以效率的书写文档, 直接转换成 HTML[^2], 你可以使用 Leanote[^Le] 编辑器进行书写。

[^1]:Markdown是一种纯文本标记语言

[^2]:HyperText Markup Language 超文本标记语言

[^Le]:开源笔记平台，支持Markdown和笔记直接发为博文

质能守恒方程可以用一个很简洁的方程式 $E=mc^2$ 来表达。

$\sum_{i=1}^n a_i=0$

$f(x_1,x_x,\ldots,x_n) = x_1^2 + x_2^2 + \cdots + x_n^2 $

$\sum^{j-1}_{k=0}{\widehat{\gamma}_{kj} z_k}$


flow
st=>start: Start:>https://www.zybuluo.com
io=>inputoutput: verification
op=>operation: Your Operation
cond=>condition: Yes or No?
sub=>subroutine: Your Subroutine
e=>end
st->io->op->cond
cond(yes)->e
cond(no)->sub->io

学号|姓名|分数
-|-|-
小明|男|75
小红|女|79
小陆|男|92

产品|价格
-|-:
Leanote 高级账号|60元/年
Leanote 超级账号|120元/年

* * *
***
*****
- - -

C语言里的函数scanf()怎么使用？
</pre>

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

<div class="footer">
© 2004 Foo Corporation
</div>

<table>
<tr>
<th rowspan="2">值班人员</th>
<th>星期一</th>
<th>星期二</th>
<th>星期三</th>
</tr>
<tr>
<td>李强</td>
<td>张明</td>
<td>王平</td>
</tr>
</table>

---------------------------------------

##Qt程序发布 参考https://www.cnblogs.com/xiangtingshen/p/10988325.html
	程序以release版本编译
	打开cmd 并通过cd命令并切换到.exe所在目录
	输入打包命令 windeployqt yourappname.exe
	如果还有dll缺失，请手动复制  dll在你使用的编译器的bin目录

########################################################################################################