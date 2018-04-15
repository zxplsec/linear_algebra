// ex16.c
#include<stdio.h>
#define LOTTERY 100.0
#define RATE 0.08
int main(void)
{
  int year;
  double wang = LOTTERY;

  for (year = 1;  wang>= 0.0; year++) {
    wang *= (1+RATE);
    wang -= 10.0;
    printf("%4d %8.3f\n", year, wang);   
  }
  return 0;
}
