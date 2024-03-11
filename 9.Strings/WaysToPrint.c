#include <stdio.h>
int main(){
    char str[]="Hello";
    int i=0;
    while(str[i]!='\0'){
        printf("%c ",str[i]);
        // printf("%c ",i[str]);
        // printf("%c ",*(str+i));
        // printf("%c ",*(i+str));
        i++;
    }
    return 0;
} 