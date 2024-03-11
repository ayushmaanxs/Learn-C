#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr =(int*) malloc(10*4);
    printf("%p\n",ptr);
    ptr = realloc(ptr,7*4); //memory getting reallocated but having same address as initial one
    printf("%p\n",ptr);
    ptr = realloc(ptr,20000*4);   //  memory getting reallocated but having different addrdess as initial one
    printf("%p\n",ptr);
    return 0;
}