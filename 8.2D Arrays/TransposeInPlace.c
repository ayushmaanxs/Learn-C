// WWAP to change the given n*n matrix to its transpose
#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter number of rows/columns: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // swap arr[i][j] and arr[j][i]
            temp = arr[j][i];
            arr[j][i] = arr[i][j];
            arr[i][j] = temp;
        }
    } 
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if(j>i){
    //             // swap arr[i][j] and arr[j][i]
    //             temp = arr[j][i];
    //             arr[j][i] = arr[i][j];
    //             arr[i][j] = temp;
    //         }
    //     }
    // }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}