#include <stdio.h>
int missing();
int main()
{
int a[5];
for (int i=0; i < 5;i++)
{
 scanf("%d",&a[i]);
}

int s = missing(a, 6);
if (s!=0 && s<=a[5])
  {
      printf("The Answer is : %d \n", s);
  }
else 
{
int value=a[0]; 
 for (int i=0;i<5;i++)
 {
  if (a[i]>value)
      value=a[i];     
 }
  if (value>0)
  {
  value++;
  printf("The answer is: %d\n",value);
  }
  else{
  printf("The answer is: 1");
  }
}  
return 0;
}
int missing(int a[], int size)
{
int i, sum = 0, n = size + 1; 
    for(i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
   
    return (n*(n+1))/2 - sum; 
 }
