#include <stdio.h>
#define PI 3.1415926539
int main(){
    printf("%f\n",PI);    //%f can store/print upto 6 decimal places only
    double x= 3.141592653978654;  //can store and print upto 15 decimal places
    printf("%.14f\n",x);    //  to first first 14 decimal places
    return 0;
}