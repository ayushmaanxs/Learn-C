/*
Print the given pattern

    *
    *
* * * * *
    *
    *     

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==(n+1)/2 || i==(n+1)/2){
                printf("* ",j);
            }
            else{
                printf("  ");
            }
            
        };
        printf("\n");
    };
    return 0;
}