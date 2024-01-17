#include <stdio.h>

int main()
{
  int ar[10];
  printf("Enter 10 integers: ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &ar[i]);
  }
  printf("Displaying values : \n");
  for (int i = 0; i < 10; i++)
  {
    printf(" %d", ar[i]);
  }

  int min = ar[0];
  int max = ar[0];
  float sum;
  float avg;
  int last_element;
  int index2;
  for (int i = 0; i < 10; i++)
  {

    if (min > ar[i])
      min = ar[i];

    if (max < ar[i])
      max = ar[i];

    sum = sum + ar[i];

    last_element = ar[9];

    index2 = ar[2];
  }
  printf("\nMinimum= %d", min);
  printf("\nMaximum= %d", max);

  avg = sum / 10;
  printf("\nAverage= %.2f", avg);

  printf("\nLast elements= %d", last_element);
  printf("\nValue at index 2=%d", index2);

  printf("Displaying values----> : \n");
  for (int i = 9; i >= 0; i--)
  {

    printf(" %d , ", ar[i]);
  }
  int even;
  int odd;
  int count1 = 0;
  int count2 = 0;
  for (int i = 0; i < 10; i++)
  {
    if (ar[i] % 2 == 0)
      count1++;
    else
      count2++;
  }
  printf("\nEven count: %d", count1);
  printf("\nOdd count: %d\n", count2);

  return 0;
}
