// ex05.c: 
#include <stdio.h>
int main(void)
{
  int i, low, high;
  printf("Enter low and high limit: ");
  scanf("%d %d", &low, &high);
  printf("%4s %4s %4s\n", "n", "n^2", "n^3");
  for (i = low; i <= high; i++)
    printf("%4d %4d %4d\n", i, i*i, i*i*i);
  return 0;
}
