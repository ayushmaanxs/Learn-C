/*
Print the given pattern Star Plus

    *
    *
* * * * *
    *
    * 

*/
#include <stdio.h>
int main(){
    int n,s;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    int lic = (n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==lic || j==lic){
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
