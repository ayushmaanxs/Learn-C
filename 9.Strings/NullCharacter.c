#include <stdio.h>
int main(){
    char ch='\0';   //null character
    int x=0;
    char a=(char)x;
    printf("%c ",a);    //a --> '\0'    //this will not print anything
    // printf("%d ",ch);
    return 0;
}