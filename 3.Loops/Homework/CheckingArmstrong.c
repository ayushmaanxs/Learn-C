// Check whether the input number is an armstrong number or not
#include <stdio.h>
int main()
{
    int a, n, Real, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    Real = n; // as we want the original number also
    while (n != 0)
    {
        a = n % 10;
        sum = sum + (a * a * a);
        n = n / 10;
    };
    if (sum == Real)
    {
        printf("%d is an armstrong number", Real);
    }
    else
    {
        printf("%d is an not an armstrong number", Real);
    };
    return 0;
}