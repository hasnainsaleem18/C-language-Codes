#include <stdio.h>

// Function prototype declaration
int thirdValue(int num1, int num2);

// Main function
int main()
{
    // Variable declarations
    int num1;
    int num2;
    int third;

    // User input for the first angle
    printf("Enter 1st angle: \n");
    scanf("%d", &num1);

    // User input for the second angle
    printf("Enter 2nd angle: \n");
    scanf("%d", &num2);

    // Calling the thirdValue function and storing the result in 'third'
    third = thirdValue(num1, num2);

    // Displaying the result
    printf("Third value is = %d", third);

    // Return statement indicating successful execution
    return 0;
}

// Function definition for calculating the third angle in a triangle
int thirdValue(int num1, int num2)
{
    // Variable declarations
    int third;
    int sum = num1 + num2;

    // Calculating the third angle
    third = 180 - sum;

    // Returning the calculated third angle
    return third;
}
