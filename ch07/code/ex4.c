#include<stdio.h>
int main(void)
{
  int count = 0;
  char ch;

  while( (ch = getchar()) != '#') {
    if (ch == '.') {
      putchar('!');
      count++;
    } else if (ch == '!') {
      putchar('!');
      putchar('!');
      count++;
    } else
      putchar(ch);      
  }
  printf("\n%d replacement has been completed!\n", count);

  return 0;
}
