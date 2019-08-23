
Linux下c源码到可执行文件的过程

STEP1   vim创建main.c

#include <iostream>

int main() 
{
printf("hello world!!!\n"); //comment
return 0;
}

STEP2   编译成main.i文件 预处理阶段
运行gcc -E main.c -o main.i

预处理文件

cat main.i
会发现stdio被展开，//注释消失

STEP3 gcc -S main.i -o main.s
 汇编阶段，main.s变成汇编语言

STEP4 gcc -c main.s -o main.o
二进制文件，但不可执行

tips：ls命令，绿色代表可执行文件，可以chmod a+x main.o加权限

STEP5 gcc main.o -o hello
生成hello文件，具备可执行性
