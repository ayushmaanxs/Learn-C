/*
Given an array of integers,change the value of all odd indexed elements to its second multiple and increment all the even indexed value by 10
*/
#include <stdio.h>
void increment(int n,int a[]){
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]=10+a[i];
        }
        else{
            a[i]=a[i]*2;
        }
    }
}
int main(){
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %dth number: ",i+1);
        scanf("%d",&arr[i]);
    }
    increment(n,arr);
    for(int i=0;i<n;i++){
        printf("Your %dth number is: %d\n",i+1,arr[i]);
    }
    return 0;
}

// #include <stdio.h>
// int main(){
//     int arr[7]={1,2,3,4,5,6,7};
//     for(int i=0;i<=;i++){
//         if(i%2!=0) arr[i]*=2;
//         else arr[i]+=10;
//     }
//     for(int i=0;i<=6;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }