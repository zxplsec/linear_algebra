// rel_operand.c
#include <stdio.h>
int main()
{
  int a=10, b=4;

  printf("a = %d, b = %d\n", a, b);
  
  if (a > b)
    printf("a > b\n");
  else
    printf("a <= b\n");

  if (a >= b)
    printf("a >=  b\n");
  else
    printf("a < b\n");

  if (a < b)
    printf("a < b\n");
  else
    printf("a >= b\n");

  if (a <= b)
    printf("a <= b\n");
  else
    printf("a > b\n");

  if (a == b)
    printf("a == b\n");
  else
    printf("a != b\n");

  if (a != b)
    printf("a != b\n");
  else
    printf("a == b\n");

  return 0;
}  
