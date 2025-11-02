#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of scores: ");
    scanf("%d", &n);
    
    int scores[n], even_array[n], odd_array[n];
    int even_count = 0, odd_count = 0;

    printf("Enter %d scores:\n", n);
    for (i = 0; i < n; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    for (i = 0; i < n; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
            odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }
    printf("\nEven scores: ");
    if (even_count == 0)
        printf("None");
    else
        for (i = 0; i < even_count; i++)
            printf("%d ", even_array[i]);

    printf("\nOdd scores: ");
    if (odd_count == 0)
        printf("None");
    else
        for (i = 0; i < odd_count; i++)
            printf("%d ", odd_array[i]);

    printf("\n");

    return 0;
}
