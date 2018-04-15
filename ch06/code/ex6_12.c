#include <stdio.h>
#include <math.h>
int main(void)
{
  int array[8];
  int i, k;
  
  k = 1;
  for (i = 1; i <= 8; i++) {
    k = k*2;
    array[i] = k;
  }
  i = 1;
  do {
    printf("%4d", array[i]);
    i++;
  } while (i <= 8);
  printf("\n");
  
  return 0;
}
