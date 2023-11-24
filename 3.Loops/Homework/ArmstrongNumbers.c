// Write a program to print out all armstrong numbers between 1 and 500.If sum of cubes of each digit of the number is equal to the number itself,then the number is called an Armstrong number.For Example, 153 = (1*1*1)+(5*5*5)+(3*3*3)
#include <stdio.h>
int main()
{
    int n, a,sum;
    for (int i = 1; i <= 500; i++)
    {
        n = i; // as we need to retain original value
        sum=0;
        while (n != 0)
        {
            a = n % 10;
            sum = sum + (a * a * a);
            n = n / 10;
        }
        if (sum == i)
        {
            printf("%d\n", i);
        };
    };
    return 0;
}