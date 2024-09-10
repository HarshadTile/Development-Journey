#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int number;
    
    // Get user input
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);
    
    // Validate input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Compute factorial and print result
        printf("Factorial of %d is %d\n", number, factorial(number));
    }
    
    return 0;
}

// Recursive factorial function
int factorial(int n) {
    // Base case
    if (n == 0) {
        return 1;
    }
    // Recursive case
    else {
        return n * factorial(n - 1);
    }
}























