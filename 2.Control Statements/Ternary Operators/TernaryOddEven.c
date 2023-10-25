// Check whether the given number is even or odd using ternary operators
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    // ternary operators
    //  exp1 ? exp2 :exp3
    n % 2 == 0 ? printf("Even number") : printf("odd number");

    // if (n % 2 == 0)
    //     printf("Even number");
    // else
    //     printf("odd number");

    return 0;
}