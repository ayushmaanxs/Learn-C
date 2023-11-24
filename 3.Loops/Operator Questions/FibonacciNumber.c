// Print the nth Fibonacci Number
// 1 1 2 3 5 8 13 21 34 55 89 144 ...
#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, sum = 1;
    printf("Upto how many terms you want the series: ");
    scanf("%d", &n);
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        b = a;
        a = sum;
    }
    printf("The %dth fibonacci is %d", n, sum);
    return 0;
}