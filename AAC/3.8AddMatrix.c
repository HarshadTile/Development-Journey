#include <stdio.h>

#define ROWS 2
#define COLS 3

int main() {
    int A[ROWS][COLS], B[ROWS][COLS], C[ROWS][COLS];
    int i,j;
    
    // Input for matrix A
    printf("Enter elements of matrix A (%d x %d):\n", ROWS, COLS);
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input for matrix B
    printf("Enter elements of matrix B (%d x %d):\n", ROWS, COLS);
    for ( i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Adding matrices A and B
    for (i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Displaying the result
    printf("Result of A + B:\n");
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

