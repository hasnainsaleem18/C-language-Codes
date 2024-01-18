
// sir i have taken help from internet to how remove duplicate elements from array
// whole logic is mine only 10% idea of how to remove duplicate elements from array is taken from internet :)

#include <stdio.h>
void union_array(int arr[], int arr2[], int arr3[], int arr4[], int count, int i, int j); // function to pass the array and print the union of arrays
int main()
{

  int arr[8] = {1, 2, 3, 4, 5, 6, 3, 2};
  int arr2[4] = {1, 3, 5, 7};
  int arr3[12] = {0};
  int arr4[12] = {0};
  int count = 0;
  int i;
  int j;

  union_array(arr, arr2, arr3, arr4, count, i, j); // calling function

  return 0;
}
void union_array(int arr[], int arr2[], int arr3[], int arr4[], int count, int i, int j)
{

  /*
  this for loop is to add two arrays in to one array that is arr3
  */

  for (i = 0; i < 8; i++)
  {
    arr3[i] = arr[i];
  }
  for (int j = 0; j < 4; j++)
  {
    arr3[i] = arr2[j];
    i++;
  }

  /*
  this for loop is to remove the duplicate elemnts from arr3 and store to arr4
  */

  for (int i = 0; i < 12; i++)
  {
    for (j = 0; j < count; j++)
    {
      if (arr3[i] == arr4[j])
        break;
    }
    if (j == count)
    {
      arr4[count] = arr3[i];
      count++;
    }
  }

  /*
  this for loop is to display union from arr4
  */

  printf("\nUNION OF ARRAY: ");

  for (int i = 0; i < count; i++)
    printf("%d ", arr4[i]);
  printf("\n");
}
