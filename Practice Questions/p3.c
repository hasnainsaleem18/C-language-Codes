#include <stdio.h>
int main()
{

int population_a;
float growth_a;
int population_b;
float growth_b;

printf("enter town a population: ");
scanf("\n%d", &population_a);
printf("enter town a growth rate: ");
scanf("\n%f", &growth_a);
printf("enter town b population: ");
scanf("\n%d", &population_b);
printf("enter town b growth rate: ");
scanf("%f\n", &growth_b);
growth_a=growth_a/100;
growth_b=growth_b/100;

int ta ;
int tb ;

//int years;
int count = 0;

for(int i=0;1;i++)
{
  ta = population_a + (population_a*growth_a);
  tb = population_b + (population_b*growth_b);
  count++;
  if (ta>=tb)
  {
    printf("\nyears are: %d", count);
    printf("\npopulation of A: %d", ta);
    printf("\npopulation of B: %d", tb);
    break;
  }
}

return 0;
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
