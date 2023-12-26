//Find the second largest element in a given array
#include <stdio.h>
#include <limits.h>
int main(){
    int arr[7]={-10,-4,-200,-80,-19,-5,-12};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    // printf("%d",max);
    for(int i=0;i<=6;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}