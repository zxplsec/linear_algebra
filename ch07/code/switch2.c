// switch2.c: There is no break in all cases
#include <stdio.h>
int main()
{
   int x = 2;
   switch (x) {
   case 1: printf("Choice is 1\n");
   case 2: printf("Choice is 2\n");
   case 3: printf("Choice is 3\n");
   default: printf("Choice other than 1, 2 and 3\n");
   }
   return 0;
}
