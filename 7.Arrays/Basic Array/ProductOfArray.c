//Calculate the product of all the elements in a given array

#include <stdio.h>
int main(){
    int n,product=1;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        product=product*arr[i];
    }
    printf("The product is : %d",product);
    return 0;
}