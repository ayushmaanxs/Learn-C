#include <stdio.h>
int main(){
    // int arr[2][2];
    // 1 2
    // 3 4

    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    
    //or

    int arr[3][3]={{1,2,3},{3,4,5},{6,7,8}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}