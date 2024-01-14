#include <stdio.h>                                         // code starts from here

#define service_charges 3.00                               // i define our fixed charges here as global variables
#define per_page .20                                       // so that i can use them all over the code.
#define additional_page 0.10

float fax(int pages);                                      // float type function is intialize here of fax.
int main()                                                 // man function starts here.
{
int pages;                                                 // intialise pages in int because it will always be whole no.
float answer;                                              // this is the variable in which function will be stored
                                                           // its type will be float.
printf("enter pages: ");                                   // line 14 will ask user for input of pages.
scanf("%d", &pages);                                       // line 15 will take imput from user.

answer = fax(pages);                                       // variable is storing function return value.also function is calling.
printf("the amount due is: $%.2f \n", answer);                 // the answer of the function is printing to screen in
return 0;                                                  // 2 decimal places by using %.2f 

}
float fax(int pages)                                       // function is taking parameter of pages as int.  
{

int ad_page;                                               // variable initialise of int type full name (additional page).
float total;                                                 // variable initialise to store the total calculate value.
float total_ap;                                            // variable initialise to store the total additional page value.
float total_pp;                                            // variable initialise to store the total per page value.
ad_page = pages - 10;                                      //  takes value of pages and then subtract it by 10 and stores the value.
if (pages > 10)                                            // loop of if statement start...it will start if pages exceed 10 
  {
  float total_ap = additional_page*(ad_page);               // in this it will use global var and multiply it by the (pages-10)
  float total_pp = per_page * 10;                           // this will just multiply first 10 pages to defined per page value.
  float total = service_charges + total_pp + total_ap;      // this will add above two calculated value and then add the service charge to calculate final price.
  return total;                                            // this will return stored total value in line line 34 to function. 
  }                                                        // above all stored value and calculations are in float type.
else                                                      // this will run if pages are less then 10 
  {
  float total_pp = (per_page * pages);                    // this will just multiply first 10 pages to defined per page value.
  float total = (service_charges + total_pp);             // it will add service charges to total pp value and will store result.
  return total;                                          // this will return stored total value in line line 40 to function. 
  }
}
