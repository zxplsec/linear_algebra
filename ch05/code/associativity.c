// associativity.c: 
#include<stdio.h>
int x = 0; 
int f1()
{
  x = 5;
  return x;
} 
int f2()
{
  x = 10;
  return x;
}
int main()
{
  int p = f1() + f2();
  printf("%d ", x);
  return 0;
}
