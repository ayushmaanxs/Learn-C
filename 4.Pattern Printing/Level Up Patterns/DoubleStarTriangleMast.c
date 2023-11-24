/*
Print the given pattern

* * * * * * *
* * *   * * *
* *       * *
*           *

*/

#include <stdio.h>
int main(){ 
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
    for(int i=1;i<=2*n+1;i++){ //1st line
            printf("* ");
        }
        printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){ //left side stars
            printf("* ");
        }
        for(int k=1;k<=nsp;k++){ //between stars spaces
            printf("  ");
        }
        for(int j=1;j<=nst;j++){ //right side stars
            printf("* ");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}