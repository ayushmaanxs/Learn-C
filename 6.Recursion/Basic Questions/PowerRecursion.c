// Make a function which calculates 'a' raised to the power 'b' using recursion

#include <stdio.h>

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int value = a * power(a, b - 1);
    return value;
}
int main()
{
    int a, b;
    printf("Enter base a: ");
    scanf("%d", &a);
    printf("Enter power b: ");
    scanf("%d", &b);
    int value = power(a, b);
    printf("The value when base is %d and power is %d is : %d", a, b, value);
    return 0;
}