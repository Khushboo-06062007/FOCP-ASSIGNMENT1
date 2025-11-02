#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nArray before deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Choose position to delete
    printf("\n\nEnter position to delete:\n");
    printf("1. Front\n2. Middle (specify position)\n3. End\n");
    int choice;
    scanf("%d", &choice);

    if (choice == 1)
        pos = 0;
    else if (choice == 2) {
        printf("Enter position (1 to %d): ", n);
        scanf("%d", &pos);
        pos--; 
    }
    else if (choice == 3)
        pos = n - 1;
    else {
        printf("Invalid choice!\n");
        return 0;
    }
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("\nArray after deletion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
