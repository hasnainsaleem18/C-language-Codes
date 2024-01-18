#include <stdio.h>
int func1(int option, int sum, int price, char size, int quantity, int flavour);  // function for EXPRESSO & MOCHA CHILLERS
int func2(int option, int sum, int price, char size, int quantity, int flavour);  // function for CHOCOLATE CHILLERS
int func3(int option, int sum, int price, char size, int quantity, int flavour);  // function for OVER ICE
int func4(int option, int sum, int price, char size, int quantity, int flavour);  // function for fusion
int main()
{

int option;
char size;
int quantity;
int flavour;
int price = 0;
int sum = 0;
int a,b,c,d,T;
const int tax = 200;
const int service_charges = 100;
for (option = 0; option != -1;)

{
printf("THE MENU: \n");
printf("option 01******EXPRESSO & MOCHA CHILLERS******\n");
printf("option 02******CHOCOLATE CHILLERS******\n");
printf("option 03******OVER ICE******\n");
printf("option 04******FUSION******\n");
printf("\nenter your option: ");
scanf("\n%d", &option);
  if (option == 1)
  {
   a = func1(option, sum, price, size, quantity, flavour);
  }
  else if (option == 2)
  {
   b = func2(option, sum, price, size, quantity, flavour);
  }
  else if (option == 3)
  {
   c = func3(option, sum, price, size, quantity, flavour);
  }
  else if (option == 4) 
  {
   d = func4(option, sum, price, size, quantity, flavour);
  }
  T = a+b+c+d;
}
int total = T + tax + service_charges;
printf("\nTotal Bill is: %d\n", total);
return 0;
}
int func1(int option, int sum, int price, char size, int quantity, int flavour)
{
printf("FLAVOUR 01: VERY VANILLA CHILLER	SMALL(RS361)	REGULAR(RS409)\nFLAVOUR 02: COCOA LOCO COOKIES N CREAM	SMALL(RS361)	REGULAR(RS409)\nFLAVOUR 03: HAZELNUT MOCHA CHILLER	SMALL(RS396)	REGULAR(RS461)\nFLAVOUR 04: CHOC0LATe MACADAMIA CHILLER	SMALL(RS396)	REGULAR(RS461)\nFLAVOUR 05: ITALIAN DOLDE CHILLER	SMALL(RS396)	REGULAR(RS461)\nFLAVOUR 06: CARAMEL NUT CHILLER		SMALL(RS396)	REGULAR(RS461)\nFLAVOUR 07: TIRAMISU CHILLER		SMALL(RS399)	REGULAR(RS509)\nFLAVOUR 08: TOFFEE NUT CHILLER		SMALL(RS399)	REGULAR(RS509)\n\n");
printf("use 's' for small and 'r' for regular\n");
printf("\nplease enter flavour: ");
scanf("\n%d", &flavour);
  if( flavour == 1)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 361*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 409*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
     }
  if( flavour == 2)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 361*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 409*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
     }
  if( flavour == 3)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 396*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 461*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
  if( flavour == 4)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 396*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 461*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
     }
  if( flavour == 5)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 396*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 461*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
  if( flavour == 6)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 396*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 461*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    } 
 if( flavour == 7)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 399*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 509*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }    
  if( flavour == 8)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 399*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 509*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
     } 
     return sum;   
} 
int func2(int option, int sum, int price, char size, int quantity, int flavour)    
{
printf("FLAVOUR 01: ORANGE ICED CHOCOLATE		SMALL(RS348)	REGULAR(RS365)\nFLAVOUR 02: WHITE ICED CHOCOLATE		SMALL(RS348)	REGULAR(RS365)\nFLAVOUR 03: CHOCOLATE DELIGHT			SMALL(RS348)	REGULAR(RS400)\n\n");
printf("use 's' for small and 'r' for regular\n");
printf("\nplease enter flavour: ");
scanf("\n%d", &flavour);
  if( flavour == 1)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 348*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 365*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 2)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 348*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 365*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
     }
 if( flavour == 3)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 348*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 400*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
     }
     return sum;
}
int func3(int option, int sum, int price, char size, int quantity, int flavour)
{
printf("FLAVOUR 01: SIGNATURE ICED COFFEE		SMALL(RS300)	REGULAR(RS374)\nFLAVOUR 02: ICED MOCHA				SMALL(RS300)	REGULAR(RS361)\nFLAVOUR 03: ICED CARAMEL LATTE			SMALL(RS378)	REGULAR(RS430)\nFLAVOUR 04: ICECD AMERICANO			SMALL(RS252)	REGULAR(RS274)\nFLAVOUR 05: BLUEBERRY LEMONADE*			SMALL(RS250)	REGULAR(RS291)\nFLAVOUR 06: LYCHEE LEMONADE*			SMALL(RS250)	REGULAR(RS291)\nFLAVOUR 07: GREEN APPLE LEMONADE*		SMALL(RS250)	REGULAR(RS291)\nFLAVOUR 08: PEACH LEMONADE*			SMALL(RS250)	REGULAR(RS291)\nFLAVOUR 09: APPLE SODA*				SMALL(RS335)	REGULAR(RS348)\nFLAVOUR 10: LIME SODA*				SMALL(RS335)	REGULAR(RS361)\nFLAVOUR 11: ICED TEAS(peach/lemon lychee)*	SMALL(RS239)	REGULAR(RS291)\n");
printf("use 's' for small and 'r' for regular\n");
printf("\nplease enter flavour: ");
scanf("\n%d", &flavour);
  if( flavour == 1)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 300*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 374*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 2)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 300*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 361*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 3)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 378*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 430*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 4)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 252*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 274*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 5)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 250*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 291*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 6)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 250*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 291*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 7)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 250*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 291*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 8)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 250*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 291*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 9)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 335*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 348*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 10)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 335*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 361*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 11)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 239*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 291*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
    return sum;
}
int func4(int option, int sum, int price, char size, int quantity, int flavour)
{
printf("FLAVOUR 01: ICED LIME*			SMALL(RS335)	REGULAR(RS365)\nFLAVOUR 02: APPLE CHILLER*		SMALL(RS335)	REGULAR(RS365)\nFLAVOUR 03: CHAI CHILLER		SMALL(RS348)	REGULAR(RS400)\nFLAVOUR 04: GREEN TEA CHILLER		SMALL(RS348)	REGULAR(RS400)\n\n");
printf("use 's' for small and 'r' for regular\n");
printf("\nplease enter flavour: ");
scanf("\n%d", &flavour);
  if( flavour == 1)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 335*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 365*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
  if( flavour == 2)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 335*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 365*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 3)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 348*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 400*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
 if( flavour == 4)
    {
      printf("\nselect size: ");
      scanf("\n%c", &size);
      if(size == 's')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 348*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
      else if (size == 'r')
        {
          printf("\nenter quantity: ");
          scanf("\n%d", &quantity);
          price = 400*quantity;
          sum = sum + price;
          printf("\nCurrent Bill is: %d\n\n", sum);
        }
    }
    return sum;
}
   
