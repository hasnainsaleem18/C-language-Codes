#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
 int num1 = -10;
 printf("The absolute value of %d is %d\n",num1,abs(num1));

 float num2 = -10.53;
 printf("The absolute value of %f is %f\n",num2,fabs(num2));

 //return 0;
 float num3 = 10.53;

 num3 = ceil(num3);
 printf("The value of %f after ceil function is %f\n",num3,ceil(num3));
 printf("The value of %f after floor function is %f\n",num3,floor(num3));

 return 0;





}
