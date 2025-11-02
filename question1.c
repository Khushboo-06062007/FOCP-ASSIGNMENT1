// Online C compiler to run C program online
#include <stdio.h>
#include <math.h> // Include for the pow() function

int main() {
    int num, originalnum, tempnum, remainder;
    int n = 0;      
    double sum = 0.0; 

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    originalnum = num;

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; // Exit program
    }
    tempnum = originalnum; 
    do {
        tempnum /= 10; 
        n++;
    } while (tempnum != 0);

    
    tempnum = originalnum; 
    
    while (tempnum != 0) {
        remainder = tempnum % 10;

        sum += pow(remainder, n);

        tempnum /= 10;
    }
    if ((int)round(sum) == originalnum) {
        printf("\nResult: %d is an Armstrong number.\n", originalnum);
    } else {
        printf("\nResult: %d is NOT an Armstrong number.\n", originalnum);
    }

    return 0; 
}
