#include<stdio.h>
#include <math.h>
#include <limits.h>
int main(){
    // math.h 
    float x = 216;
    printf("%f\n",cbrt(x));
    printf("%f\n",sqrt(x));
    // limits.h
    int y=INT_MAX;
    printf("%d",y);
    long z=LONG_MAX;
    printf("%ld",z);
    return 0;
} 