#include <stdio.h>

// Function prototype
double power(double x, int n);

int main() {
    double base;
    int exponent;
    
    // Get user input
    printf("Enter the base (x): ");
    scanf("%lf", &base);
    printf("Enter the exponent (n): ");
    scanf("%d", &exponent);
    
    // Compute and display the result
    printf("%.2lf^%d = %.2lf\n", base, exponent, power(base, exponent));
    
    return 0;
}

// Recursive power function
double power(double x, int n) {
    // Base case
    if (n == 0) {
        return 1;  // x^0 = 1
    }
    
    // Recursive case
    if (n > 0) {
        return x * power(x, n - 1);
    } else {
        return 1 / power(x, -n);  // Handle negative exponents
    }
}

