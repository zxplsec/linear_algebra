// circle2.c: 
#include <stdio.h>
int main(void)
{
  float radius, circum, area;
  float pi = 3.1415926;
  radius = 1;
  area = pi * radius * radius;
  circum = 2 * pi * radius;
  printf("radius = %f, circum = %f, area = %f\n", radius, circum, area);  
  return 0;
}
