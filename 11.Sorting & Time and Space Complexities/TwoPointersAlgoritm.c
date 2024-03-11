//Given an array of integer numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number
#include <stdio.h>
int main(){
    int target=8;
    int n=8;
    int arr[8]={1,2,3,4,5,8,9,10};

    //Method 1 :- Inefficient in terms of time.It's time complexity is O(n^2)
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("%d and %d\n",arr[i],arr[j]);
                break;
            }
        }
    }

    //Method 2 :- More efficient and optimised approach(The 2 pointer approach)Here with 2 pointer we meant 2 variables.It's time complexity is O(n) as number of operations required is around 2n only
    
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("%d and %d\n",arr[i],arr[j]);
            break;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
    }
    return 0;
}