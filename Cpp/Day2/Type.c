#include <stdio.h>

//一个8位空间，如果用来表示无符号数   0 - 255  unsigned char     0  - 2^8-1
//           如果用来表示有符号数-128 - 127  char            -2^7 - 2^7-1
//补码的编码规则导致的


//如下的求证方式，得到的是字节数。
//我们对其范围的探求，不止于字节数，要得到具体的数据范围

//int 基本整型  理想的32位机，地址总线和数据总线应该是32位的。

#if 0
1字节 char
   0 - 255  unsigned char     0  - 2^8-1
-128 - 127  char            -2^7 - 2^7-1

2字节 short
  0    - 65535                0   - 2^16-1
-32768 - 32767              -2^15 - 2^15-1

4字节 int
范围略40亿
                              0   - 2^32-1
                            -2^31 - 2^31-1
long

long lnog
                              0   - 2^64-1
                            -2^63 - 2^63-1

#endif

//列编辑模式

int main(int argc, char *argv[])
{
  printf("sizeof(char         ) = %d\n",sizeof(char         ));
  printf("sizeof(short        ) = %d\n",sizeof(short        ));
  printf("sizeof(int          ) = %d\n",sizeof(int          ));
  printf("sizeof(long         ) = %d\n",sizeof(long         ));
  printf("sizeof(long long    ) = %d\n",sizeof(long long    ));
  printf("sizeof(float        ) = %d\n",sizeof(float        ));
  printf("sizeof(double       ) = %d\n",sizeof(double       ));
  printf("sizeof(long double  ) = %d\n",sizeof(long double  ));

  char a; short b; int c; long d; long long dd;
  float e; double f; long double ff;

  printf("sizeof(a ) = %d\n",sizeof(a ));
  printf("sizeof(b ) = %d\n",sizeof(b ));
  printf("sizeof(c ) = %d\n",sizeof(c ));
  printf("sizeof(d ) = %d\n",sizeof(d ));
  printf("sizeof(dd) = %d\n",sizeof(dd));
  printf("sizeof(e ) = %d\n",sizeof(e ));
  printf("sizeof(f ) = %d\n",sizeof(f ));
  printf("sizeof(ff) = %d\n",sizeof(ff));
}
