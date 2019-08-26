//
//  variable.c
//  Cpp
//
//  Created by Jason's Macbook on 8/26/19.
//  Copyright © 2019 Jason's Macbook. All rights reserved.
//

#include <stdio.h>

int main(int argc, char *argv[])
{
    int A3b,a3b;//int 占4
    char ab3;
    float a_b;
    char _ab;
    
//    int int;
    
    int a = 4;
    int b = 5;
    
    printf("a=%d,b=%d\n",a,b);
    
//    int t;
//    t = a;
//    a = b;
//    b = t;
    //Qt IDE ctrl+？能多行注释
    
    a = a + b; // a=9, b=5
    b = a - b; // a=9, b=4
    a = a - b; // a=5, b=4
    //不用第三方变量就可以置换，有隐患，可能溢出。
    
    /*
     //终极方法
     a = a^b;
     b = a^b;
     a = a^b;
     */
    
    printf("a = %d b = %d\n",a,b);
    
    return 0;
}
