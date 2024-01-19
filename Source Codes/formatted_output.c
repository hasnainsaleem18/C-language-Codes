#include <stdio.h>

int main()
{
 long num = 10;
 printf("The number is %ld\n", num);

 long double big_num = 100000098.0005643;
 printf("The number is %Lf\n", big_num);


 int hours_week1=56;
 int hours_week2=13;
 int hours_week3=6;
 int hours_week4=120;



 printf("Hours worked in week 1\t%d\n",hours_week1);
 printf("Hours worked in week 2\t%d\n",hours_week2);
 printf("Hours worked in week 3\t%d\n",hours_week3);
 printf("Hours worked in week 4\t%d\n",hours_week4);

 printf("\n");


 printf("Hours worked in week 1\t%03d\n",hours_week1);
 printf("Hours worked in week 2\t%03d\n",hours_week2);
 printf("Hours worked in week 3\t%03d\n",hours_week3);
 printf("Hours worked in week 4\t%03d\n",hours_week4);

 printf("\n");
 float temp = 38.578;
 printf("The temperature is %f\n",temp);
 //return 0;
 printf("The temperature is %.2f\n",temp);
 //return 0;
 printf("The temperature is %6.2f\n",temp);



return 0;

}
