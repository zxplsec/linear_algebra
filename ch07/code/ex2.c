#include<stdio.h>
int main(void)
{
  int count = 0;
  char ch;

  while((ch = getchar()) != '#') {
    if (count % 8 != 7)
      printf("%c %3d, ", ch, ch);
    else
      printf("%c %3d\n", ch, ch);
    count++;
  }
  return 0;
}
