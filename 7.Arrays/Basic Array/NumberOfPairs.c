// Find the total number of pairs in the array whose sum is equal to the given value 'x'
#include <stdio.h>
int main()
{
    int n, x;
    printf("Your array pair sum must be equal to: ");
    scanf("%d", &x);
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n], totalPairs = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalPairs++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }
    printf("There are %d pairs whose sum is equal to %d", totalPairs, x);
    return 0;
}