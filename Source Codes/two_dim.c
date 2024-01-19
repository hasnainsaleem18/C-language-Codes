
#include <stdio.h>
#define MAX_ROWS 5
#define MAX_COLS 2

void getData(int table[][MAX_COLS]);
void columnAverage(int table[][MAX_COLS], float colAvg[]);
void rowAverage(int table[][MAX_COLS], float rowAvg[]);
void printTables(int table[][MAX_COLS], float rowAvg[],float colAvg[]);

int main (void )
{

 int table[MAX_ROWS][MAX_COLS];
 float rowAve [MAX_ROWS] = {0};
 float colAve [MAX_COLS] = {0};

 printf("%p\n",table+1);
 printf("%p\n",table[0]);
 printf("%p\n",table[1]);



 return 0;
 getData(table);

 columnAverage(table, colAve);

 rowAverage(table, rowAve);

 printTables(table, rowAve, colAve);

 return 0;

}

void getData (int table[][MAX_COLS])
{
 int row, col;

 for (row =0 ;row < MAX_ROWS; row++)
	for(col = 0; col < MAX_COLS; col++)
	{
	 printf("Enter integer and press enter key\n");
         scanf("%d",&table[row][col]);
        }

 return;
}
void columnAverage(int table[][MAX_COLS], float colAvg[])
{
 int row, col;


 for (col =0 ;col < MAX_COLS; col++)
 {
	for(row = 0; row < MAX_ROWS; row++)
		colAvg [col] += table[row][col];
        colAvg[col] /= MAX_ROWS;
 }

 return;

}

void rowAverage(int table[][MAX_COLS], float rowAvg[])
{
 int row, col;


 for (row =0 ;row < MAX_ROWS; row++)
 {
	for (col = 0 ;col < MAX_COLS; col++)
		rowAvg [row] += table[row][col];
        rowAvg[row] /= MAX_COLS;
 }

 return;

}

void printTables(int table[][MAX_COLS], float rowAvg[],float colAvg[])
{
  int row, col;


  for (row =0 ;row < MAX_ROWS; row++)
  {
 	for (col = 0 ;col < MAX_COLS; col++)
 		printf("%d\t",table[row][col]);

  printf("\n");
  }

 for (row =0 ;row < MAX_ROWS; row++)
  printf("The average of row %d is %f\n",row, rowAvg[row]);

for (col =0 ;col < MAX_COLS; col++)
  printf("The average of column %d is %f\n",col, colAvg[col]);

return;

}
