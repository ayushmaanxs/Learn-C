#include <stdio.h>
int main(){
    int arr[7]={7,4,5,9,8,2,1};
    int n=7,temp;
    printf("Unsorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //Selection Sort Starts
    for(int i = 0;i<=n-2;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        temp = arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
    
    //Selection Sort Ends
    printf("\n");
    printf("Sorted array in ascending order : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
