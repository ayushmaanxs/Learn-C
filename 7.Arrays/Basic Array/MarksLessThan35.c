//Given an array of marks of students if the mark of any student is less than 35 print its ROLL NUMBER (roll number here refers to the index of array)

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
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            printf("%d ",i);
        }
    }
    return 0;
}