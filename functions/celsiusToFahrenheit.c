#include <stdio.h>                                                       
float celsiusToFahrenheit(int celsius);                    // function in float declare with celsius as integer parameter   
int main()                                                 // main function start
{

int celsius;                                                // initialise variable type integer
float answer;                                               // initialise variable type float  

printf("Enter the value in celsius: \n");                   // input taking from user
scanf("%d", &celsius);                                      // taking celsius and storing in it

answer = celsiusToFahrenheit(celsius);                      // calling function and storing its return value and also giving function the input value
printf("The value in Fahrenheit is: %.2f \n", answer);      // showing output on screen with 2 decimal places 
return 0;                                                  // ending program

}
float celsiusToFahrenheit(int celsius)         // function is being called with integer type parameter
{

float fah;                                      // float type variable is initailised
fah = (9 * (float)celsius /5) + 32;             // formula of converting celsius to fahrenheit with float type
return fah;                                     // returning answer to function that is calculate on line 21

}
