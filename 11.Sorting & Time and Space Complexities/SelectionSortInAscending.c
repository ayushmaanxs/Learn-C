#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[5]={7,4,5,9,8,2,1};
    int n=7;
    printf("Unsorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //Selection Sort Starts
    
    //Selection Sort Ends
    printf("\n");
    printf("Sorted array in ascending order : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
