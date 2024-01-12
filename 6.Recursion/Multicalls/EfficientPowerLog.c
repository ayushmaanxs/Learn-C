// Make a function which calculates 'a' raised to the power 'b' using recursion
// More efficient way to calculate 'a' raised to the power 'b'

#include <stdio.h>

int powerlog(int a, int b)
{
    if (b == 0)
        return 1;
    int x = powerlog(a, b / 2);

    if (b % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return x * x * a;
    }
}
int main()
{
    int a, b;
    printf("Enter base a: ");
    scanf("%d", &a);
    printf("Enter power b: ");
    scanf("%d", &b);
    int value = powerlog(a, b);

    //     if(b%2!=0){ //odd
    //         printf("The value when base is %d and power is %d is : %d", a, b-1, a*value);
    //     }
    //    else{    //even
    //         printf("The value when base is %d and power is %d is : %d", a, b, value);
    //     }

    printf("The value when base is %d and power is %d is : %d", a, b, value);
    return 0;
}