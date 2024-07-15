/*
Print the given pattern

      * * * *
    * * * *
  * * * *
* * * *

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp =n-1,nst=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        nsp--;
        printf("\n");
    }
    return 0;
}