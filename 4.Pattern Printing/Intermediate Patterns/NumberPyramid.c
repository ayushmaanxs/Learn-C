/*
Print the given pattern

      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp=n-1;  //Number of spaces
    int nst=1;  //Number of stars
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        nsp=nsp-1;
        for(int k=1;k<=nst;k++){
            printf("%d ",k);
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}