// Make a function which calculate the factorial of 'n' using recursion

#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1; // base case
    int recAns = n * factorial(n - 1);
    return recAns;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d", fact);
    return 0;
}