#include <stdio.h>
int main(void)
{
  int lower, upper, i;
  int sum = 0;
  
  printf("Enter lower and upper integer limit: ");
  scanf("%d %d", &lower, &upper);
  while ( lower < upper){
    for (i = lower; i <= upper; i++)
      sum += i*i;
    printf("The sum of the squares from %d to %d is %d\n",
           lower*lower, upper*upper, sum);
    printf("Enter lower and upper integer limit: ");
    scanf("%d %d", &lower, &upper);
    sum = 0;
  }
  printf("Done\n");
  return 0;
}
