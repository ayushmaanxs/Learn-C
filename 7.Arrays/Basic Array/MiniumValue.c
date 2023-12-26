//Find the minimum value out of all the elements in the array
#include <stdio.h>
#include<limits.h>
int main(){
    int arr[7]={-10,16,40,-4,-1,-11,19};
    int min=INT_MAX;
    // int max = arr[0];   //Instead of storing -1 just put 1st elemnet of the array here
    for(int i=1;i<=6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}