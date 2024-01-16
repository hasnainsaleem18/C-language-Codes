#include <stdio.h>
int hcf();
int main()
{

int num1;
int num2;

printf("enter 1st num: \n");
scanf("%d", &num1);
printf("enter 2nd num: \n");
scanf("%d", &num2);

hcf(num1, num2);

}
int hcf(int num1, int num2)
{

int max; 
int i;

for (max= 1; max<=num1 || max<= num2; max++)
  {
    if ((num1 % max == 0) && (num2 % max == 0))
      i = max;
  }  

printf("hcf is: %d", i);

return 0;

}
