#include <stdio.h>

int main()
{
 char filename1[]="text.txt";
 char filename2[]="text2.txt";
 FILE *fpIn = fopen(filename1,"r");
 FILE *fpOut = fopen(filename2,"w");
 if(fpIn==NULL)
 {
  printf("Could not open file for reading\n");
  return 1;
 }

 if(fpOut==NULL)
 {
  printf("Could not open file for writing\n");
  return 1;
 }
  int c;
  int countCh = 0;
  int countLn = 0;
  while((c=fgetc(fpIn))!=EOF)
  {

    if(c=='\n')
    countLn++;
    else
     countCh++;
  }


 if(fclose(fpOut) == EOF)
 {
  printf("Some error in closing file\n");
  return 1;
}
printf("File written successfully\n");
printf("Characters:%d Lines:%d\n",countCh, countLn);
return 0;
}
