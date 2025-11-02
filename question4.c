#include <stdio.h>

void swap_temp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_arithmetic(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void swap_xor(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
void swap_pointers(int *a, int *b){
    int *temp = a;
    a = b;
    b = temp;
    
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int x,y;
    printf("Enter first integer (x): ");
    scanf("%d", &x);

    printf("Enter second integer (y): ");
    scanf("%d", &y);

    printf("\nOriginal values: x = %d, y = %d\n", x, y);
    printf("--------------------------------------\n");

    int x1 = x, y1 = y; 
    printf("Testing swap_temp...\n");
    printf("  Before: x1 = %d, y1 = %d\n", x1, y1);
    swap_temp(&x1, &y1);
    printf("  After:  x1 = %d, y1 = %d\n", x1, y1);
    printf("--------------------------------------\n");

    // --- 2. Test swap_arithmetic ---
    int x2 = x, y2 = y; // Use fresh copies
    printf("Testing swap_arithmetic...\n");
    printf("  Before: x2 = %d, y2 = %d\n", x2, y2);
    swap_arithmetic(&x2, &y2);
    printf("  After:  x2 = %d, y2 = %d\n", x2, y2);
    printf("--------------------------------------\n");

    int x3 = x, y3 = y; 
    printf("Testing swap_xor...\n");
    printf("  Before: x3 = %d, y3 = %d\n", x3, y3);
    swap_xor(&x3, &y3);
    printf("  After:  x3 = %d, y3 = %d\n", x3, y3);
    printf("--------------------------------------\n");

    int x4 = x, y4 = y; 
    printf("Testing swap_pointers...\n");
    printf("  Before: x4 = %d, y4 = %d\n", x4, y4);
    swap_pointers(&x4, &y4);
    printf("  After:  x4 = %d, y4 = %d\n", x4, y4);
    printf("--------------------------------------\n");


    return 0;
}
