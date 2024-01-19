#include <stdio.h>

int addTwoDigits(int num);
int firstDigit(int num);
int secondDigit(int num);

int main(void)
{
 int number;
 int sum;

 number = 78;
 sum = addTwoDigits(number);

 printf("The sum is %d\n",sum);

 return 0;

}

int addTwoDigits(int num)
{

 int result;

 result = firstDigit(num) + secondDigit(num);
 return result;
}

int firstDigit(int num)
{

return (num%10);
}

int secondDigit(int num)
{

return (num/10)%10;
}
