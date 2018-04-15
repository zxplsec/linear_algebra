// float3.c: What is the output?
#include<stdio.h>
int main(void)
{
  float x = 0.5;
  if (x == 0.5)
    printf("IF\n");
  else if (x == 0.5f)
    printf("ELSE IF\n");
  else
    printf("ELSE\n");
}
