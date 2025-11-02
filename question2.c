#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int HCF = 1;
    printf("Enter First Number:");
    scanf("%d", &n1);
    printf("Enter Second Number:");
    scanf("%d", &n2);
    if (n1 < 0)
    {
        n1 = -(n1);
    }
    if (n2 < 0)
    {
        n2 = -(n2);
    }
    if (n1 == 0 && n2 == 0)
    {
        printf("HCF is undetermined as both numbers are zero \n ");
    }
    else if (n1 == 0)
    {
        printf("HCF of 0 and %d is : %d", n2, n2);
    }
    else if (n2 == 0)
    {
        printf("HCF of %d and 0 is : %d", n1, n1);
    }
    else
    {
        for (int i = 1; i <= n1 && i <= n2; i++)
        {
            if (n1 % i == 0 && n2 % i == 0)
                HCF = i;
        }
        printf("HCF OF %d and %d is: %d", n1, n2, HCF);
    }
    return 0;
}
