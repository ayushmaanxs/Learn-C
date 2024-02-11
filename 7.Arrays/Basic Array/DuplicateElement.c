// WAP to find a duplicate element from a given array of integers.
#include <stdio.h>
int main(){
    int n,x;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %dth number: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=n;k>j;k--){
            if(arr[j]==arr[k]){
                printf("%d is the duplicate element",arr[j]);
                break;
            }
        }
    }
    return 0;
}