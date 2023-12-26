// Count the number of triplets whose sum s equal to given value x
#include <stdio.h>
int main()
{
    int n, x;
    printf("Your array pair sum must be equal to: ");
    scanf("%d", &x);
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n], totalTriplets = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dth number: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    totalTriplets++;
                    printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("There are %d triplets whose sum is equal to %d", totalTriplets, x);
    return 0;
}