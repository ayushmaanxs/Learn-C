// WAP to print reverse of a given number
#include <stdio.h>
int main()
{
    int n, lastDigit, rn = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        lastDigit = n % 10;
        rn = (10 * rn) + lastDigit;
        n = n / 10;
    };
    printf("Your reversed number is : %d", rn);
    return 0;
}