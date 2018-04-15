#include<stdio.h>

int main(void)
{
  char firstname[20], lastname[20];
  printf("Enter your first name: ");
  scanf("%s", firstname);
  printf("Enter your last name: ");
  scanf("%s", lastname);
  printf("Hi, %s %s\n", firstname, lastname);
  return 0;
}
