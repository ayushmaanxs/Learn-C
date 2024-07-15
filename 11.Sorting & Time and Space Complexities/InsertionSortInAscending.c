#include <stdio.h>
int main()
{
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    int n = 7, temp;
    printf("Unsorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Insertion Sort Starts
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    // Insertion Sort Ends
    printf("\n");
    printf("Sorted array in ascending order : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
