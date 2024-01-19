#include <stdio.h>
#define size 5
int cube(int);
void cube2(int[]);
int main()
{

  int arr[10];
  int arr2[10];

 for(int i=0;i<10;i++)
  {
   arr[i] = i*2;
   printf("%d\t",arr[i]);
 }

printf("\n");

for(int i=0;i<10;i++)
{
  arr2[i]=cube(arr[i]);
  printf("%d\t",arr2[i]);
}
cube2(arr);
printf("After function....\n");

for(int i=0;i<10;i++)
  printf("%d\t",arr[i]);

printf("\n");


return 0;
}

int cube(int n)
{

  n = n*n*n;
  return n;
}

void cube2(int a[])
{

 for (int i=0;i<10;i++)
   a[i] = cube(a[i]);


}
