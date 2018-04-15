// ex13.c
#include<stdio.h>
#define N 4
int main(void)
{
  int i;
  double sum = 0.0;
  double arr1[N], arr2[N];  
  printf("Enter %d double elements: ", N);  
  for (i = 0; i < N; i++) {
    scanf("%lf", &arr1[i]);
    sum += arr1[i];
    arr2[i] = sum;
  }
  for (i = 0; i < N; i++) {
    printf("%8.3f", arr1[i]);
  }
  putchar('\n');
  for (i = 0; i < N; i++) {
    printf("%8.3f", arr2[i]);
  }
  putchar('\n');
  return 0;
}
