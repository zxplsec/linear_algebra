#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char ch;
  int count = 0;
  while ((ch = getchar()) != '#') {
    count++;
    printf("%c %3d, ", ch, ch);
    if (count % 8 == 0)
      printf("\n");
  }
  printf("\n");
  
  return 0;
}
