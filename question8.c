#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1;
    int nextTerm;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("\nFibonacci Series up to %d terms: \n", n);

    if (n >= 1) {
        printf("%d", t1);
    }
    if (n >= 2) {
        printf(", %d", t2);
    }

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf(", %d", nextTerm);

        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n"); 
    return 0;
}
