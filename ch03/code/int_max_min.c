// int_max_min.c: print INT_MIN and INT_MAX
#include<stdio.h>
#include<limits.h>
int main(void) 
{    
  printf("range of int is %d ~ %d\n", INT_MIN, INT_MAX);
  printf("range of int is %ld ~ %ld\n", LONG_MIN, LONG_MAX);
  printf("sizeof short = %lu bytes\n", sizeof(short));
  printf("sizeof int = %lu bytes\n", sizeof(int));
  printf("sizeof long = %lu bytes\n", sizeof(long));   
  return 0;
}
