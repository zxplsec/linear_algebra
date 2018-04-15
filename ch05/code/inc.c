// inc.c: 
#include <stdio.h>
int main(void)
{
  int y = 2;
  int n = 3;
  int nextnum;  
  nextnum = (y + n++)*6;
  printf("n = %d, nextnum = %d\n", n, nextnum);  
  return 0;
}
