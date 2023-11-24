/*
Print the given pattern

      *
    * * *
  * * * * *
* * * * * * *

*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nst=1;  //Number of stars
    int nsp=n-1;  //Number of spaces
    for(int i=1;i<=n;i++){
        // for(int j=1;j<=n-i;j++){
        //     printf("  ");
        // }
        // for(int k=1;k<=2*i-1;k++){
        //     printf("* ");
        // }
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        nsp=nsp-1;
        for(int k=1;k<=nst;k++){
            printf("* ");
        }
        nst=nst+2;  //as number of stars in each column is 2 more than the initial number
        printf("\n");
    }
    return 0;
}