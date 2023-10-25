#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n < 0)
    { // if n is negative
        n = n * (-1);
    }
    printf("The absolute value is : %d", n);
}