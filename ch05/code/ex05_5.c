#include <stdio.h>
int sum(int n);
int main(void)
{
  int n;
  printf("Please input n: ");
  scanf("%d", &n);
  printf("1 + ... + %d = %d\n", n, sum(n));
  return 0;
}

int sum(int n)
{
  int i = 0, sum = 0;
  while (++i <= n)
    sum += i;
  return sum;
}
