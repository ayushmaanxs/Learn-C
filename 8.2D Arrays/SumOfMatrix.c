//Find the sum of elements of a given matrix n*m
#include <stdio.h>
int main()
{
    int n, m, sum = 0;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the elements is: %d", sum);
    return 0;
}