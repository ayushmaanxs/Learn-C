/*
Print the given pattern Zero and One

1
0 1
1 0 1
0 1 0 1

*/
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int a=1;
            if((i+j)%2==0){
                printf("%d ",a);
            }
            else{
                a--;
                printf("%d ",a);
            }
        }
        printf("\n");
    }
    return 0;
}