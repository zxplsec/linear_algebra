// postage.c: 
#include <stdio.h>
int main(void)
{
  const int FIRST_OZ = 37, NEXT_OZ = 23;
  int ounces, cost;
  for (ounces = 1, cost = FIRST_OZ;
       ounces <= 16;
       ounces++, cost += NEXT_OZ)
    printf("%2d $%4.2f\n", ounces, cost/100.0);
  return 0;
}
