#include <stdio.h>

int main()
{
 char filename1[]="text.txt";

 FILE *fpIn = fopen(filename1,"r");
 int countCh = 0, countLn = 0;

 if(fpIn==NULL)
 {
  printf("Could not open file for reading\n");
  return 1;
 }


  int c;
  while((c=fgetc(fpIn))!=EOF)
  {
    if(c!='\n')
      countCh++;
    else
      countLn++;

  }


printf("Number of characters is %d:\n",countCh);
printf("Number of lines is %d:\n",countLn);
return 0;
}
