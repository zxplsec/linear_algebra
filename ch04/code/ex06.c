#include<stdio.h>
#include<float.h>
int main(void)
{
  float a = 1.0f/3.0f;
  double b = 1.0/3.0;

  printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
  
  printf("a = %.4f, b = %.4f\n", a, b);
  printf("a = %.12f, b = %.12f\n", a, b);
  printf("a = %.16f, b = %.16f\n", a, b);
  return 0;
}
