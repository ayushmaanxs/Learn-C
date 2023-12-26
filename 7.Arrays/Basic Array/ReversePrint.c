//Print an array in reverse order

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("The element number %d is: ",i+1);
        printf("%d\n",arr[i]);
    }
    return 0;
}