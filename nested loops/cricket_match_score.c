#include <stdio.h>

int main()    
{

int score;                      
int wickets;
int calculation_1;
int calculation_2;

printf("Enter the score by Pakistan: ");
scanf("%d", &score);                         // taking pakistan score  from user 
printf("Enter the remaining wickets: ");
scanf("%d", &wickets);   // taking pakistan wickets from user

if (score > 300)   // condition according to question
  {
    printf("Pakistan win the match by %d wickets\n", wickets);
  }
else if (score < 300)
  {
    calculation_1 = 300 - score;
    calculation_2 = 11 - wickets;    
    printf("%d Remaining runs required to win with %d wickets in hand\n", calculation_1, calculation_2);
  }
else 
  {
    printf("Match is DRAW\n");
  }
  
return 0;

}
