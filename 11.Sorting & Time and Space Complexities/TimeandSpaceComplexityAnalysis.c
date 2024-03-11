//Given an array of integers with 1 to 'n' elements and the size of the array is n+1.One element is occuring more than once i.e., duplicate number is present.Find the duplicate number
#include <stdio.h>
int main(){
    int n=11;
    int arr[11]={6,1,7,3,2,5,4,8,9,9,10};

    //Method 1:- Too many operations are required in this method so it is inefficient method in terms of time
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[i]);
                break;
            }
        }
    }

    //Method 2:- This code is efficient in terms of time as for completion of code number of operations required is very less but it is inefficient in terms of space as we are creating an extra array which is occupying an extra space
    int brr[11]={0,0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n-1;i++){
        if(brr[arr[i]]==0){
            brr[arr[i]]=1;  //arr[i] me jo value hai usi index pe jakr brr me {i.e., brr[value at arr[i]] } 0 ko replace karke 1 daal do
        }
        else{
            printf("%d\n",arr[i]);  //agar brr[arr[i]] 0 ke jagh phle se 1 hua to it means ki wo number repeat hua hai as humne brr ke sare elements ko 0 se initialize karra tha
        }
    }

    //Method 3:- This method is efficient in terms of time and space both as number of operations required is very less and we are not creating any extra array so it is efficient in terms of space also

    int Sum=0;
    for(int i=0;i<n;i++){
        Sum=Sum+arr[i]; //sum of all the elements of array
    }
    int OrgSum=10*(10+1)/2; //Sum of numbers from 1 to 10 as out array size is n+1 so n will be 10
    printf("The duplicate number is : %d",Sum-OrgSum);
    return 0;
}