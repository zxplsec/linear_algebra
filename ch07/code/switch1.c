// switch1.c: float is not allowed in switch
#include <stdio.h>
int main(void)
{
  float x = 1.1;
  switch (x){
  case 1.1: printf("Choice is 1");
    break;
  default: printf("Choice other than 1, 2 and 3");
    break;  
  }
  return 0;
} 
// Compiler Error: switch quantity not an integer
