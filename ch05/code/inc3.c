// inc3.c: 
#include <stdio.h>
int main(void)
{
  int n = 5;
  int m;  
  m = n/2 + 5*(1 + n++);
  printf("n = %d, m = %d\n", n, m);  
  return 0;
}
