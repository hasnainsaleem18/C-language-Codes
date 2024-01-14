#include <stdio.h>
int triangle();     // function is declared 
int main()
{

int first;      // initialse the angles 
int second;
int third;

printf ("enter the first angle: \n");
scanf("%d", &first);                             // taking three angles from user and dtoring to first, second and third
printf ("enter the second angle: \n");
scanf("%d", &second);
printf ("enter the third angle: \n");
scanf("%d", &third);

triangle(first, second, third);        // function is calling with parameters
return 0;

}
int triangle(int first, int second, int third)
{

if (first == second && first == third && second == third)                 //if loop is start to calculate triangle is equilateral or not
printf("equalateral triangle \n");
if (first != second && first != third && second != third)           // loop to calculate it is scalene or not
printf("scalene triangle \n");
if ((first == second && first != third) || (third == first && third != second) || (third == second && third != first))  // loop to find triangle is isosceles or not
printf("isosceles triangle \n");

return 0;

}
