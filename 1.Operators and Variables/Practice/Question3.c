//Take float input and print the fractional part of the real number

#include <stdio.h>
int main(){
//     float x;
//     scanf("%f",&x);
//     int y;
//     y = x;
//     printf("%d",y);
//     return 0;

    float x;
    printf("Enter the Number: ");
    scanf("%f",&x);
    int y;
    y = x;
    float z=x-y;
    printf("%f",z);
    return 0;
}