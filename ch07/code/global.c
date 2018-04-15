#include <stdio.h>

int a = 1, b = 2;
void swap(int x, int y);

int main(void)
{
  swap(a, b);
  
  printf("%d %d\n", a, b);
  
  return 0;
}

void swap(int x, int y)
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}