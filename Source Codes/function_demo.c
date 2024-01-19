/* This program demonstrates function calls by calling
a small function to multiply two numbers.
Written by:
Date:

*/
#include <stdio.h>


// Function Declarations
int multiply ( int , int  );
int main ( void )
{
 // Local Declarations
 int multiplier;
 int multiplicand;
 int product;
 //Statements

 printf("Enter two integers: ");
 scanf("%d %d", &multiplier, &multiplicand);

 product = multiply (multiplier, multiplicand ) ;
 //printf("Product of %d & %d is %d\n", multiplier, multiplicand,product ) ;

 return 0;
}
int multiply (int num1, int num2)
{
 // Statements
return (num1 * num2);

}
