// sir exit loop is not functioning well so sir might it effect on code
// if you will remove that loop code will work fine


#include <stdio.h>
int main()
{


printf("       A  B  C  D  E  F\n");
char board[13][6] = {{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'},{'*','*','*','*','*','*'}};

for(int i=0; i<13; i++)
{
  printf("ROW %d: ",i+1);
  for(int j=0; j<6; j++)
  {
    printf("%c  ", board[i][j]);
  }
  //printf("ROW 1: ");
  printf("\n");
}

char ticket_type;
int row_no;
char seat;

for(int i=0; i<78; i++)
{

printf("enter the ticket type: ");
scanf("\n%c", &ticket_type);
printf("enter the row no: ");
scanf("\n%d", &row_no);
printf("enter the seat: ");
scanf("\n%c", &seat);

printf("enter -1 to exit\n");

if (ticket_type == -1)
break;
else if (row_no == -1)
break;
else if (seat == -1)
break;

if (ticket_type == 'F')
{
 if (row_no == 1)
  {
    if (seat == 'A' && board[0][0] == '*')
    board[0][0] = 'x';
    else if (seat == 'B' && board[0][1] == '*')
    board[0][1] = 'x';
    else if (seat == 'C' && board[0][2] == '*')
    board[0][2] = 'x';
    else if (seat == 'D' && board[0][3] == '*')
    board[0][3] = 'x';
    else if (seat == 'E' && board[0][4] == '*')
    board[0][4] = 'x';
    else if (seat == 'F' && board[0][5] == '*')
    board[0][5] = 'x';
  }

 if (row_no == 2)
  {
    if (seat == 'A' && board[1][0] == '*')
    board[1][0] = 'x';
    else if (seat == 'B' && board[1][1] == '*')
    board[1][1] = 'x';
    else if (seat == 'C' && board[1][2] == '*')
    board[1][2] = 'x';
    else if (seat == 'D' && board[1][3] == '*')
    board[1][3] = 'x';
    else if (seat == 'E' && board[1][4] == '*')
    board[1][4] = 'x';
    else if (seat == 'F' && board[1][5] == '*')
    board[1][5] = 'x';
  }
}
if (ticket_type == 'B')
{
 if (row_no == 3)
  {
    if (seat == 'A' && board[3][0] == '*')
    board[3][0] = 'x';
    else if (seat == 'B' && board[3][1] == '*')
    board[3][1] = 'x';
    else if (seat == 'C' && board[3][2] == '*')
    board[3][2] = 'x';
    else if (seat == 'D' && board[3][3] == '*')
    board[3][3] = 'x';
    else if (seat == 'E' && board[3][4] == '*')
    board[3][4] = 'x';
    else if (seat == 'F' && board[3][5] == '*')
    board[3][5] = 'x';
  }
  if (row_no == 4)
  {
    if (seat == 'A' && board[4][0] == '*')
    board[4][0] = 'x';
    else if (seat == 'B' && board[4][1] == '*')
    board[4][1] = 'x';
    else if (seat == 'C' && board[4][2] == '*')
    board[4][2] = 'x';
    else if (seat == 'D' && board[4][3] == '*')
    board[4][3] = 'x';
    else if (seat == 'E' && board[4][4] == '*')
    board[4][4] = 'x';
    else if (seat == 'F' && board[4][5] == '*')
    board[4][5] = 'x';
  }
    if (row_no == 5)
  {
    if (seat == 'A' && board[5][0] == '*')
    board[5][0] = 'x';
    else if (seat == 'B' && board[5][1] == '*')
    board[5][1] = 'x';
    else if (seat == 'C' && board[5][2] == '*')
    board[5][2] = 'x';
    else if (seat == 'D' && board[5][3] == '*')
    board[5][3] = 'x';
    else if (seat == 'E' && board[5][4] == '*')
    board[5][4] = 'x';
    else if (seat == 'F' && board[5][5] == '*')
    board[5][5] = 'x';
  }
  if (row_no == 6)
  {
    if (seat == 'A' && board[6][0] == '*')
    board[6][0] = 'x';
    else if (seat == 'B' && board[6][1] == '*')
    board[6][1] = 'x';
    else if (seat == 'C' && board[6][2] == '*')
    board[6][2] = 'x';
    else if (seat == 'D' && board[6][3] == '*')
    board[6][3] = 'x';
    else if (seat == 'E' && board[6][4] == '*')
    board[6][4] = 'x';
    else if (seat == 'F' && board[6][5] == '*')
    board[6][5] = 'x';
  }
  if (row_no == 7)
  {
    if (seat == 'A' && board[7][0] == '*')
    board[7][0] = 'x';
    else if (seat == 'B' && board[7][1] == '*')
    board[7][1] = 'x';
    else if (seat == 'C' && board[7][2] == '*')
    board[7][2] = 'x';
    else if (seat == 'D' && board[7][3] == '*')
    board[7][3] = 'x';
    else if (seat == 'E' && board[7][4] == '*')
    board[7][4] = 'x';
    else if (seat == 'F' && board[7][5] == '*')
    board[7][5] = 'x';
  }
}
if (ticket_type == 'E')
{
 if (row_no == 8)
  {
    if (seat == 'A' && board[8][0] == '*')
    board[8][0] = 'x';
    else if (seat == 'B' && board[8][1] == '*')
    board[8][1] = 'x';
    else if (seat == 'C' && board[8][2] == '*')
    board[8][2] = 'x';
    else if (seat == 'D' && board[8][3] == '*')
    board[8][3] = 'x';
    else if (seat == 'E' && board[8][4] == '*')
    board[8][4] = 'x';
    else if (seat == 'F' && board[8][5] == '*')
    board[8][5] = 'x';
  }
 if (row_no == 9)
  {
    if (seat == 'A' && board[9][0] == '*')
    board[9][0] = 'x';
    else if (seat == 'B' && board[9][1] == '*')
    board[9][1] = 'x';
    else if (seat == 'C' && board[9][2] == '*')
    board[9][2] = 'x';
    else if (seat == 'D' && board[9][3] == '*')
    board[9][3] = 'x';
    else if (seat == 'E' && board[9][4] == '*')
    board[9][4] = 'x';
    else if (seat == 'F' && board[9][5] == '*')
    board[9][5] = 'x';
  }
 if (row_no == 10)
  {
    if (seat == 'A' && board[10][0] == '*')
    board[10][0] = 'x';
    else if (seat == 'B' && board[10][1] == '*')
    board[10][1] = 'x';
    else if (seat == 'C' && board[10][2] == '*')
    board[10][2] = 'x';
    else if (seat == 'D' && board[10][3] == '*')
    board[10][3] = 'x';
    else if (seat == 'E' && board[10][4] == '*')
    board[10][4] = 'x';
    else if (seat == 'F' && board[10][5] == '*')
    board[10][5] = 'x';
  }
 if (row_no == 11)
  {
    if (seat == 'A' && board[11][0] == '*')
    board[11][0] = 'x';
    else if (seat == 'B' && board[11][1] == '*')
    board[11][1] = 'x';
    else if (seat == 'C' && board[11][2] == '*')
    board[11][2] = 'x';
    else if (seat == 'D' && board[11][3] == '*')
    board[11][3] = 'x';
    else if (seat == 'E' && board[11][4] == '*')
    board[11][4] = 'x';
    else if (seat == 'F' && board[11][5] == '*')
    board[11][5] = 'x';
  }
 if (row_no == 12)
  {
    if (seat == 'A' && board[12][0] == '*')
    board[12][0] = 'x';
    else if (seat == 'B' && board[12][1] == '*')
    board[12][1] = 'x';
    else if (seat == 'C' && board[12][2] == '*')
    board[12][2] = 'x';
    else if (seat == 'D' && board[12][3] == '*')
    board[12][3] = 'x';
    else if (seat == 'E' && board[12][4] == '*')
    board[12][4] = 'x';
    else if (seat == 'F' && board[12][5] == '*')
    board[12][5] = 'x';
  }
 if (row_no == 13)
  {
    if (seat == 'A' && board[13][0] == '*')
    board[13][0] = 'x';
    else if (seat == 'B' && board[13][1] == '*')
    board[13][1] = 'x';
    else if (seat == 'C' && board[13][2] == '*')
    board[13][2] = 'x';
    else if (seat == 'D' && board[13][3] == '*')
    board[13][3] = 'x';
    else if (seat == 'E' && board[13][4] == '*')
    board[13][4] = 'x';
    else if (seat == 'F' && board[13][5] == '*')
    board[13][5] = 'x';
   }
}

printf("       A  B  C  D  E  F\n");
for(int i=0; i<13; i++)
{
  printf("ROW %d: ",i+1);
  for(int j=0; j<6; j++)
  {
    printf("%c  ", board[i][j]);
  }
  printf("\n");
}

}

return 0;

}

