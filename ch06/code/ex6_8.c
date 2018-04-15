#include <stdio.h>
float compute(float a, float b);
int main(void)
{
  float a, b;
  
  printf("Please input two float number:\n");
  while ( scanf("%f %f", &a, &b) != 0){
    printf("%f\n", compute(a, b));
  }
  return 0;
}

float compute(float a, float b)
{
  return (a-b)/(a*b);
}