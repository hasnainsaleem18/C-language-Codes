#include <stdio.h>

int main()
{
 char filename[]="text.txt";
 FILE *fp = fopen(filename,"r");
 if(fp==NULL)
 {
  printf("Could not open file\n");
  return 1;
 }

  printf("The file exists\n");

  return 0;
}
