#include <stdio.h>
int main()
{

int first;                      // initialise the 1,2,3 values in int type
int second;
int third;
int value;

printf("Enter 1st value: \n");    // user give value to program
scanf("%d", &first);
printf("Enter 2nd value: \n");
scanf("%d", &second);
printf("Enter 3rd value: \n");
scanf("%d", &third);
if ((first % 2 == 0) && (second % 2 == 0) && (third % 2 == 0))    //loop will be start to calculate odd value  by if loop
    printf("none of them is odd \n");
if ((first % 2 != 0) && (first >= second || second % 2 == 0) && (first >= third || third % 2 == 0)) // this all loop is telling odd number or not
    printf("%d is greatest odd value \n", first);
if ((second % 2 != 0) && (second > first || first % 2 == 0) && (second > third || third % 2 == 0))
    printf("%d is greatest odd value \n", second);
if ((third % 2 != 0) && (third > second || second % 2 == 0) && (third > first || first % 2 == 0))
    printf("%d is greatest odd value \n", third);

return 0; 

}
