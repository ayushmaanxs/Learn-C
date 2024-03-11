#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int a[m][n];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //sprial print
    int minr=0; //minimum row number
    int maxr=m-1;   //maximum row number
    int minc=0; //minimum column number
    int maxc=n-1;   //maximum column number
    int tne=m*n;    //total number of elements
    int count=0;    //printed elements count
    while(count<tne){
        //print the minimum row
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
        minr++;
        // if(count>=tne) break;
        //print the maximum column
        for(int k=minr;k<=maxr && count<tne;k++){
            printf("%d ",a[k][maxc]);
            count++;
        }
        maxc--;
        // if(count>=tne) break;
        //printing new min row in reverse order
        for(int l=maxc;l>=minc && count<tne;l--){
            printf("%d ",a[maxr][l]);
            count++;
        }
        maxr--;
        // if(count>=tne) break;
        //printing new min column in reverse order
        for(int p=maxr;p>=minr && count<tne;p--){
            printf("%d ",a[p][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}    