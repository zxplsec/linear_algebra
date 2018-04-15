#include <stdio.h>
int main(void)
{
  char cur;
  char pre = ' ';
  int count = 0;
  
  
  while ((cur = getchar()) != '#')
  {
    if (cur == 'i' && pre == 'e')
      count ++;
    
    pre = cur;
  }
  printf("'ei' appeared %d times.\n", count);
  
  return 0;
}
