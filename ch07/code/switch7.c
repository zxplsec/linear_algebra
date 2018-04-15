// switch7.c: Program where two case labels have same value
#include <stdio.h>
int main()
{
   int x = 1;
   switch (x) {
   case 2: printf("Choice is 1");
     break;
   case 1+1: printf("Choice is 2");
     break;
   }
   return 0;
} 
// Compiler Error: duplicate case value
