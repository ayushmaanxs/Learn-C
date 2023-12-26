//Find the difference between the sum of elements at even indices to the sum of elements at odd indices
#include <stdio.h>
int main(){
    int evenSum=0,oddSum=0,arr[7]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++){
        if(i%2==0){
            evenSum=evenSum+arr[i]; //2+4+6=12
        }
        else if(i%2!=0){
            oddSum=oddSum+arr[i];  //1+3+5+7=16
        }
    }
    printf("%d",evenSum-oddSum);    //16-12=4
    return 0;
} 