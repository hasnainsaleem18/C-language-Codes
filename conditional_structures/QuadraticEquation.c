#include <math.h>
#include <stdio.h>

int main()
{

double a;
double b;
double root1;
double root2;
double c;
double i = -1;

printf("The Quadratic Equation is (ax^2 + bx + c = 0) ");
printf("\nEnter value a: ");
scanf("%lf", &a);
printf("Enter value b: ");
scanf("%lf", &b);
printf("Enter value c: ");
scanf("%lf", &c);

double disc;
disc = ((b*b)*(-4)*(a*c));

if ((a == 0) || (b == 0) || (c == 0))
   printf("The value can’t be zero");
else if ((a < 0) || (b < 0) || (c < 0))
   printf("Values must be greater than Zero");
else if (disc > 0)
   {
     printf("The roots are real and unequal\n");
     double dics;
     dics = disc;
     root1 = (-b+(sqrt(dics))*1/2/2*a);
     root2 = (-b-(sqrt(dics))*1/2/2*a);
     printf("The Root1 is %lf and Root2 is %lf \n", root1, root2); 
   } 
else if (disc < 0)
   {
     printf("The roots are imaginary\n");
     double dics;
     dics = disc;
     sqrt(dics);
     root1 = -b+(-1)*(dics)*1/2/2*a;
     root2 = -b-(-1)*(dics)*1/2/2*a;
     printf("The Root1 is %lf and Root2 is %lf \n", root1, root2);
   }
else if (disc == 0)
   {
     printf("The roots are real\n");
     double dics;
     dics = disc;
     root1 = root2 = -b/(2*a);
     printf("The Root1 is %lf and Root2 is %lf \n", root1, root2);
   }
else 
   printf("Enter Values Again\n");

return 0;

}  
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
