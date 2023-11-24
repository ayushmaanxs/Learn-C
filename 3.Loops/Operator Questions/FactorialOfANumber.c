// Print the factorial of a given number 'n'.
#include <stdio.h>
int main()
{
    int n, factorial = 1;
    printf("Enter your number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    };
    printf("The value of %d! is: %d", n, factorial);
    return 0;
}