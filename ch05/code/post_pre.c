// post_pre.c
#include <stdio.h>
int main(void)
{
  int a = 1, b = 1;
  int aplus, bplus;  
  aplus = a++;
  bplus = ++b;  
  printf("a = %d, aplus = %d\n", a, aplus);
  printf("b = %d, bplus = %d\n", b, bplus);
  return 0;
}
