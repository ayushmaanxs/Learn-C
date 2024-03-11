#include <stdio.h>
int main(){
    FILE* ptr = fopen("Ayushmaan.txt","r"); //r is denoting read the file here
    char str[100];
    // if(fgets(str,100,ptr)!=NULL){   //  this prints only the first line
    //     printf("%s",str);
    // }
    while(fgets(str,100,ptr)!=NULL){    //this prints all the lines of the file
        printf("%s",str);
    }

    //fgets me str ke bad jo , lagake 100 likha hai that is denoting number of letters including spaces to get printed

    return 0;
}