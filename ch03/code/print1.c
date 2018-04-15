// print1.c: display some properties of printf() 
#include<stdio.h>
int main(void)
{
  int a = 10;
  int b = 2;
  printf("Doing it right: ");
  printf("%d - %d = %d\n", a, b, a-b);
  printf("Doing it wrong: ");
  printf("%d - %d = %d\n", a);
  return 0;
}
