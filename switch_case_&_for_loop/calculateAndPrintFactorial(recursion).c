#include <stdio.h>

// Function prototype declaration
int factorial(int result);

int main() {
    // Variable declarations
    int result, fact = 0;

    // User input for the number
    printf("Enter a number: ");
    scanf("%d", &result);

    // Calling the function to calculate factorial
    fact = factorial(result);

    // Display the calculated factorial
    printf("Factorial of %d is: %d\n", result, fact);

    // Return statement indicating successful execution
    return 0;
}

// Function definition to calculate factorial using recursion
int factorial(int result) {
    // Base case: factorial of 0 and 1 is 1
    if (result <= 1) {
        return 1;
    } else {
        // Recursive case: result * factorial of (result-1)
        return result * factorial(result - 1);
    }
}
