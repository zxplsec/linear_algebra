// float_double.c: 
#include <stdio.h>
int main(void) 
{
  float f1 = 2.2, f2 = 2.25;
  double g1, g2;   
  g1 = (double) f1;
  g2 = (double) f2;
  printf("g1 = %.13f, g2 = %.13f\n", g1, g2);
  return 0;
}
