/*
Print the given pattern of Number Triangle Ulta

1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter No. of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a =1;
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }

    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    return 0;
}