// ex14.c
#include<stdio.h>
#include<string.h>
#define N 255
int main(void)
{
  char line[N];
  char ch;
  int i = 0;
  puts("Enter a line text: ");
  while((ch = getchar()) != '\n')
    line[i++] = ch;
  line[i]='\0';
  for (i = strlen(line)-1; i >= 0; i--)
    putchar(line[i]);
  putchar('\n');
  return 0;
}
