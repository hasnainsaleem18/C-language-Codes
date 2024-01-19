#include <stdio.h>

int main()
{
 char filename[]="text.txt";
 FILE *fp = fopen(filename,"w");
 if(fp==NULL)
 {
  printf("Could not open file\n");
  return 1;
 }


  printf("The file exists\n");
  for(int i=1;i<=10;i++)
    fprintf(fp,"%d\n",i);

 if(fclose(fp) == EOF)
 {
  printf("Some error in closing file\n");
  return 1;
}
printf("File written successfully\n");
return 0;
}
