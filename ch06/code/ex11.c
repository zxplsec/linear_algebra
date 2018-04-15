// ex11.c
#include<stdio.h>
int main(void)
{
  int i, n;
  int symbol = -1;
  double s1 = 0.0, s2 = 0.0;
  puts("Enter the value of n:");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {    
    s1 += 1.0 / i;
    symbol *= -1;
    s2 += (float) symbol / i;
  }
  printf("s1 = %.5f when n = %d\n", s1, n);
  printf("s2 = %.5f when n = %d\n", s2, n);
  return 0;
}
