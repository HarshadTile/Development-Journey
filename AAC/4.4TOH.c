#include <stdio.h>

// Function prototype
void towerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg);

int main() {
    int n;
    
    // Get user input
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    // Solve Tower of Hanoi problem
    towerOfHanoi(n, 'A', 'C', 'B');  // 'A' is source, 'C' is destination, 'B' is auxiliary
    
    return 0;
}

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg) {
    // Base case: Only one disk
    if (n == 1) {
        printf("Move disk 1 from peg %c to peg %c\n", fromPeg, toPeg);
        return;
    }
    
    // Move n-1 disks from source to auxiliary peg
    towerOfHanoi(n - 1, fromPeg, auxPeg, toPeg);
    
    // Move the nth disk from source to destination peg
    printf("Move disk %d from peg %c to peg %c\n", n, fromPeg, toPeg);
    
    // Move n-1 disks from auxiliary to destination peg
    towerOfHanoi(n - 1, auxPeg, toPeg, fromPeg);
}

