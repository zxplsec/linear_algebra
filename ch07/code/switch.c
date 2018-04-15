#include <stdio.h>
int main(void)
{
  int num;  
  printf("Enter a nonnegative integers: ");
  while (scanf("%d", &num) == 1 && num > 0)
  {
    switch (num)
    {
      case 1:
        printf("it is %d\n", num);
        break;
      case 200000:
        printf("IT IS %d\n", num);
        break;
      default:
        break;
    }
    printf("Enter next nonnegative integer: ");
  }
  return 0;
}
