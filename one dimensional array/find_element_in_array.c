#include<stdio.h>
int main()
{
int count=0;
int num;

printf("arr[1,2,4,2,3,4,9,8,9,2]\n");
printf("enter the number to search: ");
scanf("%d",&num);


int arr1[10]={1,2,4,2,3,4,9,8,9,2};

for(int i=0;i<10;i++)
{
if(arr1[i]==num)
{
count++;
}
}
printf("%d has appeared %d times in array.\n",num,count);
return 0;
}
