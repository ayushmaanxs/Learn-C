//WAP to print the reverse of a string
#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    puts("Enter a string: ");
    scanf("%[^\n]s",str);
    puts("The input is : ");  //puts automatically \n bhi de deta hai
    puts(str);

    //size excluding \0
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    //reversing using swap
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse is : "); 
    puts(str);

    return 0;
}