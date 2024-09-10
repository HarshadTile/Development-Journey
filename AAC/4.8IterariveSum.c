#include <stdio.h>

// Function to compute the sum of the first n natural numbers
int iterativeSum(int n) {
    int sum = 0; // Initialize sum to 0
    int i;

    // Iterate from 1 to n
    for ( i = 1; i <= n; i++) {
        sum += i; // Add current number to sum
    }

    return sum; // Return the computed sum
}

int main() {
    int n;

    // Get the number of natural numbers to sum
    printf("Enter a number: ");
    scanf("%d", &n);

    // Validate input
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Compute and print the sum
    int result = iterativeSum(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}

