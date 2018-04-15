#include <stdio.h>
int main(void)
{
  char ch;
  int i, j, row;
  
  printf("Please input a capital letter:\n");
  scanf("%c", &ch);
  
  row = ch - 'A';
  for (i = 0; i <= row; i++) {
    for (j = 0; j < row-i; j++)
      printf(" ");
    for (j = 0; j <= i; j++)
      printf("%c", 'A'+j);
    for (j = i; j > 0; j--)
      printf("%c", 'A'+j-1);
    printf("\n");
  }
  
  
  return 0;
}