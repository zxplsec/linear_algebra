#include<stdio.h>
#define add(a, b) (a + b) // using macros
int main(void)
{
  int a = 5, b = 4;
  printf("Addition is: %d\n", add(a, b));
  return 0;
}
