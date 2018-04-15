#include<stdio.h>
#include<iostream>
using namespace std;
long long foo()
{
  printf("%s has been called.\n", __func__);
}
int main(void)
{
  foo();
  cout << sizeof(foo()) << endl;
  return 0;
}
