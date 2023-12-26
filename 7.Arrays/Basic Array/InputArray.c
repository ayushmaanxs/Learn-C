#include <stdio.h>
int main(){

    int arr[5];
    // printf("Enter first number: ");
    // scanf("%d",&arr[0]);
    // printf("Enter Second number: ");
    // scanf("%d",&arr[1]);
    // printf("Enter Third number: ");
    // scanf("%d",&arr[2]);
    // printf("Enter Fourth number: ");
    // scanf("%d",&arr[3]);
    // printf("Enter Fifth number: ");
    // scanf("%d",&arr[4]);
    
    for(int i=0;i<=4;i++){
        printf("Enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("The element number %d is : ",i+1);
        printf("%d\n",arr[i]);
    }

    return 0;
}