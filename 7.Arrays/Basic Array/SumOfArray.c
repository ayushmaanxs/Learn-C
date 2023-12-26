//Calculate the sum of all the elements in a given array

#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("The sum is: %d",sum);
    return 0;
}