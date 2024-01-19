#include <stdio.h>
#define size 5
int main()
{
  const int size2 = 5;
  int arr2[size2];
 char arr1[3] = {'1','2','3'};

 printf("Address of a char array %p\n",arr1);
 printf("%p\n",arr1+1);
 printf("Address of an int array %p\n",arr2);
 printf("%p\n",arr2+1);
 for(int i=0;i<3;i++)
  printf("%c\n",arr1[i]);

return 0;
}
