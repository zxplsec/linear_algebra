#include<stdio.h>

int main(void)
{
  char firstname[20];
  int height;
  printf("Enter your name: ");
  scanf("%s", firstname);
  printf("Enter your height (cm): ");
  scanf("%d", &height);

  printf("Hi, %s, you are %.2fm tall.\n", firstname, height/100.0);
  return 0;
}
