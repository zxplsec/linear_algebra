#include<stdio.h>
#define S "Hello"
int main()
{
  int n;
  printf("%s%n\n", S, &n);
  printf("n = %d\n", n);
}
