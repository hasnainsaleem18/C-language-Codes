#include <stdio.h>
int main()
{

int row1;
int col1;
int row2;
int col2;

/*
these below are taking sizes for matrix 1 and matrix 2
*/

printf("enter rows size for matrix 1: ");
scanf("%d", &row1);
printf("enter col size for matrix 1: ");
scanf("%d", &col1);
printf("enter rows size for matrix 2: ");
scanf("%d", &row2);
printf("enter col size for matrix 2: ");
scanf("%d", &col2);

int matrix[row1][col1];
int matrix2[row2][col2];
//int sum[row2][col2];
int matrix3[row1][col2]; 

/*
taking values from user and storing to matrix1
*/

for(int i = 0; i<row1; i++)
{
  for (int j = 0; j<col1; j++)
  {
    printf("enter value for [%d][%d]: ", i,j);
    scanf("%d", &matrix[i][j]);
  }
}


/*
taking values from user and storing to matrix2
*/

for(int i = 0; i<row2; i++)
{
  for (int j = 0; j<col2; j++)
  {
    printf("enter value for [%d][%d]: ", i,j);
    scanf("%d", &matrix2[i][j]);
  }
}
/*
showing matrix1 in matrix form
*/
for (int i = 0; i<row1; i++)
{
  for (int j = 0; j<col1; j++)
  {
    printf(" %d", matrix[i][j]);
    if (j==row1)
    printf(" \n");
  }
}
printf(" \n");

/*
showing matrix2 in matrix form
*/


for (int i = 0; i<row2; i++)
{
  for (int j = 0; j<col2; j++)
  {
    printf(" %d", matrix2[i][j]);
    if (j==col2-1)
    printf(" \n");
  }
}

// checking if col1 is equal to row2 to continue the code and if not then matrix can not be multiplied

if (col1 != row2)
{
  printf("END");
}
else 
{

                                                                      // multiplying both matrix 
  
  for (int i = 0; i<row1; i++)
  {
    for (int j = 0; j<col2; j++)    
    {
      int sum = 0;
      for (int k = 0; k<=row1; k++)
      {
       sum = sum + matrix[i][k] * matrix2[k][j];
       // matrix3[i][j] = matrix3[i][j] + sum; 
      }
      matrix3[i][j] = sum; 
    }
  }
  printf(" \n");
  
  for(int i = 0; i<row1; i++)
  {
   for(int j = 0; j<col2; j++)
    {
      printf(" %d\t", matrix3[i][j]);
    }
    printf("\n");
  }

}

return 0;
}















