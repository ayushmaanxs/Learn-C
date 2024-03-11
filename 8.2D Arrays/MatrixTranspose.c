// WAP to print the transpose of the matrix entered by the user (Leetcode - 867) also store that matrix in another array
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[c][r];
    // we have got the matrix till this step
    printf("\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            // printf("%d ", arr[j][i]);
            brr[i][j] = arr[j][i];
        }
    }
    // Printing brr
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}