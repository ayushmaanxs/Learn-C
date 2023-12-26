#include <stdio.h>
int main(){
    int n;
    
    printf("Enter number of characters in your name: ");
    scanf("%d",&n);
    char x[n];
    printf("Enter your name : ");
    scanf("%s",&x);
    printf("Your name is : %s",x);
    return 0;
}