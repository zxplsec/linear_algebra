// animals.c
#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char ch;
  printf("Give a letter, and I will give you an ");
  printf("animal name beginning with that letter.\n");
  printf("Please type in a letter: # to quit.\n");  
  while ((ch = getchar()) != '#')
  {
    if ('\n' == ch)
      continue;    
    if (islower(ch))
    {
      switch (ch)
      {
        case 'a':
          printf("alligator\n");
          break;
        case 'b':
          printf("buffalo\n");
          break;
        case 'c':
          printf("camel\n");
          break;
        case 'd':
          printf("dove\n");
          break;
        case 'e':
          printf("eagle\n");
          break;
        default:
          break;
      }
    }
    else
      printf("I only recognize only lowercase letters.\n");    
    while (getchar() != '\n')
      continue;
    printf("Please typer another letter or a #.\n");
  }
  printf("Bye!\n");  
  return 0;
}
