// ex06.c: 
#include<stdio.h>
#include<string.h>
int main(void)
{
  int i;
  char word[20];
  puts("Enter a word: ");
  scanf("%s", word);
  for (i = strlen(word)-1; i >= 0; i--)
    putchar(word[i]);
  putchar('\n');  
  return 0;
}
