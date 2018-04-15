#include <stdio.h>
#define MSG 1
int main(void)
{
#if MSG == 1
  printf("Trace Message!\n");
#endif
}
