#include <stdio.h>

int ice_cream_types(int budget, int choice);
int cone(int budget, int choice, int price, int flavour);    // declareing functions that will be used inside with parameters of int to all
int cups(int budget, int choice, int price, int flavour, int size);

int main()
{

int budget;  // initialising all variables used in code   this will use to stored budget enter by user
int types;  // this will store ice_cream_types(budget, choice) function return value
int choice;  // use to enter the choice of types
int count;   // will tell the items purchased
int flavour;  // this will store flavour no
int size;  // this will store the size no of flavours enter by user
int price;  // the price of flavours is store
int amount;   // cone and cups func returns value will be stored
int total;   // the total amount will be stored


printf("Enter budget PKR: ");   // show to screen to enter budget
scanf("%d", &budget);   // will take input and stored in budget

if (budget < 200)   // if statement for budget increase 200 cuz min price is 200
  printf("your budget is low for our service");   // will print if budget is low than 200

for (total, count; total <= budget; count++)   // will use for loop for items and adding prices and calling
 {
  
  types = ice_cream_types(budget, choice);  // calling func with budget and choice parametrs and storing it values to types
  
  if (types == 1)  // if type is 1 then iff will be true
    {
         amount = cone(budget, choice, price, flavour);   // cone func is called and the return value is stored in amount
         total = total + amount;  // price are adding to total so total can be made
    }
  else if (types == 2)  // if type is not 1 and is 2 then this will be executed
    {
         amount = cups(budget, choice, price, flavour, size);    // cup func is called and the return value is stored in amount
         total = total + amount;  // price are adding to total so total can be made
    }
  else if (types == -1) // if type is not 1 and not 2 and user press -1 to end or tell the amounts and items then this will be executed
     {
        printf("\nTotal amount to be PAID is: PKR%d\n", total);   // total amount will be displayed
        printf("You have ordered %d items.\n", count);  // items total ordered will be print
        printf("\nYour Budget was: PKR%d\n", budget);   // the budget that you given will be print
        printf("Left Amount from Budget is: PKR%d\n", budget-total);  // left amount in budget will be print
        break;  // it will break loop and exit the loop
     }
  if (total > budget)  // if total anmount is exceed from budget then this will run
     {
        printf("You have crossed your Budget\n");  // this statement will be printed
        break;   // statement will be break exit from loop
     }
  
  }
 if (total > budget)   // if total anmount is exceed from budget then this will run
 {
 printf("Your Budget was: PKR%d\n", budget);   // the budget that you given will be print
 printf("Your Total Amount is: PKR%d\n", total); // total amount will be displayed
 printf("Amount you exceed is: PKR%d", total-budget);  // amount exceed in budget will be print
 printf("\nYou are out of balance.\n"); 
 }
 return 0;

}
int ice_cream_types(int budget, int choice)   // func will be defined here
{
   
    printf("\nThese are the types:\n1.Cone \n2.Cups\nEnter -1 to EXIT or CONFIRM the Order/Menu\n");  // showing on user to enter types
    scanf("%d", &choice); // input choice
        
return choice;   // returning choice to func and storing it

}
int cone(int budget, int choice, int price, int flavour)    // func  will be defined here
{

printf("Flavour_1----------CHOCOLATE----------200PKR\nFlavour_2----------VANILLA------------250PKR\nFlavour_3----------STRAWBERRY---------200PKR\nFlavour_4----------OREO---------------250PKR\n");   // menu is printing of cone

printf("Enter Flavour Number: ");  // showing user to enter flavour no
scanf("%d", &flavour);  // input flavour no from choice

if (flavour == 1)           // if statement started that if flavour no is 1 chocolate
      price = 200;      // price will be returned
else if (flavour == 2)     // if statement started that if flavour no is 2 vanilla
      price = 250;      // price will be returned
else if (flavour == 3)     // if statement started that if flavour no is 3 strawberry
      price = 200;   // price will be returned
else               // if none flavour and user enter 4 then this will atumatically takes oreo as flavour no
      price = 250;   // price will be returned
    
return price;    // price will be returned 

}
int cups(int budget, int choice, int price, int flavour, int size)   // func is defining
{

printf("flavour1----------CHOCOLATE\nflavour2----------VANILLA\nflavour3----------STRAWBERRY\nflavour4----------OREO\n");  // menu is printing for cups

printf("\nCHOCOLATE	Small......200PKR\n		Medium......250PKR\n		Large......300PKR\n");         // sizes of flavours are printing
printf("\nVANILLA		Small......250PKR\n		Medium......300PKR\n		Large......350PKR\n");
printf("\nSTRAWBERRY	Small......200PKR\n		Medium......250PKR\n		Large......300PKR\n");
printf("\nOREO 		Small......250PKR\n		Medium......300PKR\n		Large......400PKR\n");
printf("\nSize Number\n1---Small\n2---Medium\n3---Large\n");  // size number so user can enter according to it

printf("\nenter flavour number: ");  // will show to screen the enter flavour no
scanf("%d", &flavour);  // anter flavour no

if (flavour == 1) // if flavour is 1 means chocolate
  {
     printf("enter flavour size number: ");  // tells user to tell size of chocolate
     scanf("%d", &size);    // will take size of choclate
     
     switch (size)     // it will take size as switch
     {
       case 1:              // if siz is 1 then its price will be added and break will break the loop this wil go same for every case statement below
         price = 200;
           break;
   
       case 2:
         price = 250;
           break;

       case 3:
         price = 300;
           break;
   }
   
  return price;

 }

else if (flavour == 2)    // if flavour is 2 means vanilla
   {
      printf("enter flavour size number: ");    // tells user to tell size of vanilla
      scanf("%d", &size);      // will take size of vanilla

      switch (size)
      {
        case 1:
         price = 250;                    // if siz is 1 then its price will be added and break will break the loop this wil go same for every case statement below
           break;
   
        case 2:
          price = 300;
            break;

        case 3:
          price = 350;
            break;
      }

   return price;
  
   }

else if (flavour == 3)      // if flavour is 1 means cstrawberry
   {
      printf("enter flavour size number: ");
      scanf("%d", &size);      // will take size of strawberry

      switch (size)
      {
        case 1:
         price = 200;
           break;
   
        case 2:
          price = 250;
            break;

        case 3:
          price = 300;
            break;
      }

   return price;
   
   }

else if (flavour == 4)     // if flavour is 1 means oreo
   {
      printf("enter flavour size number: ");
      scanf("%d", &size);       // will take size of oreo

      switch (size)
      {
        case 1:
         price = 250;
           break;
   
        case 2:
          price = 300;
            break;

        case 3:
          price = 400;
            break;
      }

   return price; 
    
   }
   
}  



























