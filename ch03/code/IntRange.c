#include <stdio.h>
#include <limits.h>
int main(void)
{
  printf("Range of int: %d ~ %d\n",INT_MIN,INT_MAX);
  printf("Range of int: %u ~ %u\n",0,UINT_MAX);
  

  printf("%lu, %lu, %lu, %lu\n", sizeof(short),
	 sizeof(int), sizeof(long), sizeof(long long));

  return 0;
}
