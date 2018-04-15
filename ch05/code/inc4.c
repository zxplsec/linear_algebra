// inc4.c: 
#include <stdio.h>
int main(void)
{
  int n = 3;
  int m;  
  m = n++ + n++;
  printf("n = %d, m = %d\n", n, m);  
  return 0;
}
