#include <stdio.h>

int main() {
    // Variable declarations
    int num, count;

    // User input for the number to calculate factors
    printf("Enter a number to calculate its factors: ");
    scanf("%d", &num);

    // Loop to find and print the factors
    for (count = 2; count < num; ++count) {
        // Check if 'count' is a factor of 'num'
        if (num % count == 0) {
            printf("%d, ", count);
        }
    }

    // Return statement indicating successful execution
    return 0;
}
