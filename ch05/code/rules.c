// rules.c: 
#include <stdio.h>
int main(void)
{
  int a, b;
  b = a = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
  printf("b = %d\n", b);
  return 0;
}
