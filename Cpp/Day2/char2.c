#include <stdio.h>

int main(int argc, char *argv[])
{
/*   for(char ch = 'a';ch <='z';ch++)
  {
    printf("ch = %d 小写ch = %c\n",ch, ch);
    printf("ch = %d 大写ch = %c\n",ch-32, ch-' ');
  } */

for(int i=0; i<10; i++)
{
  printf("%d  ",i);
}
putchar(10);

for(char i='0';i<='0'+9; i++)
{
  printf("%d %c\n",i,i);
}

  return 0;
}

#if 0
Usage
int age = 23;
char gender = 'f';
#endif
