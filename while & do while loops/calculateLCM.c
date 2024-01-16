#include <stdio.h>
int lcm();
int main()
{

int num1;
int num2;

printf("enter 1st num: \n");
scanf("%d", &num1);
printf("enter 2nd num: \n");
scanf("%d", &num2);

lcm(num1, num2);

}
int lcm(int num1, int num2)
{

int max; 
int i;

if (num1 > num2)
  max = num1;
else
  max = num2;
  
while (i)
  {
    if ((max % num1 == 0) && (max % num2 == 0))
      break;
     else 
      max++;
  }  

printf("lcm is: %d", max);

return 0;

}
