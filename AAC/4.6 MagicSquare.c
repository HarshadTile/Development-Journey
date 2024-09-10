#include <stdio.h>

// Function prototype
void generateMagicSquare(int n);

int main() {
    int n;
    
    // Get the size of the magic square (must be odd)
    printf("Enter the size of the magic square (odd number): ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("The size must be an odd number.\n");
        return 1;
    }
    
    // Generate and print the magic square
    generateMagicSquare(n);
    
    return 0;
}

// Function to generate and print the magic square
void generateMagicSquare(int n) {
    int magicSquare[n][n]; // Declare a 2D array for the magic square
    int i,j;

    // Initialize all cells to 0
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            magicSquare[i][j] = 0;
        }
    }
    
    int num = 1;
     i = 0, j = n / 2; // Start position (top-middle)

    while (num <= n * n) {
        magicSquare[i][j] = num;
        num++;

        int newI = (i - 1 + n) % n;  // Move one row up
        int newJ = (j + 1) % n;      // Move one column right

        if (magicSquare[newI][newJ] != 0) { // If the cell is already occupied
            newI = (i + 1) % n; // Move down from the original cell
            newJ = j;           // Stay in the same column
        }

        i = newI;
        j = newJ;
    }
    
    // Print the magic square
    printf("Magic Square of size %d:\n", n);
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%4d", magicSquare[i][j]);
        }
        printf("\n");
    }
}

