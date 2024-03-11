// WAP to print the multiplication of two matrices given by the user
#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Considering the first matrix\n");
    printf("Enter number of rows in 1st Matrix: ");
    scanf("%d", &r1);
    printf("Enter number of columns in 1st Matrix: ");
    scanf("%d", &c1);
    printf("Considering the second matrix\n");
    printf("Enter number of rows in 2nd Matrix: ");
    scanf("%d", &r2);
    printf("Enter number of columns in 2nd Matrix: ");
    scanf("%d", &c2);

    // Checking the possibility of multiplication
    if (c1 != r2)
    {
        printf("For possible matrix multiplication number of columns in 1st Matrix must be equal to the number of rows of 2nd matrix");
        return 0;
    }
    // creating array based on inputs
    int a[r1][c1], b[r2][c2];
    //Taking elements nput in array
    printf("Enter the elements for 1st matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements for 2nd matrix\n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int res[r1][c2];    //resultant matrix
    //Now starting multiplication and storing it in our resultant matrix
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            //We want only i row of a[][] and j column of b[][]
            //(a[i][0],a[i][1],a[i][2].....) * (b[0][j],b[1][j].....)
            int element=0,add;
            for(int k=0;k<c1;k++){
                add=a[i][k]*b[k][j];
                element=element+add;
            }
            res[i][j]=element;
        }
    }
    printf("\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    } 

    return 0;
}