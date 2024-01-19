#include <stdio.h>

int main()
{

 int sum = 0;
 int count;
 int num;

 printf("Enter numbers to find sum. Enter -1 to indicate end\n");
 

 for(count=0;count<1000;count++)
 {

   scanf("%d",&num);
   if(num==-1)
    break;
   sum +=num;

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
