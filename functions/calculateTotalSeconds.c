#include <stdio.h>

// Function prototype declaration
int seconds(int days, int hours, int mins);

// Main function
int main()
{
    // Variable declarations
    int days, hours, mins, sec;

    // User input for the number of days
    printf("Enter days: \n");
    scanf("%d", &days);

    // User input for the number of hours
    printf("Enter hours: \n");
    scanf("%d", &hours);

    // User input for the number of minutes
    printf("Enter minutes: \n");
    scanf("%d", &mins);

    // Calling the function to calculate total seconds
    sec = seconds(days, hours, mins);

    // Displaying the result
    printf("Total seconds: %d", sec);

    // Return statement indicating successful execution
    return 0;
}

// Function definition to calculate total seconds
int seconds(int days, int hours, int mins)
{
    // Variable declaration for the result
    int result;

    // Calculating the total seconds
    result = (days * 86400) + (hours * 3600) + (mins * 60);

    // Returning the calculated total seconds
    return result;
}
