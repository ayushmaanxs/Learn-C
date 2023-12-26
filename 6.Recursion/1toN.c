// Print 1 to n using recursion
#include <stdio.h>
void IncreasingNumber(int x, int n)
{
    if (x > n)
        return;
    printf("%d \n", x);
    IncreasingNumber(x + 1, n);
    return;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    IncreasingNumber(1, n);
    return 0;
}