#include <stdio.h>

int main()
{

char membership;
int age;

printf("Enter 'm'or'M' for Members or 'n'or'N' for non members: ");
scanf("%c", &membership);
printf("Enter the age: ");
scanf("%d", &age);

if ((membership == 'm'|| membership == 'M') && (age < 65))
   printf("The fee is $10\n");
else if ((membership == 'm'|| membership == 'M') && (age >= 65))
   printf("The fee is $5\n");
else 
   printf("The fee is $20\n");
   
return 0;

}
