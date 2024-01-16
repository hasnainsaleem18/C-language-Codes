#include <stdio.h>

int main() {
    // Variable declaration
    int num;
    int mult;
    int process;

    // User input for the number to calculate the table
    printf("Enter a number to calculate its table: ");
    scanf("%d", &num);

    // Loop to calculate and print the multiplication table from 1 to 10
    for (mult = 1; mult < 11; ++mult) {
        // Calculate the product
        process = num * mult;

        // Print the multiplication table entry
        printf("%d * %d = %d\n", num, mult, process);
    }

    // Return statement indicating successful execution
    return 0;
}
