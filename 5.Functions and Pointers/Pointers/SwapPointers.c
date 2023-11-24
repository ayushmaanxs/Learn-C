#include <stdio.h>
void swap(int* x,int* y){  //to store address of 'a' inside 'x' and address of 'b' inside 'y'
    int temp =*x;   //temp =2
    *x=*y;  //a = 9
    *y=temp;    // *y = 2 -> b=2;
    return;
}
int main(){
    int a;
    printf("Enter a: "); 
    scanf("%d",&a);
    int b;
    printf("Enter b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of a is %d",a);
    printf("\nThe value of b is %d",b);
    return 0;
}