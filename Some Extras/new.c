#include <stdio.h>
int main(){
    int x =3 ,y=4,z=2;
    int a = (x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("%d",a);
    return 0;
}