// Take 3 positive integers input and print the greatest of them

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is the greatest among all the three", a);
    }
    if (b > a && b > c)
    {
        printf("%d is the greatest among all the three", b);
    }
    if (c > b && c > a)
    {
        printf("%d is the greatest among all the three", c);
    };
    return 0;
}