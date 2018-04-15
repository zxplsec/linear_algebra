// for_down.c: 
#include <stdio.h>
int main(void)
{
  int secs;
  for (secs = 4; secs > 0; secs--)
    printf("%d seconds!\n", secs);
  printf("Ignition!\n");
  return 0;
}
