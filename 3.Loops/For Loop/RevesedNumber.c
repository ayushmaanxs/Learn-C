//Write a prgram to reverse the number.Reverse starting value wll be provided by the user
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number from which the reverse should start: ");
    scanf("%d",&n);
    for(int i=n; i>0;i--){
        printf("%d ",i);
    };
    return 0;
}