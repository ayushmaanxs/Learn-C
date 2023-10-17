// Take 4 positive integers input and print the greatest of them
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("Enter Third Number: ");
    scanf("%d", &c);
    printf("Enter Fourth Number: ");
    scanf("%d", &d);
    if (a > b && a > c && a>d)
    {
        printf("%d is the greatest among all the four", a);
    }
    if (b > a && b > c && b>d)
    {
        printf("%d is the greatest among all the four", b);
    }
    if (c > b && c > a && c>d)
    {
        printf("%d is the greatest among all the four", c);
    }
    if (d > b && d > c && d>a) 
    {
        printf("%d is the greatest among all the four", d);
    };
    return 0;
}