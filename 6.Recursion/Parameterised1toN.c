// Print sum from 1 to n (parameterized)
#include <stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("Your sum is : %d",s);
        return;
    } 
    sum(n-1,s+n);
    return;
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    sum(n,0);
    return 0;
}