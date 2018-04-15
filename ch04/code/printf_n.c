// printf_n.c: 
#include<stdio.h>
int main(void)
{
  int c1, c2;
  printf("Hello Wuhan %nUniversity!%n\n", &c1, &c2);
  printf("c1 = %d, c2 = %d\n", c1, c2);
  return 0;
}
