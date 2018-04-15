#include <stdio.h>
#include <math.h>
int main(void)
{
  int i, n;
  double sum1 = 0.;
  double sum2 = 0.;
  printf("Enter the terms you want to compute:\n");
  scanf("%d", &n);
  
  for (i = 1; i <= n; i++){
    sum1 += (double) 1 / (double) i;
    sum2 += pow(-1,i+1) * (double) 1 / (double) i;
  }
  printf("sum1 = %f, sum2 = %f\n", sum1, sum2);
  
  return 0;
}
