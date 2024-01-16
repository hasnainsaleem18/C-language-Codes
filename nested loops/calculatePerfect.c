#include <stdio.h>
int perfect(int x);
int main()
{

 int num;
 int result;
 result = perfect(num);
 return 0;

}
int perfect(int num)
{
    int perfect;
    int sum;
    int count = 0;
    for(num = 6; count < 4 ; num++)
    {
        sum = 0;
       
       for(int i=1; i < num; i++)
          {
             perfect = num % i;
             if(perfect == 0)
          {
             sum = sum + i;
          }
        
          }
    
        if(sum == num)
    
      {
        printf("%d is a perfect number\n", num);
        count++;
      }
    
   }
    return num;
}
