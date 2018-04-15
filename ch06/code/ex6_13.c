#include <stdio.h>
#include <math.h>
#define N 4
int main(void)
{
  double array[N], sum[N];
  int i;
  
  for (i = 1; i <= N; i++)
    scanf("%lf", &array[i]);
  
  sum[1] = array[1];
  for (i = 2; i <= N; i++)
    sum[i] = sum[i-1] + array[i];
  
  for (i = 1; i <= N; i++)
    printf("%6.2lf ", array[i]);
  printf("\n");
  for (i = 1; i <= N; i++)
    printf("%6.2lf ", sum[i]);
  printf("\n");
  
  return 0;
}
