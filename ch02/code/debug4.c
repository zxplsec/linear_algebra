// debug4.c: find the sum of an arithmetic sequence
#include<stdio.h>
int main(void)
{
  int start, space, length, i, thisNum;
  long total = 0;

  printf("Please input the start value: ");
  scanf("%d", &start);
  printf("Please input the space: ");
  scanf("%d", &space);
  printf("Please input the number of items: ");
  scanf("%d", &length);

  for (i = 0; i < length; i++) {
    thisNum = start + i * space;
    if (length - i > 1) {
      printf("%d + ", thisNum);
    } else {
      printf("%d", thisNum);
    }
    total += thisNum;
  }
  printf(" = %ld\n", total);
    
  return 0;
}
