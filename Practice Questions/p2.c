#include <stdio.h>
int main()
{

int j;
int size;
int target;
printf("enter the size: ");
scanf("%d", &size);
int nums[size];

for(int i = 0; i<size; i++)
{
  printf("enter the elements [%d]: ", i+1);
  scanf("%d", &nums[i]);
}

printf("enter the target: ");
scanf("%d", &target);

for(int i=0; i<size; i++)
{
  for(j=1; j<size; j++)
  {
    if(nums[i]+nums[j] == target)
    {
      printf("index are : [%d,%d] ", i,j);
      break;
    }
  }
  if(nums[i]+nums[j] == target)
  {
    break;
  } 
}

return 0;

}
