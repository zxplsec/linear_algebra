#include <stdio.h>
int main(void)
{
  int array[10];
  int i;
  
  printf("Enter 10 integers:\n");
  for (i = 0; i < 10; i++)
    scanf("%d", &array[i]);
  for (i = 9; i >= 0; i--)
    printf("%d ", array[i]);
  printf("\n");
  
  return 0;
}
