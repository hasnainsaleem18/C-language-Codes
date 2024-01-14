#include <stdio.h>

int main() {
    // Variable declarations
    int factorial, count, result = 1;

    // User input for the number to calculate factorial
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &factorial);

    // Loop to calculate factorial
    for (count = 1; count <= factorial; count++) {
        result = result * count;
    }

    // Display the calculated factorial
    printf("Factorial of %d is: %d\n", factorial, result);

    // Return statement indicating successful execution
    return 0;
}
