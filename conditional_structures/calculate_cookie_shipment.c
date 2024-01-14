#include <stdio.h>
int result();                               // function in integer declare
int main()    
{
int x,y,z,a;            // all variables are initialising

printf("Enter the total number of cookies:");                       // taking total no cookies from user
scanf("%d",&x);
printf("\nEnter the number of cookies in a single box:");           // taking cokkies in single box
scanf("%d",&y);
printf("\nEnter the number of boxes in a single container:");    // taking boxes in container
scanf("%d", &z);
a = result(x,y,z);      // calling function and storing its answer.
printf("%d",a);   // printing the result

    return(0);
}
int result(int x,int y,int z)       //function is being called 
{
int req_boxes;              // all terms are // initalised
int remaining_cookies;
int req_containers;
int remaining_boxes;
req_boxes = x/y;             // dividing cookies over box
remaining_cookies = x%y;   // taking mod of cookies and box
printf("\nThe number of boxes required for cookies are: %d",req_boxes);        // required boxes is being calculated on line 24 and now displaying it on screen.
if (remaining_cookies<y)          // loop is started and if rem cookies is lesser than box 
{
    printf("\nThe left over cookies are: %d",remaining_cookies);    //then it will print the calculated remaining cookes that are calculate in line 25
}
req_containers = req_boxes / z;      // here req containers are calculating
remaining_boxes = req_boxes % z;     // here rem boxes are calculating 
printf("\nThe number of containers required for boxes are: %d",req_containers);        // will print line 31 result
printf("\nThe number of containers required for boxes are: %d",remaining_boxes);       // will print line 32 result


return 0;
}
