#include<stdio.h>
#include<iostream>
using namespace std;
void foo(int a[])
{
  cout << sizeof(a) << endl;
}
int main(void)
{
  int a[] = {1, 2, 3, 4};
  int * p = a; 
  cout << sizeof(a) << endl;
  cout << sizeof(p) << endl;
  foo(a);  
  return 0;  
}
