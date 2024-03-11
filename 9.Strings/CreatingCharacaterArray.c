#include <stdio.h>
int main(){
    char arrch[]={'H','e','l','l','o',' ','W','o','r','l','d','\0'};
    int i=0;
    while(arrch[i]!='\0'){
        printf("%c",arrch[i]);
        i++;
    }
    return 0;
}