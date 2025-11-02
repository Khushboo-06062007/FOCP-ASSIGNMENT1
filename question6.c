#include <stdio.h>
#include <math.h>
    int binaryToDecimal(int binary) {
        int decimal = 0, base = 1, last_digit;

        while (binary > 0) {
            last_digit = binary % 10;
            decimal += last_digit * base;
            base *= 2;
            binary /= 10;
        }
        return decimal;
    }
    int decimalToBinary(int decimal) {
        int binary = 0, base = 1, remainder;

        while (decimal > 0) {
            remainder = decimal % 2;
            binary += remainder * base;
            base *= 10;
            decimal /= 2;
        }
        return binary;
    }

    int main() {
        int choice, number;

        printf("Choose conversion type:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter a binary number: ");
            scanf("%d", &number);
            printf("The decimal equivalent is: %d\n", binaryToDecimal(number));
        } 
        else if (choice == 2) {
            printf("Enter a decimal number: ");
            scanf("%d", &number);
            printf("The binary equivalent is: %d\n", decimalToBinary(number));
        } 
        else {
            printf("Invalid choice!\n");
        }

        return 0;
    }
