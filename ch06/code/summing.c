// summing.c: 
#include <stdio.h>
int main(void)
{
  long num;
  long sum = 0L;
  printf("Enter an integer to be summed (q to quit): ");
  while (scanf("%ld", &num) == 1) {
    sum = sum + num;
    printf("Enter next integer (q to quit): ");
  }
  printf("Those integers sum to %ld.\n", sum);
  return 0;
}
