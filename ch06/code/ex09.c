// ex09.c
#include <stdio.h>
int main(void)
{
  int i, low, high;
  long sum = 0;
  printf("Enter lower and higher limit: ");
  while (scanf("%d %d", &low, &high) == 2 && (low <= high)) {
    for (i = low; i <= high; i++)
      sum += i*i;
    printf("The sum of the squares from %d to %d is %ld\n", low, high, sum);
  }
  puts("Done");
  return 0;
}
