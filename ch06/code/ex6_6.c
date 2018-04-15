#include <stdio.h>
#include <string.h>
int main(void)
{
  char word[20];
  int i;
  
  printf("Please input the word:\n");
  scanf("%s", word);
  
  for (i = (int)strlen(word)-1; i >=0; i--)
    printf("%c", word[i]);
  printf("\n");
  return 0;
}