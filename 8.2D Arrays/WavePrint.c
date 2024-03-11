//WAP to print the matrix in waveform
//WAP to rotate a matrix 90 degree clockwise (Leetcode - 48)
#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    //Wave Print
    for(int i=0;i<r;i++){
        if(i%2==0){
            for(int j=0;j<c;j++){
                printf("%d ",arr[i][j]);
            }
        }
        else{
            for(int j=c-1;j>=0;j--){
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}    