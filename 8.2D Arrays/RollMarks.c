//Write a program to store roll number and marks obtained by n students in P,C,M side by side in a matrix
#include <stdio.h>
int main(){
    int r;
    printf("Enter number of students: ");
    scanf("%d",&r);
    int arr[r][4];
    for(int i=0;i<r;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf(" R    P    C    M\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<4;j++){
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
