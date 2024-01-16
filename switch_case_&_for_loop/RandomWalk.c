#include <math.h>
#include <stdio.h>
int staright_line(int x, int y);
int steps(int x, int y);

int main()
{

int x;
int y;
//int x0;
//int y0;
int s;
int steps;

printf("Enter x coordinate for the position of object to that point: ");
scanf("%d", &x);
printf("Enter y coordinate for the position of object to that point: ");
scanf("%d", &y);

s = staright_line(x, y);
printf("distance is: %d", s);
steps(x, y);

return 0;
}
int staright_line(int x, int y)
{
int s;
s = sqrt((x-0)*(x-0)+(y-0)*(y-0));
return s;
}
int steps(int x, int y)
{
int xi;
int yi;
int i;
int j;
int count = 0;
for (i = 0; i > 0; ++i)
{
  printf("enter x move: ");
  scanf("%d", &xi);
  printf("enter y move: ");
  scanf("%d", &yi);
  
  j = sqrt((xi-x)*(xi-x)+(yi-y)*(yi-y));
  
  count++;
}

printf("s is %d", j);
printf("s is %d", count);

return 0;
}
  
  
  






























