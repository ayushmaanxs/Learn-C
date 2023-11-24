// Display this GP - 3,12,48,... upto n terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int a = 3;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 4;
    }
    return 0;
}