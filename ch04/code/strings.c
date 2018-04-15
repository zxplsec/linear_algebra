// strings.c: 
#include <stdio.h>
#define WORD "Hello World!"
int main(void)
{
  printf("*%2s*\n", WORD);
  printf("*%15s*\n", WORD);
  printf("*%15.5s*\n", WORD);
  printf("*%-15.5s*\n",	WORD);
  printf("*%.11s*\n",	WORD);
  return 0;
}
