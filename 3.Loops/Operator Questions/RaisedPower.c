// Two numbers are entered through the keyboard.Write a program to find the value of one number raised to the power of another.
#include <stdio.h>
int main()
{
    int power = 1, a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter Power: ");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("The value when %d is raised to the power %d is %d", a, b, power);
    return 0;
}