#include <stdio.h>

//浮点数float,double 三部分构成，符号Sign，阶码Exponent和尾数Mantissa
//eg：123.456在内存中：SEM S：1 E：0.123456 P：3 类似科学计数法

//1.00000010001  有效数字 12 位
//0.00000010001  有效数字 5  位

int main(int argc, char *argv[])
{
  //6-7
  float   var   = 0.12341234567;
  double  var2  = 0.123412345671234;

  printf("%.20f\n",var);
  printf("%.20f\n",var2);
  return 0;
}
