#include <stdio.h>

// Function prototype declaration
int combination(int n, int r);

int main() {
    // Variable declarations
    int n, r, comb;

    // User input for the values of n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Calling the function to calculate combination
    comb = combination(n, r);

    // Display the calculated combination
    printf("Combination C(%d, %d) is: %d\n", n, r, comb);

    // Return statement indicating successful execution
    return 0;
}

// Function definition to calculate combination (nCr)
int combination(int n, int r) {
    // Variable declarations
    int count, resulta = 1, resultb = 1, resultc = 1, tot;
    int n_r = n - r;

    // Calculating n!
    for (count = 1; count <= n; count++) {
        resulta = resulta * count;
    }

    // Calculating r!
    for (count = 1; count <= r; count++) {
        resultb = resultb * count;
    }

    // Calculating (n-r)!
    for (count = 1; count <= n_r; count++) {
        resultc = resultc * count;
    }

    // Calculating nCr
    tot = resulta / (resultb * resultc);

    // Returning the calculated combination
    return tot;
}
