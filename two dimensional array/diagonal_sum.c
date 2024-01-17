#include <stdio.h>

int main()
{

int rows;
int col;

printf("enter rows: ");
scanf("%d", &rows);
printf("enter col: ");
scanf("%d", &col);

int a[rows][col];
int sum = 0;

for(int i=0; i<rows; i++)
 for(int j=0; j<col; j++)
 {
   printf("a[%d][%d]", i+1, j+1);
   scanf("%d", &a[i][j]);
 }
 
 printf("\n");
 
for(int i=0; i<rows; i++)
 {
 for(int j=0; j<col; j++)
 {
   printf("%d", a[i][j]);
 }
 printf("\n");
 }
 
 printf("\n");
 int j;
 
for(int i=0; i<rows;)
{
  if(j==i)
  {
    sum = sum + a[i][j];
    //printf("%d, ", sum);
    j++;
  }
  i++;
  //printf("sum is : %d", sum);
}
 


printf("sum is : %d", sum);

return 0;

}
