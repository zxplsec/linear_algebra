// comma2.c: 
#include<stdio.h>
int main()
{
  int x = 10;
  int y = (x++, ++x);
  printf("%d\n", y);
  return 0;
}
