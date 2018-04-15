// add2num.c: find the sum of two numbers
#include<stdio.h>
#define add(a,b) ((a)+(b))
int main(void)
{
  int a, b;
  a = 1;
  b = 2;
  printf("add(%d, %d) = %d\n", a, b, add(a,b));
  return 0;
}
