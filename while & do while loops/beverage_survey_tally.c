#include<stdio.h>
int main()
{
  int order;
  int count;
  int coffee = 0;
  int tea = 0;
  int coke = 0;
  int orange_juice = 0;
  
  printf("enter the order:");
  scanf("%d", &order);

  while (order != -1 && order < 5)
  {
    //printf("choose something in menu : %d \n",order);
  
    switch (order) 
    {
    case 1:
    coffee++;
   printf("please input the favourite beverage of person #1 Choose 1,2,3 or 4 from the above menu or -1 to exit the program");
    break;

    case 2:
    tea++;
    printf("please input the favourite beverage of person #2 Choose 1,2,3 or 4 from the above menu or -1 to exit the program");
    break;

    case 3:
    coke++;
    printf("please input the favourite beverage of person #3 Choose 1,2,3 or 4 from the above menu or -1 to exit the program");
    break;

    case 4:
    orange_juice++;
    printf("please input the favourite beverage of person #4 Choose 1,2,3 or 4 from the above menu or -1 to exit the program");
    break;
    default:
    break;
    }
    
  count;
  printf("choose from menu : ");
  scanf("%d",&order);
}

printf("Bevarge 		number of votes \n");
printf("*********************************************\n");
printf("coffee			%d\ntea 			%d\ncoke			%d\norangejuice 			%d\n ",coffee,tea,coke,orange_juice);
  return 0;
}
