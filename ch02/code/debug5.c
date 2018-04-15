// debug5.c: find the sum of an arithmetic sequence
#include<stdio.h>
long find_sum_of_an_arithmetic_sequence(int start, int space, int length);
int main(void)
{
  int start, space, length;
  int second, end;
  long total = 0;

  printf("Please input the start value: ");
  scanf("%d", &start);
  printf("Please input the space: ");
  scanf("%d", &space);
  printf("Please input the number of items: ");
  scanf("%d", &length);
  second = start + space;
  end = start + (length-1)*space;
  total = find_sum_of_an_arithmetic_sequence(start, space, length);
  printf("%d + %d + ... + %d = %ld.\n", start, second, end, total);
  return 0;
}

long find_sum_of_an_arithmetic_sequence(int start, int space, int length)
{
  int i, thisNum;
  long total = 0;
  for (i = 0; i < length; i++) {
    thisNum = start + i * space;
    total += thisNum;
  }
  
  return total;
}
