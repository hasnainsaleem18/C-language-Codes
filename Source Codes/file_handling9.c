#include <stdio.h>

int main()
{
 char filename1[]="text3.txt";

 FILE *fpOut = fopen(filename1,"w");


 if(fpOut==NULL)
 {
  printf("Could not open file for writing\n");
  return 1;
 }


  int c;
  while((c=getchar())!=EOF)
  {
    fputc(c,fpOut);

   }
   if(fclose(fpOut) == EOF)
   {
    printf("Some error in closing file\n");
    return 1;
  }

printf("Your file is comlete\n");

return 0;
}
