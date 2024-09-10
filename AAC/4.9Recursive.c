#include <stdio.h>

// Recursive function to compute the sum of the first n natural numbers
int recursiveSum(int n) {
    if (n <= 1) { // Base case: sum of first 1 natural number is 1
        return n;
    } else { // Recursive case: sum of first n natural numbers
        return n + recursiveSum(n - 1);
    }
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
    int result = recursiveSum(n);
    printf("The sum of the first %d natural numbers is: %d\n", n, result);

    return 0;
}

