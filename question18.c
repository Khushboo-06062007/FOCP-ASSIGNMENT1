#include <stdio.h>
void findDuplicates(int arr[], int n) {
    if (n <= 1) {
        printf("No duplicate elements possible.\n");
        return;
    }
    int is_duplicate_printed[n];
    for (int i = 0; i < n; i++) {
        is_duplicate_printed[i] = 0; 
    }

    printf("Duplicate elements are: ");
    int duplicates_found = 0;

    for (int i = 0; i < n; i++) {
        if (is_duplicate_printed[i] == 0) {
            int count = 0;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    is_duplicate_printed[j] = 1; 
                }
            }
            if (count > 0) {
                printf("%d ", arr[i]);
                duplicates_found = 1;
             
                is_duplicate_printed[i] = 1; 
            }
        }
    }

    if (duplicates_found == 0) {
        printf("None");
    }
    printf("\n");
}
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for array size. Please enter a positive integer.\n");
        return 1; 
    }
    int arr[n]; 

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Non-integer entered. Exiting.\n");
         
            while(getchar() != '\n'); 
            return 1; 
        }
    }

    printf("\nInput Array: {");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("}\n");

    findDuplicates(arr, n);

    return 0;
}
