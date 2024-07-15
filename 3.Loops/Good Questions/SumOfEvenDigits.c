// WAP to print sum of all the even digits of a given number
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
        if (lastDigit % 2 == 0)
        {
            sum = sum + lastDigit;
        }
        n = n / 10;
    };
    printf("The sum of even digits is : %d", sum);
    return 0;
}