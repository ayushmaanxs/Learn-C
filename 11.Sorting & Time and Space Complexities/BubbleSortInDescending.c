#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[5]={3,5,8,9,2};
    int n=5;
    printf("Unsorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    //Bubble Sort Starts
    for(int i=0;i<n-1;i++){
        bool flag = false;  //initialized flag with false
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=true;  //if any element get swapped flag will change its value to true
            }
            if(flag==false){    //if flag is still false then it means no element got swapped i.e, our array is sorted so we'll break the loop here
                break;
            }
        }
    }
    //Bubble Sort Ends
    printf("\n");
    printf("Sorted array in Descending order : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
