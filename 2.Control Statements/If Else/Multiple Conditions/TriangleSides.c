// Take 3 numbers input and tell if they can be sides of a triangle

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter First Side: ");
    scanf("%d",&a);
    printf("Enter Second Side: ");
    scanf("%d",&b);
    printf("Enter Third Side: ");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (a+c)>b){
        printf("Valid Triangle");
    }
    else{
        printf("Invalid Triangle");
    };
    return 0;
}