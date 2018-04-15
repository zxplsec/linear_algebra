// ex04.c: 
#include<stdio.h>
#define ROW 5
int main(void)
{
  int i, j;
  for (i = 0; i < ROW; i++) {
    for (j = ROW-1-i; j > 0; j--)
      putchar(' ');
    for (j = 0; j <= i; j++)
      putchar('A' + j);
    for (j = 0; j < i; j++)
      putchar('A' + i - 1 - j);
    putchar('\n');
  }  

  return 0;
}
