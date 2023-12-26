// Count the number of elements in the given array greater than a given number x
#include <stdio.h>
int main(){
    int n,x,count=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter %dth number: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x<arr[i]){
            count++;
        }
    }
    printf("There are %d elements which are greater than %d",count,x);

    return 0;
}
    