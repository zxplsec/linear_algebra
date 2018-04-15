// switch3.c: There is no break in some cases
#include <stdio.h>
int main()
{
  int x = 2;
  switch (x){
  case 1: printf("Choice is 1\n");
  case 2: printf("Choice is 2\n");
  case 3: printf("Choice is 3\n");
  case 4: printf("Choice is 4\n"); break;
  default: printf("Choice other than 1, 2, 3 and 4\n");  break;
  }
  printf("After Switch");
  return 0;
}
