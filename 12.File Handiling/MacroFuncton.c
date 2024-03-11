#include<stdio.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)

// float area(float r){
//     return PI*r*r;
// }

int main(){
    float r=4.2;
    printf("The area is : %f",area(r));
    return 0;
}