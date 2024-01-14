#include <stdio.h>

int main() {
    // Variable declaration
    int x;

    // User input for an integer
    printf("Enter an integer: \n");
    scanf("%d", &x);

    // Checking if the integer is even or odd
    if (x % 2 == 0) {
        printf("This is an even number\n");
    } else {
        printf("This is an odd number\n");
    }

    // Return statement indicating successful execution
    return 0;
}
