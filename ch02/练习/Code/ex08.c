#include <stdio.h>
#define a 10
int main()
{
  printf("%d ", a);
 
  #define a 50
 
  printf("%d ", a);
  return 0;
}
