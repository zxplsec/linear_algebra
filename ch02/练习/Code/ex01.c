#include <stdio.h>
#define PRINT(i, limit) do \
    { \
      if (i++ < limit) \
	{ \
	  printf("Hello world\n"); \
	  continue; \
	} \
    }while(1)
 
int main(void)
{
  PRINT(0, 3);
  return 0;
}
