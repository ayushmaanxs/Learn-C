#include <stdio.h>
#include <stdlib.h> 
int main(){
    int x;
    printf("Enter number of random numbers: ");
    scanf("%d",&x);
    int ra[x];
    for(int i=0;i<x;i++){
        printf("Your random number %d is %d \n",i+1,rand());
    }
    return 0;
}