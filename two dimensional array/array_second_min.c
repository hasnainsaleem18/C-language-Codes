#include <stdio.h>

int main()
{

  int a[7];
  int first;
  int second;
  int max;

  printf("Enter elements in array\n");
  for (int i = 0; i < 7; ++i)
  {
    printf("enter a[%d] : ", i);
    scanf("%d", &a[i]);
  }

  max = a[0];
  first = max;
  second = a[1];
  for (int i = 0; i < 7; i++)
  {
    if (a[i] < first)
    {
      second = first;
      first = a[i];
    }

    else if (a[i] < second && a[i] != first)
      second = a[i];
  }
  // if (second == max)
  printf("second is %d", second);

  return 0;
}
