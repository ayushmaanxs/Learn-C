// Print your name 5 times using recursion
#include <stdio.h>
void name(int n)
{
    if (n == 0)
        return;
    printf("Ayushmaan Shandilya\n");
    name(n - 1);
    return;
}
int main()
{
    int n;
    printf("Enter number of times to print name: ");
    scanf("%d", &n);
    name(n);
    return 0;
}