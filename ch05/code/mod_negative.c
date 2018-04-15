// mod_negative.c: 
#include <stdio.h>
int main(void)
{ 
  printf(" 11 /  5 = %2d,  11 %%  5 = %2d\n", 11/5, 11%5);  
  printf(" 11 / -5 = %2d,  11 %% -5 = %2d\n", 11/(-5), 11%(-5));
  printf("-11 / -5 = %2d, -11 %% -5 = %2d\n", (-11)/(-5), (-11)%(-5));
  printf("-11 /  5 = %2d, -11 %%  5 = %2d\n", (-11)/5, (-11)%5);
  return 0;
}
