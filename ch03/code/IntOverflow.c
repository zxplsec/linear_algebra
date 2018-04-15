#include <stdio.h>
#include <limits.h>
int main(void)
{
  int i = INT_MAX;
  unsigned int j = UINT_MAX;  
  printf("i = %d, i+1 = %d, i+2 = %d\n", 
	 i, i+1, i+2);
  printf("j = %u, j+1 = %u, j+2 = %u\n", 
	 j, j+1, j+2);  
  return 0;
}
