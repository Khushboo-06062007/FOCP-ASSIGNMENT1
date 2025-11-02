#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i=1; i <= n; i++) {
        int toggle = 0; 
        for(j = 1; j <= i; j++) {
            printf("%d", toggle);
            toggle = 1 - toggle; 
        }
        printf("\n");
    }
    return 0;
}
