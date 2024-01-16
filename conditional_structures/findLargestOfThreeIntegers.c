#include <stdio.h>

// Function prototype declaration
int largestValue(int x, int y, int z);

int main() {
    // Variable declarations
    int x, y, z, max;

    // User input for the 1st value
    printf("Enter 1st value: \n");
    scanf("%d", &x);

    // User input for the 2nd value
    printf("Enter 2nd value: \n");
    scanf("%d", &y);

    // User input for the 3rd value
    printf("Enter 3rd value: \n");
    scanf("%d", &z);

    // Calling the function to find the largest value
    max = largestValue(x, y, z);

    // Note: 'max' is not used in the main function, consider using it appropriately

    return 0;
}

// Function definition to find the largest value among three
int largestValue(int x, int y, int z) {
    int max;

    if (x > y && x > z) {
        printf("x is the largest: %d \n", x);
        max = x;
    } else if (y > x && y > z) {
        printf("y is the largest: %d \n", y);
        max = y;
    } else {
        printf("z is the largest: %d \n", z);
        max = z;
    }

    // Returning the largest value
    return max;
}
