#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char ch;
  int n_space = 0;
  int n_enter = 0;
  int n_other = 0;
  while ((ch = getchar()) != '#') {
    if (ch == ' ')
      n_space++;
    else if (ch == '\n')
      n_enter++;
    else
      n_other++;
  }
  printf("n_space = %d, n_enter = %d, n_other = %d\n",
         n_space, n_enter, n_other);
  return 0;
}
