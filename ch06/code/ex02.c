// ex02.c: 
#include <stdio.h>
#define SYMBOL '$'
#define ROW 5
int main(void)
{
  int i, j;
  for(i = 0; i < ROW; i++) {
    for (j = 0; j <= i; j++)
      putchar(SYMBOL);
    putchar('\n');
  }      
  return 0;
}
