/*
Print the given pattern

1 2 3 4 5 6 7
1 2 3   5 6 7
1 2       6 7
1           7

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int nsp=1;   //spacs count
    int nno=n;  //numbers count
    
    for(int i=1;i<=2*n+1;i++){  //first row
        printf("%d ",i);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=nno;j++){  //numbers
            printf("%d ",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){  //spaces
            printf("  ");
            a++;
        }
        for(int j=1;j<=nno;j++){   //numbers
            printf("%d ",a);
            a++;
        }
        nsp+=2;
        nno--;
        printf("\n");
    }
    return 0;
}