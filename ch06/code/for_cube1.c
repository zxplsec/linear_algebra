// for_cube1.c: 
#include <stdio.h>
int main(void)
{
  int num;
  printf("%3s %8s\n", "n", "n cubed");
  for (num = 1; num*num*num <= 64; num++)
    printf("%3d %8d\n", num, num*num*num);  
  return 0;
}
