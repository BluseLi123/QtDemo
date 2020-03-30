########################################################################################################
#Hello Qt

pro 配置详解 参考	https://blog.csdn.net/liang19890820/article/details/51774724
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

##如何编写规范的README.md 参考https://www.cnblogs.com/wj-1314/p/8547763.html
	Markdown的语法
	#                                     文字标题
	-                                     列表
	>                                     引用
	*斜体*  **粗体**                       斜体和加粗
	[文本](链接)                           链接
	***                                   分割类容
	| Item | Value | Date |
	| Item | Value | Date |               表格

##Qt程序发布 参考https://www.cnblogs.com/xiangtingshen/p/10988325.html
	程序以release版本编译
	打开cmd 并通过cd命令并切换到.exe所在目录
	输入打包命令 windeployqt yourappname.exe
	如果还有dll缺失，请手动复制  dll在你使用的编译器的bin目录

########################################################################################################