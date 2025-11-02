#include <stdio.h>
int add(int a, int b) {
    int carry;
    while (b != 0) {
        carry = (unsigned int)(a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    
    return a;
}
int subtract(int x, int y) {
    int neg_y = add(~y, 1);
    
    // 2. Add x and the negative (two's complement) of y
    return add(x, neg_y);
}

int main() {
    int num1, num2;

    printf("Enter the first integer (x): ");
    scanf("%d", &num1);

    printf("Enter the second integer (y): ");
    scanf("%d", &num2);

    int result = subtract(num1, num2);

    printf("\n--- Bitwise Calculation ---\n");
    printf("%d - %d = %d\n", num1, num2, result);
    
    printf("\n--- Verification Check ---\n");
    printf("%d - %d = %d\n", num1, num2, (num1 - num2));

    return 0;
}
