#include <stdio.h>
int main(void)
{
  float a, b;
  
  printf("Please input two float number:\n");
  while ( scanf("%f %f", &a, &b) != 0){
    printf("%f\n", (a-b)/(a*b));
  }
  return 0;
}