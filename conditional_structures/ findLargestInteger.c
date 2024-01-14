#include <stdio.h>

int main() {
    // Variable declarations
    int x, y;

    // User input for the first digit
    printf("Enter the first digit: \n");
    scanf("%d", &x);

    // User input for the second digit
    printf("Enter the second digit: \n");
    scanf("%d", &y);

    // Comparing the two digits and printing the result
    if (x > y) {
        printf("x is greater than y\n");
    } else {
        printf("y is greater than x\n");
    }

    // Return statement indicating successful execution
    return 0;
}
