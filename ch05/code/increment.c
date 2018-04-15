#include<stdio.h>
int main()
{
  int x = 1, y = 1;
  printf("%d\n", x++ + ++y);
  printf("x = %d, y = %d\n", x, y);
  return 0;
}
