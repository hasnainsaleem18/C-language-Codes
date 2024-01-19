#include <stdio.h>

int main()
{

 int sum = 0;
 int count;
 int num;

 printf("Enter numbers to find sum. Enter -1 to indicate end\n");
 scanf("%d",&num);

 for(count=0;num!=-1;count++)
 {
   sum +=num;
   scanf("%d",&num);

 }

 if (count!=0)
 {
  float avg = (float) sum/count;
  printf("Average of numbers entered is %f\n",avg);
 }
 else
  printf("No values entered\n");



 return 0;





}
