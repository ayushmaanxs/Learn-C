// Take positive integer input and tell if is divisible by 5 and 3
// Solve this questiion using the concept of nested grids

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            printf("The number is divisible by 5 and 3");
        }
        else
        {
            printf("The number is not divisible by 5 and 3");
        }
    }
    else
    {
        printf("The number is not divisible by 5 and 3");
    };
    return 0;
}