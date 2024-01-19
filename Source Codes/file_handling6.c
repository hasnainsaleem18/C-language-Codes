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
  
  while((c=fgetc(fpIn))!=EOF)
   fputc(c,fpOut);


 if(fclose(fpOut) == EOF)
 {
  printf("Some error in closing file\n");
  return 1;
}
printf("File written successfully\n");
return 0;
}
