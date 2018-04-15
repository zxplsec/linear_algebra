// ex15.c
#include<stdio.h>
#define INVEST 1000
#define RATE1 0.1
#define RATE2 0.05
int main(void)
{
  int year;
  double wang, li;
  wang = li = INVEST;
  for (year = 1; li <= wang; year++) {
    wang += INVEST * RATE1;
    li *= (1+RATE2);
    printf("%4d %8.3f %8.3f\n", year, wang, li);   
  }
  return 0;
}
