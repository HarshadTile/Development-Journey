#include <stdio.h>

// Function prototype
int sequentialSearch(int arr[], int size, int target);

int main() {
    int size, target, index ,i;

    // Get the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Initialize the array
    int arr[size];
    printf("Enter %d elements:\n", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the target value to search for
    printf("Enter the value to search for: ");
    scanf("%d", &target);

    // Perform the sequential search
    index = sequentialSearch(arr, size, target);

    // Output the result
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

// Sequential search function
int sequentialSearch(int arr[], int size, int target) {
	int i;
    for ( i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Target found, return index
        }
    }
    return -1; // Target not found
}

