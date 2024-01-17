#include <stdio.h>

int main()
{

  int a[3][4];
  int max;

  printf("Enter elements in array\n");
  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 4; ++j)
    {
      printf("enter a[%d%d] : ", i, j);
      scanf("%d", &a[i][j]);
    }

  max = a[0][0];

  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 4; ++j)
    {
      if (max < a[i][j])
        max = a[i][j];
    }

  printf("Largest element = %d", max);

  return 0;
}
