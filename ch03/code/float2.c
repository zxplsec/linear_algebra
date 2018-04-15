// float2.c: What is the output?
#include<stdio.h>
int main(void)
{
  float x = 0.1;
  printf("%lu %lu %lu\n", sizeof(x), sizeof(0.1), sizeof(0.1f));
  return 0;
}
