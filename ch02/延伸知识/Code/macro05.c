#include <stdio.h>
#define merge(a, b) a ## b
int main(void)
{
  printf("%d\n", merge(12, 34));
}
