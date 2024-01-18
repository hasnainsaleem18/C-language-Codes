#include <stdio.h>
float total_overs();
int main()
{

int balls;
float result;

printf("Please enter the number of BALLS bowled by a bowler: ");
scanf("%d", &balls);

result = total_overs(balls);

printf("overs are: %.1f", result);

return 0;
}
float total_overs(int balls)
{
float overs;

overs = (float)balls/6;

return overs;
}
