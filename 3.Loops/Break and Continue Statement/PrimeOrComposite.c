// WAP to check if a number is prime or composite
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a = 0;
    for (int i=2;i<=n-1;i++)
    {
        if (n % i == 0)  //i is a factor of n
        {
            a = 1;
            break;
        }
    };
    if(n==1)
        printf("The number is neither prime nor composite");
    else if (a == 0)
        printf("The given number is prime\n");
    else
        printf("The given number is Composite\n");
    return 0;
}