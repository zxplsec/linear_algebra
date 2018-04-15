// width.c: 
#include <stdio.h>
#define N 1000
int main(void)
{
  printf("*%d*\n", N);
  printf("*%2d*\n", N);
  printf("*%10d*\n", N);
  printf("*%-10d*\n", N);
  printf("*%010d*\n", N);
  return 0;
}
