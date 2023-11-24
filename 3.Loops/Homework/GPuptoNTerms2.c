//Display this GP - 100,50,25,... upto 'n' terms
#include<stdio.h>
int main(){
    int a;
    printf("Enter number of terms: ");
    scanf("%d",&a);
    float n=100;
    for(int i=1;i<=a;i++){
        printf("%f  ",n);
        n=n*1/2;
    };
    return 0;
}