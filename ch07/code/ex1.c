#include<stdio.h>

int main(void)
{
  int n_space = 0, n_newline = 0, n_others = 0;
  char ch;
  
  while ((ch = getchar()) != EOF) {
    if (ch == ' ')
      n_space++;
    else if(ch == '\n')
      n_newline++;
    else
      n_others++;
  }
  printf("n_space = %d, n_newline = %d, n_others = %d\n",
	 n_space, n_newline, n_others);
  
  return 0;
}
