// boolean.c: 
#include <stdio.h>
int main(void)
{
  long num;
  long sum = 0L;
  _Bool input_is_good;

  printf("Enter an integer to be summed");
  printf(" (q to quit):\n");
  
  input_is_good = (scanf("%ld", &num) == 1);
  while (input_is_good) {
    sum = sum + num;
    printf("Enter next integer (q to quit):\n");
    input_is_good = (scanf("%ld", &num) == 1);
  }
  printf("Those integers sum to %ld.\n", sum);

  return 0;
}
