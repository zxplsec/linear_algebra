#include <stdio.h>
#define N 255
int main(void)
{
  char line[N];
  int i, j;
  scanf("%c", &line[i]);
  while (line[i] != '\n' && i < N)
    scanf("%c", &line[++i]);
  for (j = i; j >= 0; j--) {
    printf("%c", line[j]);
  }
  
  printf("\n");
  
  return 0;
}
