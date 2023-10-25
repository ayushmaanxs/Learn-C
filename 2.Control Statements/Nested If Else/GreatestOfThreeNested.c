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
    if (a > b)
    { // b is out of the race
        if (a > c)
            printf("%d is the greatest", a);
        else // a < c
            printf("%d is the greatest", c);
    }
    else
    { // b > a -> a ab sabse bada toh nahi hai
        if (b > c)
            printf("%d is the greatest", b);
        else // c > b
            printf("%d is the greatest", c);
    };
    return 0;
}