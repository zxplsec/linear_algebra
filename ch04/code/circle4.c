// circle4.c:  
#include <stdio.h>
int main(void) {
  float radius, circum, area;
  const float PI = 3.1415926;  
  radius = 1.;
  area = PI * radius * radius;
  circum = 2 * PI * radius;
  printf("radius = %f, circum = %f, area = %f\n", radius, circum, area);  
  return 0;
}
