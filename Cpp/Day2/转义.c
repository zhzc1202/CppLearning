#include <stdio.h>

//两个作用
//字符语义被征用，回归本意
//有新的需求，通过转义实现新功能

int main(int argc, char *argv[])
{
  //printf(" I like "football" ");
  //会报错

  printf(" I like 'football' ");
  printf("\n");  //n本身就是一个字符，但是c语言想实现了一个换行的功能。
  printf(" I like \"football\"\n"); //""本身就是一个双引号字符，但是他被C语言征用了用于其他的用途。
  printf(" I like \\football\\\n");

  printf("%% %d",10); //输出%

  putchar(10);

  printf("%d  %d  %d  %d",'\t','\b','\n','\r');

  //putchar(10);
  putchar('\n');//等价

  printf("%% = %d  %% = %d\n",'%','%%');
  printf("\\ = %d  \\ = %d\n",'\\','\\');

  printf("\"= %d  \" = %d\n",'"','\"');

  printf("i like \12 football\n");
  printf("i like \126number\n");//想表示6number，但被粘连
  printf("i like \12f number\n");//表示f number
  printf("i like \xam number\n");//16进制
  printf("i like \xa1 number\n");//16进制

  return 0;
}
