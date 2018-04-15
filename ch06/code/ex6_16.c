#include <stdio.h>
#define RATE 0.08
#define MINUS 10
int main(void)
{
  int year = 0;
  double count = 100;
  
  do {
    count *= (1+RATE);
    count -= MINUS;
    year++;
    printf("%f\n",count);
  } while (count > 0);
  
  printf("After %d years, the count will be empty.\n",
         year);
  
  
  
  printf("\n");
  
  return 0;
}
