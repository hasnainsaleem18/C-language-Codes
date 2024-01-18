#include <stdio.h>
int main()
{
int *p1;
int *p2;
int a;
int b;
p1 = &a;
p2 = &b;
printf("enter first number: ");
scanf("%d", p1);
printf("enter second number: ");
scanf("%d", p2);
if (*p1 > *p2)
{
printf("this number is largest %d\n", *p1);
}
else
{
printf("this number is largest %d\n", *p2);
}

return 0;
}
