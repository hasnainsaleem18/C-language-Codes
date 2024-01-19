#include <stdio.h>

int main()
{


 char aChar = '\0';
 int intNum1 = 100;
 int intNum2 = 45;
 double fltNum1 = 100.0;
 double fltNum2 = 45.0;
 double fltNum3;

 fltNum3 = (double) (intNum1 / intNum2);
 printf("fltNum3 contains %f\n",fltNum3);

 fltNum3 = (double) intNum1 / intNum2;
 printf("fltNum3 contains %f\n",fltNum3);

 aChar = (char) (fltNum1/fltNum2);
 printf("aChar contains %d\n",aChar);




 return 0;



}
