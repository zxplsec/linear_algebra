#include<stdio.h>
#include<float.h>
int main(void)
{
  printf("Size of float is %lu Bytes \n", sizeof(float));
  printf("A positive float value is between %e and %e\n", FLT_MIN, FLT_MAX);
  printf("Precision: %d\n", FLT_DIG);
 
  printf("Size of double is %lu Bytes \n", sizeof(double));
  printf("A positive double value is between %e and %e\n", DBL_MIN, DBL_MAX);
  printf("Precision: %d\n", DBL_DIG);

  printf("Size of long double is %lu Bytes \n", sizeof(long double));
  printf("A positive long double value is between %Le and %Le\n", LDBL_MIN, LDBL_MAX);
  printf("Precision: %d\n", LDBL_DIG);

  return 0;
}
