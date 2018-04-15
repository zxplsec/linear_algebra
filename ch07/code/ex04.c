#include <stdio.h>
int main(void)
{
  char ch;
  int count = 0;
  
  
  while ((ch = getchar()) != '#') {
    if (ch == '.') {
      count++;
      putchar('!');
    }
    else if (ch == '!') {
      count++;
      putchar('!');
      putchar('!');
    }
    else
      putchar(ch);
  }
  putchar('\n');
  printf("%d replacement has been finished.\n", count);
  
  return 0;
}
