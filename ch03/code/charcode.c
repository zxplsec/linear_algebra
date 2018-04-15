// charcode.c: displays code number for a char
#include <stdio.h>
int main(void)
{
  char c;
  printf("Please input a character:\n");
  scanf("%c", &c);
  printf("the code for %c is %d\n", c, c);
  return 0;
}
