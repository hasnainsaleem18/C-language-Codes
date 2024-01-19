#include <stdio.h>

int main()
{

 printf("Value is %f\n",2+3.0/6);

 char aChar = 'A';
 int intNum = 200;
 double fltNum = 245.3;

 printf("aChar contains %c\n",aChar);
 printf("aChar contains %d\n",aChar);
 printf("intNum contains %d\n",intNum);
 printf("fltNum contains %f\n",fltNum);
 //return 0;

 printf("The sum of  int and float values is %f\n",intNum + fltNum);
 printf("The sum of  char and float values is %f\n",aChar + fltNum);

 //return 0;

 intNum = intNum+fltNum;
 printf("New Value of intNum is %d\n",intNum);

 aChar = intNum + aChar;

 printf("New value of aChar is %c\n",aChar);
 printf("New value of aChar is %d\n",aChar);
 return 0;



}
