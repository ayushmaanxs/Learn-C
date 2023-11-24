//Write a function to compute the greatest common divisor of two given numbers
#include <stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    
    int hcf;
    /*
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    */

   //More optimised/better way 

    for(int i=min;i>=1;i--){    //using reverse loop to make calculation easy for computer
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("The HCF/GCD of %d and %d is : %d",a,b,hcf);
    return 0;
}