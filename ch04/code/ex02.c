#include<stdio.h>
#include<string.h>
int main(void)
{
  char firstname[20];
  printf("Enter your first name: ");
  scanf("%s", firstname);

  printf("\"%s\"\n", firstname);
  printf("\"%20s\"\n", firstname);
  printf("\"%-20s\"\n", firstname);
  printf("\"%*s\"\n", (int)(strlen(firstname))+3,firstname);

  return 0;
}
