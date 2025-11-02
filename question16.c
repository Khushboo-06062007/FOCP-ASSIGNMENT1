#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[50];
    int n, element, position;
    printf("Enter the number of elements in the array (max 49): ");
    if (scanf("%d", &n) != 1 || n < 0 || n >= 50) {
        printf("Invalid number of elements.\n");
        return 1; 
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("\n--- Array BEFORE Insertion ---\n");
    printf("Array: ");
    printArray(arr, n);
    printf("\nEnter the element to insert: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("Enter the position for insertion (1 for front, %d for end, 1 to %d for middle): ", n + 1, n + 1);
    if (scanf("%d", &position) != 1 || position < 1 || position > n + 1) {
        printf("Invalid position for insertion. It must be between 1 and %d.\n", n + 1);
        return 1;
    }

    int index = position - 1;

    if (n >= 50) {
        printf("Error: Array is full. Cannot insert more elements.\n");
    } else {
        for (int i = n - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;

        n++;

        printf("\n--- Array AFTER Insertion ---\n");
        printf("The element %d was inserted at position %d.\n", element, position);
        printf("Array: ");
        printArray(arr, n);
    }

    return 0;
}
