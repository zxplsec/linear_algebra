#include<stdio.h>
#include<math.h>
#define FT_PER_CM 0.0328084
#define IN_PER_FT 12
int main(void)
{
  double cm, inch;
  int feet;

  printf("Enter a height in centimeters: ");
  scanf("%lf", &cm);
  while (cm > 0) {
    feet = floor(cm * FT_PER_CM);
    inch = (cm * FT_PER_CM - feet) * IN_PER_FT;
    printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
    printf("Enter a height in centimeters (<=0 to quit): ");
    scanf("%lf", &cm);    
  }
  puts("Bye");
  return 0;
}
