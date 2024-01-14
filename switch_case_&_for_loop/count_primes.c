#include<stdio.h>

int is_prime(int no);

int main()
{

  int arr[9],count=0,i;
  printf("Enter elements in array\n");
  for(i=0; i<9; i++)
  scanf("%d",&arr[i]);


  for(i=0; i<9; i++){
      if(is_prime(arr[i]))
      count++;
  }
  printf("Prime Numbers Count %d\n",count);

  return 0;
}
/*
this ftn would return 1 in case no is prime 
otherwise return 0
*/
int is_prime(int no)
{
    int prime=1;
    for(int i=2; i<=no/2;i++){
        if(no%i==0){
            prime=0;   // means not a prime turn the flag to 0 and break the loop
            break;
        }
        
    }
    return prime;
}