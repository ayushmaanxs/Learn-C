// Print sum from 1 to n using Return Type

#include <stdio.h>
int sum(int n)
{
    if (n == 1 || n == 0)
        return n; // base case
    int summation = n + sum(n - 1);
    return summation;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int nsum = sum(n);
    printf("%d", nsum);
    return 0;
}