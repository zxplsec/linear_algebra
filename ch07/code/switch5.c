// switch5.c: The default block is placed above other cases.
#include <stdio.h>
int main()
{
   int x = 4;
   switch (x) {
   default: printf("Choice other than 1 and 2"); break;      
   case 1: printf("Choice is 1");   break;
   case 2: printf("Choice is 2");   break;
   }
   return 0;
}
