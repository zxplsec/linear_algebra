// showf_pt.c:
#include <stdio.h>
int main(void)
{
  float a = 32000.;
  double b = 2.14e9;
  long double c = 5.32e-5;
  printf("%f can be written as %e\n", a, a);
  printf("%f can be written as %e\n", b, b);
  printf("%Lf can be written as %Le\n", c, c);
  return 0;  
}
