// Print the table of "n".
// Here "n" is a integer that the user will input.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n * 10; i++)
    {
        if (i % n == 0)
            printf("%d ", i);
    }
    return 0;
}