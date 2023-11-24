//WAP to check a composite number
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
            printf("The number is composite");
            break;
        }
    };
}