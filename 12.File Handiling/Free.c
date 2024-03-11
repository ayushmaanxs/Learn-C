#include <stdio.h>
#include <stdlib.h>
int main(){
    // int x=9;
    // int* ptr = NULL;
    // printf("%p",ptr);

    int* ptr = (int*) calloc(10,4);
    int* p=ptr; //  P me ptr pointer ka original / initial address store kar diya
    ptr++;
    free(ptr);
    return 0;
}