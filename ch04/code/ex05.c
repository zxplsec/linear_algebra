#include<stdio.h>

int main(void)
{
  char firstname[20], lastname[20];
  int count1, count2;
  printf("Enter your first name: ");
  scanf("%s", firstname);
  printf("Enter your last name: ");
  scanf("%s", lastname);

  printf("%s%n %s%n\n", firstname, &count1, lastname, &count2);
  printf("%*d %*d\n", count1, count1, count2-count1-1, count2-count1-1);
  
  return 0;
}
