#include <stdio.h>

// Function prototype declaration
int reverse(int num);

// Main function
int main() {
    // Variable declarations
    int num, rev;

    // User input for a 3-digit number
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Calling the function to reverse the digits
    rev = reverse(num);

    // Displaying the reversed digits
    printf("Reversed digits: %d", rev);

    // Return statement indicating successful execution
    return 0;
}

// Function definition to reverse the digits of a 3-digit number
int reverse(int num) {
    // Variable declarations for individual digits and result
    int a, b, c, d, result;

    // Extracting the units digit
    a = num % 10;

    // Extracting the tens digit
    b = num / 10;

    // Extracting the units digit from the remaining two digits
    c = b % 10;

    // Extracting the hundreds digit
    d = b / 10;

    // Calculating the reversed number
    result = (a * 100) + (c * 10) + (d);

    // Returning the reversed number
    return result;
}
