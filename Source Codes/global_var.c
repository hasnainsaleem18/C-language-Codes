#include <stdio.h>

int a = 10;

int foo(void);
int main(void)
{

  printf("Value of a is %d\n",a);

  //return 0;
  int a = 20;
  printf("Value of a is %d\n",a);

  //return 0;
  //a = 30;

  //return 0;
  {
    int a = 30;
    int b = 40;
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);

  }

  //return 0;
  //printf("Value of b is %d\n",b);
  //return 0;
  printf("Value of a is %d\n",a);
  printf("Value returned is %d\n",foo());
  return 0;

}

int foo(void)
{
 //int a = 90;
  return a;
}
