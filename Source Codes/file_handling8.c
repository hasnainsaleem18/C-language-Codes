#include <stdio.h>

int main()
{
 char filename1[]="text.txt";

 FILE *fpIn = fopen(filename1,"r");
 int countWd = 0;
 char word = 'o';

 if(fpIn==NULL)
 {
  printf("Could not open file for reading\n");
  return 1;
 }


  int c;
  while((c=fgetc(fpIn))!=EOF)
  {
    if(c==' ' || c=='\n' || c == '\t')
      word = 'o';
    else
      if(word == 'o')
      {
        countWd++;
        word='i';
      }

   }


printf("Number of words is %d:\n",countWd);

return 0;
}
