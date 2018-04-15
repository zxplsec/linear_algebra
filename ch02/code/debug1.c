// debug1.c: 
#include<stdio.h>
int main(void)
{
  printf("This is a normal statement.\n");
#ifdef DEBUG
  printf("This is a debug statement.\n");
#endif

  return 0;
}
