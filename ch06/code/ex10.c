// ex10.c
#include<stdio.h>
#define N 8
int main(void)
{
  int arr[N];
  int i;
  puts("Enter 8 integers: ");
  for (i = 0; i < N; i++)
    scanf("%d", &arr[i]);
  for (i = N-1; i >= 0; i--)
    printf("%4d ", arr[i]);
  putchar('\n');
  return 0;
}
