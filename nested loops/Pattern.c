#include <stdio.h>

int main() 
{

printf("--i--\n\n");
int i;
int j;
int k;
int l;
int num = 1;
int alphabet = 65;

for (i = 1; i <= 5; ++i) 
{
  for (j = 1; j <= i; ++j)
   {
     printf("%d", num);
   }

++num;
printf("\n");
}

printf("\n--ii--\n\n");

for (i = 1; i <= 5; ++i) 
{
  for (j = 1; j <= 6 - i; ++j)
   {
     printf(" ");
   }
  for (k = 1; k <= i; ++k)
   {
     printf("%d", k);
   }

printf("\n");   
}   
 
printf("\n--iii--\n\n");

for (i = 'A'; i <= 'E'; ++i) 
{
  for (j = 'A'; j <= i; ++j)
   {
     printf("%c", j);
   }

printf("\n");
}   

printf("\n--iv--\n\n");

for (i = 1; i <= 5; ++i)
{
  for (j = 0; j < 5 - i; ++j)
   {
     printf(" ");
   }
  for(k = 1; k < i; ++k)
   {
     printf("%d", k);
   }
  for(l = i; l >= 1; --l)
   {
     printf("%d", l);
   }

printf("\n");
}

printf("\n--v--\n\n");

for (i = 0; i <= 5; ++i)
{
  for (j = 0; j <= i; ++j)
  {
    printf(" ");
  }
  for (k = 0; k <= 5 - i; ++k)
  {
    printf("%c ", alphabet + k);
  }
    
printf("\n");
}

printf("\n--vi--\n\n");

for (i = 0; i < 4; ++i) 
{
  for (j = 0; j < (2 * 4); ++j)
  {
    if (i + j <= 3)  
    printf("*");
    else
	if ((i + 4) <= j)  
        printf("*");
    else
    printf(" ");
  }
        
printf("\n");
}
    
printf("\n--vii--\n\n");
   
for (i = 0; i < 6; ++i)
{
  for (j = 0; j < 6; ++j)
   {
     if ((i == 0) || (i + j == 5) || (i == 5))
     printf("*");
     else
     printf(" ");
   }

printf("\n");
}

printf("\n--viii--\n\n");

for (i = 0; i < 5; ++i) 
{
  for (j = 0; j < 5; ++j)
   {
     if ((i == 0) || (i == 4))
     printf("*");
     else 
     {
       if ((j == 0) || (j == 4))
       printf("*");
       else 
       printf(" ");
     }
    
    }
    
printf("\n");
}

return 0;

}






















