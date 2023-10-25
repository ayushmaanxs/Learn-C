// Check whether the given number is even or odd
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even number");
    }

    // using not equal to is not preffered here as computer will comupute 2 times so it is advised to use else insted of using a not equal to if
    //  if (n%2!=0){
    //      printf("Odd Number");
    //  };

    else
    {
        printf("odd number");
    };
    return 0;
}