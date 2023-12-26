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
    int nsp=n-1,nst=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1;k<=2*nst-1;k++){
            printf("* ");
        }
        nsp=nsp-1;
        nst=nst+1;
        printf("\n");
    }
    return 0;
}