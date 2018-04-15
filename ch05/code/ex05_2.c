#include<stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
  int minute, hour, left;

  printf("Enter the second: ");  
  scanf("%d", &minute);

  while(minute > 0) {
    hour = minute / MIN_PER_HOUR;
    left = minute % MIN_PER_HOUR;
    printf("%d sec = %d hour %d sec\n", minute, hour, left);

    printf("Enter the next second: ");  
    scanf("%d", &minute);
  }
  printf("Done!\n");
}
