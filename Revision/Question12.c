/*
Print the given pattern Hollow Rectangle

* * * * * *
*         *
*         *
* * * * * *

*/
#include <stdio.h>
int main(){
    int n,s;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+2;j++){
            if(i==1 || i==n || j==1 || j==n+2){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}