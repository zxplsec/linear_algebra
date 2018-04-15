#include <stdio.h>
#define get(a) #a
int main(void)
{
  // GeeksQuiz is changed to "GeeksQuiz"
  printf("%s\n", get(GeeksQuiz));
}
