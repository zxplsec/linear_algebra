#include<stdio.h>
int main(void)
{
  double a;
  printf("Enter a float number: ");
  scanf("%lf", &a);

  printf("The input is %.1f or %.1e\n", a, a);
  printf("The input is %+.3f or %.3E\n", a, a);
  return 0;
}
