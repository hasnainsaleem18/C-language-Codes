#include <stdio.h>
void foo(int);
void foo2(int[]);
void foo3(int*);

int main()
{
int s = 10;

int arr2[s];

for(int i=0;i<10;i++)
  arr2[i]=i;
printf("The vale is %d\n",arr2[3]);
 int a;

 printf("Enter an integer value\n");
 scanf("%d",&a);
 printf("The value of a is %d\n",a);
 printf("The address of a is %p\n",&a);

int *b = &a;

 printf("The address of a is %p\n",b);
 printf("The value of a using its address is %d\n",*b);



 foo(a);
 printf("The value of a after calling function is %d\n",a);

 foo3(b);
 printf("The value of a after passing address to function is %d\n",a);

 int arr[] = {1,2,5,6,3};

 printf("The value of arr is %p\n",arr);

 foo2(arr);

 for(int i=0;i<5;i++)
  printf("%d\t",arr[i]);

printf("\n");


 return 0;





}

void foo(int a)
{
 a = 20;

}

void foo2(int a[])
{
 for(int i=0;i<5;i++)
   a[i] *= 2;
}

void foo3(int* c)
{
  *c = 20;
  int *d = c;
  *d = 30;
}
