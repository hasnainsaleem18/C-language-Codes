#include <stdio.h>
int main()
{
int t;
int l;
int *table;
int *limit;
table = &t;
limit = &l;
printf("enter the table: ");
scanf("%d", table);
printf("enter the limit: ");
scanf("%d", limit);

for (int i = 1; i<=*limit; i++)
{
int multiply = *table * i;
printf("%d * %d = %d\n", *table,i,multiply);
}
return 0;
}
