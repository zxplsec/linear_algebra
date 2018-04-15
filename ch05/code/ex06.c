#include<stdio.h>
void temp(double fah);
int main(void)
{
  double fah, cel, kel;

  printf("Enter a Fah temp: "); 
  while(scanf("%lf", &fah) == 1){
    temp(fah);
    printf("Enter another Fah temp: ");
  }
  return 0;
}

void temp(double fah)
{
  double cel, kel;

  cel = (fah - 32.) / 1.8;
  kel = cel + 273.16;
  printf("Fah: %.2f, Cel: %.2f, Kel: %.2f\n", fah, cel, kel);
}
