// ex03.c: 
#include <stdio.h>
#define ROW 6
int main(void)
{
  int i, j;
  for(i = 0; i < ROW; i++) {
    for (j = 0; j <= i; j++)
      putchar('F' - j);
    putchar('\n');
  }      
  return 0;
}
