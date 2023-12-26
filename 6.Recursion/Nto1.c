// Print n to 1 using recursion
#include <stdio.h>
void reverseNumber(int n)
{
    if (n == 0)
        return;
    printf("%d\n", n);
    reverseNumber(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    reverseNumber(n);
    return 0;
}