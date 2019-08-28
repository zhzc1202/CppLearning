#include <stdio.h>

//常量的用途，主要用于赋值，运算
//表现形式有两种，字面量，宏


//宏，在预处理阶段就会处理 gcc  -E Constant.c -o Constant.i
#define Price 100.0
#define Pi    3.1415926

int main(int argc, char *argv[])
{
  int age = 30;
  age = age + 10; //字面量

  float area  = Pi * 2.0 * 2.0;
  float area1 = Pi * 2.0 * 2.0;
  float area2 = Pi * 2.0 * 2.0;
  float area3 = Pi * 2.0 * 2.0;
  float area4 = Pi * 2.0 * 2.0;
  float area5 = Pi * 2.0 * 2.0;

  printf("area = %f\n",area);


  //常量是有类型的
  float salary =1234.56;
  char sex = 'm';
  char name[] = "xiaoming";

  printf("sizeof(0) = %d sizeof(0.0) = %d\n",sizeof(0),sizeof(0.0));// 4 int, 8 可能是double
  printf("sizeof(0) = %d sizeof(0.0) = %d\n",sizeof(0l),sizeof(0.0f));// 8 long, 4 float

  return 0;
}
