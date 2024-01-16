#include <stdio.h>

int main() {
    // Variable declarations
    int a, b, count;

    // User input for the 1st interval
    printf("Enter the 1st interval: ");
    scanf("%d", &a);

    // User input for the 2nd interval
    printf("\nEnter the 2nd interval: ");
    scanf("%d", &b);

    // Loop to find and print prime numbers in the given range
    printf("Prime numbers between %d and %d are: ", a, b);
    for (int j = a; j <= b; j++) {
        count = 0;

        // Loop to check if 'j' is a prime number
        for (int i = 2; i <= j; i++) {
            if (j % i == 0) {
                count++;
                break;
            }
        }

        // If 'count' is 0, 'j' is a prime number
        if (count == 0) {
            printf("%d, ", j);
        }
    }

    // Return statement indicating successful execution
    return 0;
}
