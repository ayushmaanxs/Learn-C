/*
Print the given pattern of Star Triangle Ulta

* * * *
* * *
* *
*

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter No. of rows: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}