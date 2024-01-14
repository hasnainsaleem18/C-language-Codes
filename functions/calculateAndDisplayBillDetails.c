#include <stdio.h>

// Function prototype declaration
int totalprice(int meal);

// Main function
int main() {
    // Variable declarations
    int meal, total;

    // User input for the meal price
    printf("Enter meal price: ");
    scanf("%d", &meal);

    // Calling the function to calculate total price
    total = totalprice(meal);

    // Return statement indicating successful execution
    return 0;
}

// Function definition to calculate total price including tax and tip
int totalprice(int meal) {
    // Variable declarations for tax, tip, and total price
    int tax, tip, total;

    // Calculating the tax (4.75% of the meal price)
    tax = meal * 0.0475;
    printf("Tax is: %d\n", tax);

    // Calculating the tip (10% of the sum of meal price and tax)
    tip = (meal + tax) * 0.10;
    printf("Tip is: %d\n", tip);

    // Calculating the total price (meal price + tax + tip)
    total = meal + tax + tip;
    printf("Total price is: %d\n", total);

    // Return statement (not used in this example)
    return total;
}
