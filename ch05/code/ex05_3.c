#include<stdio.h>
#define N 10
int main(void)
{
  int i = 0;
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);
  while(i < N)
    printf("%d ", num+i++);
  putchar('\n');

  return 0;
}
