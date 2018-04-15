// scores.c: 
#include <stdio.h>
#define DAYS 5
#define PAR  10000
int main(void)
{
  int index, steps[DAYS];
  int sum = 0;
  float average;  
  printf("Enter steps of %d days:\n", DAYS);
  for (index = 0; index < DAYS; index++)
    scanf("%d", &steps[index]);
  printf("The steps read in are as follows:\n");
  for (index = 0; index < DAYS; index++)
    printf("%7d", steps[index]);
  printf("\n");
  for (index = 0; index < DAYS; index++)
    sum += steps[index];
  average = (float) sum / DAYS;
  printf("Sum of steps = %d, average = %.2f\n", sum, average);
  printf("That's a handicap of %.0f.\n", average-PAR);
  return 0;
}
