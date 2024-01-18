#include <stdio.h>

int main()
{
float interest;
float borrow;
float monthly_payment;
float loan_amount;

printf("Enter the loan amount: ");
scanf("%f", &borrow);
printf("Enter the interest rate: ");
scanf("%f", &interest);
printf("enter the monthly payment: ");
scanf("%f", &monthly_payment);

float per_month_interest = interest/12;
float final_interest = per_month_interest/100;

float principal_amount = 0;
float amount;
int year = 0;

for (int i=0;1;)
{

amount = borrow - principal_amount;
float first_month = (float)amount * final_interest;

if (monthly_payment<first_month)
{

printf("MONTHLY PAYMENT IS TOO LOW, LOAN AMOUNT WILL NOW INCREASE!!!\n")
amount = amount++
float principal_amount = monthly_payment - first_month;
float loan_amount = amount - principal_amount;
printf("\n%.2f\n", loan_amount);
borrow = loan_amount;
year++;

}
else 
{ 

float principal_amount = monthly_payment - first_month;
float loan_amount = amount - principal_amount;
printf("\n%.2f\n", loan_amount);
borrow = loan_amount;
year++;

if (borrow == 0)
{

printf("%d", year);
break;

}
else
continue; 

}

return 0;

}
