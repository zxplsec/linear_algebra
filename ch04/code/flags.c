// flags.c: 
#include <stdio.h>
int main(void)
{
  printf("%x %X %#x %#X\n", 31, 31, 31, 31);  
  printf("*%d*\n", 42);
  printf("*% d*\n", 42);
  printf("*% d*\n", -42);  
  printf("*%5d*\n", 6);
  printf("*%5.3d*\n", 6);
  printf("*%05d*\n", 6);
  printf("*%05.3d*\n", 6);
  return 0;
}
