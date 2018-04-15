// elseif.c: 
#include <stdio.h>
int main(void)
{
  int number;  
  printf("Enter an integer: ");
  scanf("%d", &number);  
  if (number > 6)
    if (number < 12)
      printf("You're close!\n");
  else
    printf("Sorry, you loose a turn!\n");  
  return 0;
}
