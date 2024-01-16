#include <stdio.h>
int main()
{ 

int n = 0;
int x = 0;
int sum = 0;
int i;
int j;
int k;

for (i = 1;; ++i)
{ 
  for (j = 1; j <= i; ++j)
    sum = sum + j;
  for (k = 1; k <= sum; ++k)
  {
    if (sum % k == 0)
    x++;
  }
  if (x > 10)
  {
    printf("%d \n", sum);
    n++;
  }
  if (n == 10)
  break;
}

return 0;

}
