#include <stdio.h>

int main()
{
 char filename[]="text.txt";
 FILE *fp = fopen(filename,"r");
 if(fp==NULL)
 {
  printf("Could not open file for reading\n");
  return 1;
 }

 /*if(fpOut==NULL)
 {
  printf("Could not open file for writin\n");
  return 1;
}*/
  int num;
  printf("The file exists\n");
  while(fscanf(fp,"%d",&num)==1)
   printf("%d\n",num);

  return 0;



}
