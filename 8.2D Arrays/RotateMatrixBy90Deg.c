//WAP to rotate a matrix 90 degree clockwise (Leetcode - 48)
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
    //To rotate we need to reverse the row of the  transposed matrix
    for (int i = 0; i < n; i++)
    {
       int j=0;
       int k=n-1;
       while(j<k){
            //swap arr[i][j] and arr[i][k];
            temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
       }
    } 
    printf("\n");
    //output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}