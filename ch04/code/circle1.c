// circle1.c: 
#include <stdio.h>
int main(void)
{
  float radius, circum, area;
  radius = 1;
  area = 3.1415926 * radius * radius;
  circum = 2 * 3.1415926 * radius;
  printf("radius = %f, circum = %f, area = %f\n", radius, circum, area);  
  return 0;
}
