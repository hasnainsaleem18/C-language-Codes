#include <stdio.h>
int palindrome(int n);
int main(void)
{
int i;
int j;
int x;
int y;
int max = 0;
int pal;

for (i = 999; i >= 100; i--) 
{
  for (j = 999; j >= 100; j--) 
   {
     pal = i * j;
     if (palindrome(pal) && pal > max) 
     x = i;
     y = j;
     max = pal;
   }
}
printf("%d\n", max);
  

}
int palindrome(int n)
{
  int num = 0;
  int p = n;
  int num1;
  int add;
  while (p > 0) 
  {
    num = 10 * num;
    num1 = p % 10;
    add = num + num1;
    p /= 10;
  }
  
return num == n;

}

