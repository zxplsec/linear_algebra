// float1.c: What is the output?
#include<stdio.h>
int main(void)
{
  float x = 0.1;
  if (x == 0.1)
    printf("IF\n");
  else if (x == 0.1f)
    printf("ELSE IF\n");
  else
    printf("ELSE\n");
}
