//Given array and  a number 'x'.Find out if 'x' lies in the array or not , if YES then print the index.
#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x=4;
    int idx=1;
    // int check=0; 0 means the element is not present;
    bool flag = false ;  //false means not present
    for(int i=0;i<7;i++){
        if(arr[i]==x){
            flag=true;  //true means present
            idx=i;
            //check++;
            break;
        }
    }
    // if(check==0){
    //     printf("%d is not present in the array",x);
    // }
    if(flag==false){
        printf("%d is not present in the array",x);
    }
    else{
        printf("Yes %d is present in the array and its index is %d ",x,idx); 
    }

    return 0;
}