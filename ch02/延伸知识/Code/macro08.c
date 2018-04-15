#include <stdio.h>
#define square(x) x*x
int main(void)
{
  int x = 36 / square(6); // Expended as 36/6*6
  printf("x = %d\n", x);
  return 0;
}
