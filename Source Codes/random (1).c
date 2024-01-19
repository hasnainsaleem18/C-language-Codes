#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
 int rand1, rand2, rand3;

 int seed=9;
 printf("seconds passed are %ld\n", time(NULL));
 srand(time(NULL));

 //printf("Time is %ld\n",time(NULL));

 rand1=rand();
 rand2=rand();
 rand3=rand();

 printf("The three random values generated are %d, %d and %d\n",rand1, rand2, rand3);



 rand1=rand()%1001;
 rand2=rand()%51;
 rand3=rand()%11;

 printf("The three random values generated are %d, %d and %d\n",rand1, rand2, rand3);
 return 0;

 return 0;


 printf("The three random values generated are %d, %d and %d\n",rand1, rand2, rand3);

 //return 0;

 rand1=rand()%(1001-500)+500;
 rand2=rand()%(51-20)+20;
 rand3=rand()%(11-2)+2;

 printf("The three random values generated are %d, %d and %d\n",rand1, rand2, rand3);
 return 0;

}
