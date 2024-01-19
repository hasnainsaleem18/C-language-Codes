#include <stdio.h>
int count_times();

int main()
{

int count = 0;
for(int i=0;i<1000; i++)
{
 count = count_times();
}

printf("The function is called %d times\n",count);
return 0;
}

int count_times()
{
 static int count=1;
 return count++;




}
