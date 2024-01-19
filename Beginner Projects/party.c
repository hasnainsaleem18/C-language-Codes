#include <stdio.h>

#define LARGE_PIZZAS 3                               // define all fixed numbers as global so that they can be access easily
#define PIECES_PER_PIZZA 8
#define DRINKS 3
#define GLASSES_PER_DRINK 5
#define TOTAL_AMOUNT 5000

int div_pizza(int n, int me);
int div_drink_glasses(int n, int me);         // declareing functions that will be used inside
float div_amount(int n);

int main()
{

 int me = 1;         //  this is the one who is inviting every one....i am initialising it here
 int n;              // this is the number of guests 
 int pizza;         // return of div_pizza function is getting stored in it
 int drink;            //  return of div_drink_glasses function is getting stored in it
 float pay;         // total amount to be paid will be stored in it
 
 printf("Enter number of guests please: ");         // printing on screen the no of guests
 scanf("%d", &n);   // taking input as integer
 
 if (n == -1)       // this will check that if -1 is entered the program will not be executed.
    {
     
      printf("-1\n");  // this will print it.
      
    }
 else if (n <= 15)   // this will check that if guests are below or equal to 15 then enter the program or statement
    {
      
      pizza = div_pizza(n, me);     // calling function of div_pizza which will calculate the slices to guests and stored in pizza. it is taking guest, me
      drink = div_drink_glasses(n, me); // calling function of div_drink_glasses which will calculate the drinks to guests and stored in drink. it is taking guest, me
      pay = div_amount(n);    // this is storing total amount returning from function
      printf("per person for pizza is: %d \n", pizza); // this will print  per person pizza slice 
      printf("per person for drink is: %d \n", drink);  // this will print  per person glass
      printf("per person for amount is: %.1f \n", pay);  // this will print  per person amount for pay
    
    }
 else           // if guest will exceed 15 loop will be execute
    printf("enter number in range o to 15");
    
return 0;        //main end

}
int div_pizza(int n, int me)     //  func will be define here
{

 int persons = n + me;   // it is adding me and guests and stored in persons
 int pizzas = LARGE_PIZZAS * PIECES_PER_PIZZA;   // pizzas is storing the multiplication of define value and slices and total slices
 int divide = pizzas / persons;   // this will divide pizzas to persons like slices

 return divide;   // this is returning the slices of divide

}
int div_drink_glasses(int n, int me)     // func is defining
{
 
 int persons = n + me;                             // it is adding me and guests and stored in persons
 int drink = DRINKS * GLASSES_PER_DRINK;     // drinks is storing the multiplication of define value and drinks and total drinks
 int divide = drink / persons;      // this will divide drinks to persons like drinks
 
 return divide;    // this is returning the drinks of divide
 
} float div_amount(int n)     // amount func is defining
{
 
 float percent;    // float variable is declaring
 float divide;     
 
 if (n == 0)     // if guests are zero then this loop will be executed
    {
    
      divide = TOTAL_AMOUNT;   // the total amount will be given to divide
    
    }
 else  // if guests are above zero
   {
   
     percent = TOTAL_AMOUNT / 2;  // this will split total amount 50% 50% between guest and inviter
     divide = percent / n;   //this will divide 50% bill to each person and will stored in divide
   
   }
 
 return divide;  // this will return value to main the amount that is divided per person

}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
