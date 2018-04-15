#include<stdio.h>
int main(void)
{
  int count = 0;
  char current, previous = ' ';

  while( (current= getchar()) != '#') {
    if (current == 'i' && previous == 'e')
      count++;
    previous = current;
  }
  printf("\'ei\' has appeared %d times\n", count);
  return 0;
}
