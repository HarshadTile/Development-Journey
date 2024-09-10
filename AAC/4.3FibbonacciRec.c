#include <stdio.h>

// Function prototype
int fibonacci(int n);

int main() {
    int n;
    
    // Get user input
    printf("Enter the position (n) for Fibonacci sequence: ");
    scanf("%d", &n);
    
    // Compute and display the Fibonacci number
    if (n < 0) {
        printf("Fibonacci number is not defined for negative indices.\n");
    } else {
        printf("Fibonacci number at position %d is %d\n", n, fibonacci(n));
    }
    
    return 0;
}

// Recursive Fibonacci function
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

