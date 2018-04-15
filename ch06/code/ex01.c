// ex01.c
#include<stdio.h>
#define N 26
int main(void)
{
  int i;
  char alpha[N];
  for (i = 0; i < N; i++) {
    alpha[i] = 'a' + i;
    putchar(alpha[i]);
  }
  putchar('\n');
  return 0;
}

