#include <stdio.h>

int main()
{

 int sum = 0;
 int count = -1;
 int num=0;

 printf("Enter values to find average. Enter -1 to stop\n");
 do {
   sum = sum+num;   
   scanf("%d",&num);
   count++;
 } while(num!=-1);

 if (count!=0)
 {
  float avg = (float) sum/count;
  printf("Average of numbers entered is %f\n",avg);
 }
 else
  printf("No values entered\n");



 return 0;





}
