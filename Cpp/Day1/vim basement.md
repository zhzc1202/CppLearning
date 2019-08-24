#  Vim Basic Usage
gedit aa.c
vim aa.c

三种状态：命令模式，末行模式，插入模式
vim filename进入命令模式
 命令模式i，a，o进入插入模式，ESC退出插入模式
 命令模式：进入末行模式，Enter返回到命令模式
 命令模式：wq保存退出
 Tips：shift + ：也能直接进入末行模式
 
另存为bb.c
w bb.c

vim hello.c
:q
实际上没有hellow.c,要用w保存一下。

教程：vimtutor，中文版vimtutor -g zh

hjkl

wq == shift + zz
shift + A 将光标进入行末，插入模式
dw：delete word删除word
de留空格，dw删除不留空格
d$:删除该行光标以后

输入0移到行首

光标
2w移到第2个单词首部
3e移到第3个单词末尾

d2w

dd删除整行
2dd
u回退一次，U回退整行，ctrl+R重做

dd删除
p粘贴

光标移动到字母按r，单个字符替换

ced删除单词进入插入模式
c2e

cw
c$

：set nu
: set nonu
: set ts = 4 //table space

gg第一行
shift g最后一行
500 shift g 指定第500行

ctrl g 文件状态


/errroor 查找
n下一个 N上一个
？逆向查找

查找括号：把光标放在h括号上，%显示配对括号

替换类命令：
：s/thee/the/g 将该行thee替换为the
：553，576s/thee/the/g把553-576行替换
：%s/thee/the/s 替换全文
：s/thee/the/gc 提示是否替换

执行外部命令
：!ls

o:在当前行下一行进入插入模式 O：行上一行

e，a插入模式，位置不同

v进入可视化模式选择
y复制整行
j$下一行行末
yw复制单词

高级用法：
http://blog.csdn.net/linux_wgl/article/details/51446512
格式化
