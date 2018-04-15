// circle3.c: 
#include <stdio.h>
#define PI 3.1415926
int main(void) {
  float radius, circum, area;
  radius = 1;
  area = PI * radius * radius;
  circum = 2 * PI * radius;
  printf("radius = %f, circum = %f, area = %f\n", radius, circum, area);
  return 0;
}
