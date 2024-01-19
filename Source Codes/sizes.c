#include <stdio.h>
#include <limits.h>


int main(){

short a;
printf("The number of bytes required for storing an integer is %lu\n", sizeof(int));
printf("The number of bytes required for storing a short integer is %lu\n", sizeof(short int));
printf("The number of bytes required for storing a long integer is %lu\n", sizeof(long int));
printf("The number of bytes required for storing a float is %lu\n", sizeof(float));
printf("The number of bytes required for storing a double float is %ld\n", sizeof(double));
printf("The number of bytes required for storing an long double %ld\n", sizeof(long double));

return 0;

}
