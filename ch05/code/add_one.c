// add_one.c: 
#include <stdio.h>
int main(void)
{
  int i = 0, j = 0;
  while (i < 5) {
    i++;
    ++j;
    printf("i = %d, j = %d\n", i, j);
  }
  return 0;
}
