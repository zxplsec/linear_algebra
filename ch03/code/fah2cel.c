// fal2cel.c: Convert Fah temperature to Cel temperature 
#include<stdio.h>
int main(void)
{
  float fah, cel;
  printf("Please input the Fah temperature:\n");
  scanf("%f", &fah);
  cel = (fah - 32.) * 5./9.;
  printf("%.2f F = %.2f C\n", fah, cel);
  return 0;
}
