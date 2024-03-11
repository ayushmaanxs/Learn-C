#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    //scanf("%s",str);    //only first word will be considered when we use scanf in %s
    //scanf("%[^\n]s",str);   //entire senetence input using scanf
    gets(str);  //entire sentence can be input
    printf("Your input was : %s \n",str);
    puts(str);
    return 0;
} 