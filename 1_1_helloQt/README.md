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
