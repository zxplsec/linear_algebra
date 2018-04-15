// ex12.c
#include<stdio.h>
#define N 8
int main(void)
{
  int i;
  int arr[N];
  
  for (i = 1, arr[0] = 2; i < N; i++) 
    arr[i] = arr[i-1]*2;
  i = 0;
  do 
    printf("%4d\n", arr[i++]);
  while(i < N);

  return 0;
}
