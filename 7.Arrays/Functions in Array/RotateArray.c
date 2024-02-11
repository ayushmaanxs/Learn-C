//Rotate the given array 'a' by 'K' steps, where 'K' is non negative.
// 'K' can be greater than 'n' as well where 'n' is the size of array 'a'.
#include <stdio.h>
// si = starting index
//ei = ending index

void rotate(int arr[],int si,int ei){  // reversing part of an array

    for(int i=si,j=ei;i<j;i++,j--){
        // arr[i] and arr[j]
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}

int main(){
    int a,k;
    printf("Enter number of steps to reverse: ");
    scanf("%d",&k);
    printf("Enter Array Size: ");
    scanf("%d",&a);
    if(k>a){
        k=k%a;  //for steps
    }
    int arr[a];
    for(int i=0;i<a;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    rotate(arr,0,a-1);
    rotate(arr,0,k-1);
    rotate(arr,k,a-1);

    for(int j=0;j<a;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}