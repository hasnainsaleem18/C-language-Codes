#include <stdio.h>
int isLeap(int year);                      // function in integer declare with year as integer parameter
int main()
{

int year;                                // initialise variable type integer
printf("enter year to check: \n");       // input taking from user
scanf("%d", &year);                      // taking year and storing in it
isLeap(year);                            // calling function with year as parameter.
return 0;

}
int isLeap(int year)                     // function is being called with integer type parameter
{

if (year % 400 == 0)                      // loop is start that year is divide by 400 and if remainder is 0 then...
{
printf("%d is a leap year \n", year);      // it is leap year...print on the screen
}
else if (year % 100 == 0)                    // if it is not divide by 400 then check for 100 and if its remainder is 0
{
printf("%d is not a leap year \n", year);    // then it is not leap year... print on screen
}
else if (year % 4 == 0)                    // if both statement is false then this will be check by same method of equal to 0...
{
printf("%d is a leap year \n", year);      // if yes then it is leap year
}
else
{
printf("%d is not a leap year \n", year);     // if all statements above are wrong then this will be print on the screen.
}

return 0;

}
