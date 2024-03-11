//WAP to find out the row number containing maximum number of 1's
#include <stdio.h>
int main(){
    int arr[3][4]={{1,0,1,1},{0,1,0,1},{1,0,0,1}};
    // 1 0 1 1
    // 0 1 0 1
    // 1 0 0 1
    int maxCount=0;
    int maxIndex=-1;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxCount<count){
            maxCount = count;
            maxIndex = i;
        }
        printf("\n");
    }
    printf("The maximum number of 1's is %d and it lies in %dth row",maxCount,maxIndex+1);
    return 0;
}