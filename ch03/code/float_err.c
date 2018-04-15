#include <stdio.h>
int main(void)
{
  float a,b;
  a = 2.e20 + 1;
  b = a - 2.e20;
  printf("b = %f\n", b);
  return 0;
}
