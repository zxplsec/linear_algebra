#include <stdio.h>
int main(void)
{
  char alphabet[26];
  int i;
  
  for (i = 0; i < 26; i++)
    alphabet[i] = 'a'+i;
  
  for (i = 0; i < 26; i++)
    printf("%c ", alphabet[i]);
  printf("\n");
  
  return 0;
}