#include<stdio.h>
int add(int x, int y);
int main(void)
{
  int x = 6, y = 7;
  printf("\r%d + %d = %d\n", x, y, add(x,y));
}

int add(int x, int y)
{
  return printf("%*c%*c", x, ' ', y, ' ');
}
