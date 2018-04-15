#include <stdio.h>
#define RATE1 0.1
#define RATE2 0.05
#define INVEST 10000.0
int main(void)
{
  double sum1 = INVEST;
  double sum2 = INVEST;
  int year = 0;
  
  do {
    sum1 += INVEST*RATE1;
    sum2 += sum2*RATE2;
    year++;
  } while (sum2 < sum1);
  
  printf("After %d years, invest of Li (%.f) exceed that of Wang (%.f).\n",
         year, sum1, sum2);
  
  
  
  printf("\n");
  
  return 0;
}
