#include <stdio.h>
int main(){
    FILE* ptr = fopen("web dev.txt","w");
    char str[]="Placement Lagega Isi Se\nAyushmaan Shandilya";
    fputs(str,ptr); //add str text to the file created on ptr
    fclose(ptr);    //it is always a good practice to close an opened file
    return 0;
}