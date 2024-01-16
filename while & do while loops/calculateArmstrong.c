#include <stdio.h>
#include <math.h>

int noofdigits();
int num();


int main()
{

int digit;
int i = 0;
int x;
printf("enter the num: ");
scanf("%d", &digit);

int a = noofdigits(digit,i);
//printf("t = %d", a);
//printf("d = %f", pow(2,a));
int b = num(digit,a,x);
if (b==digit)
printf("armstrong");
else 
printf("not armsstrong");

return 0;
}
int noofdigits(int digit, int i)
{

while (digit!=0)
{
i++;
digit = digit/10;
}

return i;
}
int num(int digit, int a, int x)
{

int y = 0;
int n;
int sum = 0;

for (int i=0; 1; i++)
{
if(digit%10 != 0)
{
n = digit%10;
int total=1;
for (int i=0;i<a;i++)
 {
  total=total*n;
 }
 sum = sum + total;
//y = y + pow(n, a);
//printf("d = %d", y);
digit = digit/10;
}
else
break;
}
//y = y+1;
//if (sum==digit)
//printf("armstrong");
//else 
//printf("not armsstrong");

return sum;
}
 





















