#include <stdio.h>
int main() 
{
  int a[3][3]; 
  int transpose;
  int rows;
  int col;
  
  printf("Enter rows: ");
  scanf("%d", &rows);
  printf("Enter columns: ");
  scanf("%d", &col);

  
  
  printf("\nEnter matrix elements:\n");
  
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < col; ++j)
     {
       printf("Enter element a%d%d: ", i + 1, j + 1);
       scanf("%d", &a[i][j]);
     }

transpose = a[0][1];
a[0][1] = a[1][0];
a[1][0] = transpose;

  
  printf("\nTranspose of the matrix:\n ");
  for (int i = 0; i < col; ++i)
   for (int j = 0; j < rows; ++j)
  {
    printf("%d  ", a[i][j]);
   
    printf("\n");
  }
  return 0;
  }
