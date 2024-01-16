#include <stdio.h>

int main()
{

int num;
printf("enter num: ");
scanf("%d", &num);
int sum = 0;

for (int i = 1; i < num; i++)
{
  if (num % i == 0)
  {
  printf("%d ", i);
  sum = sum + i;
 }// printf("%d ", i);
}
printf("%d ", sum);
if (sum==num)
printf("perfect num");

return 0;
}
