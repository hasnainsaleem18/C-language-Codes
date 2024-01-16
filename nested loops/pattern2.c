#include<stdio.h>
int main()
{
  
  int i;
  int j;
  int k;
  char s;

  printf("Enter the any Symbol:");
  scanf("%c",&s);
  
  for(i=1;i<=9;i++)
     {
       { 
         if(i<=5)
	   {
	     for(j=1;j<=i;j++)	
 	     printf("%c",s);
	   }
	     
	     else 
			
	   {
	     for(k=9;k>=i;k--)
	     printf("%c",s);
	   }
       }
			
	printf("\n");

     }
	
}
