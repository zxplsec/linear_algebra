#include <stdio.h>
int main(void)
{
  int begin, end, i;
  
  printf("Please input the begin and end numbers:\n");
  scanf("%d %d", &begin, &end);
  
  for (i = begin; i <= end; i++)
    printf("%4d %6d %8d\n", i, i*i, i*i*i);
    
  return 0;
}