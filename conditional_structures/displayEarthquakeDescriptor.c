#include <stdio.h>
int main()
{

float num;                             // initialise num as float type
printf("enter magnitude : \n");       // take the magnitude from user in float
scanf("%f", &num);             // store in num 

if (num < 2.0)                                                                                     // this is loop that if magnityude is lesser than 
printf("a magnitude %.2f earthquake is considered to be a micro earthquake. \n", num);             // prescribed va;lue then special message will be printed 
if (num >= 2.0 && num < 3.0)                                                                       // about earthquake.
printf("a magnitude %.2f earthquake is considered to be a very minor earthquake. \n", num);
if (num >= 3.0 && num < 4.0)
printf("a magnitude %.2f earthquake is considered to be a minor earthquake. \n", num);
if (num >= 4.0 && num < 5.0)
printf("a magnitude %.2f earthquake is considered to be a light earthquake. \n", num);
if (num >= 5.0 && num < 6.0)
printf("a magnitude %.2f earthquake is considered to be a moderate earthquake. \n", num);
if (num >= 6.0 && num < 7.0)
printf("a magnitude %.2f earthquake is considered to be a strong earthquake. \n", num);
if (num >= 7.0 && num < 8.0)
printf("a magnitude %.2f earthquake is considered to be a major earthquake. \n", num);
if (num >= 8.0 && num < 9.0)
printf("a magnitude %.2f earthquake is considered to be a great earthquake. \n", num);
if (num >= 10.0)
printf("a magnitude %.2f earthquake is considered to be a meteoric earthquake. \n", num);           // loop will be end after printing the num to user

return 0;

}
