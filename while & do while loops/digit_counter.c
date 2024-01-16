#include <stdio.h>
int main()
{

int digits;
int i ;

printf("enter digits:");
scanf("%d", &digits);

while (digits != 0 )
   {
     i++;
    digits = digits / 10;
    // ++i;
   }
printf("length: %d", i);
return 0;

}
