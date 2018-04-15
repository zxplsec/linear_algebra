#include<stdio.h>
#define N 10
int main(void)
{
  char firstname[N][20], lastname[N][20];
  int math[N], phys[N], chem[N];
  float aver;
  int length = 0;

  printf("Enter the info including names and scores (enter q to quit): \n");
  for(int i=0; i<N; i++) {
    printf("First name: ");
    scanf("%s", firstname[i]);
    if (firstname[i][0]  == 'q') {
      break;
    }
    printf("Last name: ");
    scanf("%s", lastname[i]);
    printf("Math: ");
    scanf("%d", &math[i]);
    printf("Phys: ");
    scanf("%d", &phys[i]);
    printf("Chem: ");
    scanf("%d", &chem[i]);
    printf("\n");
    length += 1;
  }

  // print the score table
  printf("%11s %8s %8s %8s %8s\n", "Name", "Math",
	 "Phys", "Chem", "Average");
  for(int i=0; i<length; i++) {
    aver = (math[i]+phys[i]+chem[i])/3.0;    
    printf("%5s %-5s %8d %8d %8d %8.1f\n", firstname[i],
	   lastname[i], math[i], phys[i], chem[i], aver);    
  }
  
  return 0;
}
