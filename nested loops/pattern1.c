#include <stdio.h>

int main()
{

int rows = 5;
int i;
int j;
int k;
  for (i = 1; i<=rows; i++)
   {
     for (j = 1; j<i; j++)
      { 
        printf(" ");
      }
         for (k = 5; k>=i; k--)
      {
          printf("*");
      }
    printf("\n");
    }
      

printf("second figure is: \n");


  for (i = 1; i<=rows; i++)
   {
     for (j = 5; j>i; j--)
      { 
        printf(" ");
      }
         for (k = 1; k<=i; k++)
      {
          printf("*");
      }
    printf("\n");
    }
      
}

