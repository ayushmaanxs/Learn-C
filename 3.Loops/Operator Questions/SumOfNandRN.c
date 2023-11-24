// WAP to print the sum of given number and its reverse
#include <stdio.h>
int main()
{
    int n, a, lastDigit, rn = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    a = n;  //as we need to retain the original number
    
    while (n != 0)
    {
        lastDigit = n % 10;
        rn = (10 * rn) + lastDigit;
        n = n / 10;
    }
    printf("The sum of given number and its reverse is: %d", a + rn);
    return 0;
}