//
//  main.cpp
//  Day1
//
//  Created by Jason's Macbook on 8/21/19.
//  Copyright © 2019 Jason's Macbook. All rights reserved.
//

#include <iostream>
//不是每个程序都必须写
//C语言所有的函数要求先声明再使用

int main()  //入口函数，一个程序只能有一个
{
    printf("hello world!!!\n"); //打印函数
    return 0;
}


void func()
{

}

void foo()
{
    
}

//三角号代表warring 和 error

//IDE：integrated development environment 集成开发环境，一般引入了一个概念，叫工程
//主要文件就是.c，其余的是工程文件，可以更好的管理工程
//Qt 读作 Cute

//从源文件到可执行文件，经历了什么？
//linux     --- main.c  a.out
//windows   --- main.c  xxx.exe

//gcc -E main.x -o main.i   预处理
//gcc -S main.i -o main.s   编译
//gcc -c main.s -o main.o   汇编
//gcc main.o -o hello       链接

//单行注释
/*多行注释，不支持嵌套
 asdasd
 asdasd
 */
// 用条件编译的方式实现多行注释
#if 0
asdfsadf
sadfsdafsdaf
#endif
