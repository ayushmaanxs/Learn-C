// WAP to print the sum of digits of a given number
#include <stdio.h>
int main()
{
    int n, lastDigit;
    printf("Enter Number: ");
    scanf("%d", &n);
    int sum = 0;
    while (n != 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    };
    printf("The sum of digits is %d", sum);
    return 0;
}