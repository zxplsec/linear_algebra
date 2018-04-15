#include <stdio.h>
int main(void)
{
  int n;
  int n_even = 0;
  int n_odd = 0;
  float average_even = 0.f;
  float average_odd  = 0.f;
  
  printf("Enter an nonzero integer: ");
  scanf("%d", &n);
  while (n != 0)
  {
    if (n % 2 == 0)
    {
      average_even += n;
      n_even++;
    }
    else
    {
      average_odd += n;
      n_odd++;
    }
    printf("Enter next nonzero integer: ");
    scanf("%d", &n);
  }
  average_even /= n_even;
  average_odd  /= n_odd;
  
  printf("n_even = %d, average_even = %.2f\n", n_even, average_even);
  printf("n_odd  = %d, average_odd  = %.2f\n", n_odd,  average_odd);
  
  return 0;
}
