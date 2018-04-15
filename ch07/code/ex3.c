#include<stdio.h>

int main(void)
{
  int num;
  int n_even = 0, sum_even = 0;
  int n_odd  = 0, sum_odd  = 0;

  while(scanf("%d", &num) == 1 && num != 0) {
    if (num % 2 == 0) {
      sum_even += num;
      n_even++;
    } else {
      sum_odd += num;
      n_odd++;
    }    
  }
  printf("n_even = %d, aver_even = %.3f\n", n_even, (float) sum_even / n_even);
  printf("n_odd  = %d, aver_odd  = %.3f\n", n_odd , (float) sum_odd  / n_odd );
  
  return 0;
}
