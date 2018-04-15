// input.c: 
#include <stdio.h>
int main(void) {
  int age;
  double weight;
  char name[20]; 
  printf("Enter your name, age and weight:\n");
  scanf("%s", name);
  scanf("%d , %lf", &age, &weight);
  printf("%s: %d %f\n", name, age, weight);  
  return 0;
}
