#include <stdio.h>
int main()
{
    int n, a = 1, b = 1, sum = 0;
    printf("Upto how many terms you want the series: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        b = a;
        a = sum;
        sum = a + b;
        printf("%d\n", sum);
    }
    return 0;
}