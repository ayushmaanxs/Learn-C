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
    int nsp=n-1,nno=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=2*nno-1;j++){
            printf("%d ",j);
        }
        nsp=nsp-1;
        nno=nno+1;
        printf("\n");
    }
    return 0;
}