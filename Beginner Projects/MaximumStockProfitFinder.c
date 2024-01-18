#include <stdio.h>
int stock();

int main()
{

int result;
int dollars[9] = {44,30,24,32,35,30,40,38,15};

result = stock(dollars);
if (result==0)
{
result = -1;
printf("Maximum PROFIT is: %d", result);
}
else
{
printf("Maximum PROFIT is: %d", result);
}

return 0;

}
int stock(int dollars[9])
{

int max = 0;
int store;

for(int i=0; i<9; i++)
{
  for(int j=0; j<9; j++)
  {
    if (i>j)
    {
    store = dollars[i] - dollars[j];
    if(store > max)
    {
      max = store;
      if (max == 0)
      {
      max = -1;
      }   
    }
    }
  }
}

//printf("Maximum PROFIT is: %d", max);

return max;

}  

