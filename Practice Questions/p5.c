#include <stdio.h>
int main()
{

int distance;
int speed;
int time;

printf("enter speed: ");
scanf("%d", &speed);
printf("enter time: ");
scanf("%d", &time);

distance = speed*time;
int divide = distance/time;
int a = 0;

for(int i=1; i<=time; i++)
{
  a = a + divide;
  printf("\nhour is : %d", i);
  printf("\ndistance is : %d", a);
}

return 0;
} 

