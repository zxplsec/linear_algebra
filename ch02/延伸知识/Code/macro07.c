#include <stdio.h>
#define PRINT(i, limit) while (i < limit) \
    {					  \
      printf("GeeksQuiz ");		  \
      i++;				  \
    }
int main(void)
{
  int i = 0;
  PRINT(i, 3);
  return 0;
}
