//Reverse any part of an array using functions
#include <stdio.h>
// void reverse(int arr[]){
//     int i=2;
//     int j=5;

//     while(i<j){
//         //arr[i] and arr[j]
//         int temp = arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
//     return;
// }

// si = starting index
//ei = ending index

void reverse(int arr[],int si,int ei){  // reversing part of an array

    for(int i=si,j=ei;i<j;i++,j--){
        // arr[i] and arr[j]
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}

int main()
{
    int arr[7] = {4, 6, 22, 3, 16, 12, 29};
    reverse(arr,2,5);

    // to reverse part of an array without using function
    //index 1-4 reverse 
    // for(int i=1,j=4;i<=j;i++,j--){
    //     int temp = arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    // }

    for (int i = 0;i<=6;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}