// Statements before all cases are never executed
#include <stdio.h>
int main()
{
   int x = 1;
   switch (x) {
     x = x + 1;  // This statement is not executed
   case 1: printf("Choice is 1");
     break;
   case 2: printf("Choice is 2");
     break;
   default: printf("Choice other than 1 and 2");
     break;                   
   }
   return 0;
} 
