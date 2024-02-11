//Write a program to reverse an array without using an extra array
#include <stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=6;

    /*
    for(int i=0,j=6;i<j;i++,j--){   //to run two loops simultaneously
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    */

    while(i<j){
        //arr[i] and arr[j]
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}

int main()
{
    int arr[7] = {4, 6, 22, 3, 16, 12, 29};
    reverse(arr);
    for (int i = 0;i<=6;i++)
    {
        printf("%d ",arr[i]);
    }
}