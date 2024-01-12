// Write a function to calculate the nth fibonacci number using recursion

#include <stdio.h>

int fibo(int n)
{
    if(n==1 ||n==2){
        return 1;
    }
    int ans1 = fibo(n - 1);
    int ans2 = fibo(n - 2);
    int ans = ans1 + ans2;
    return ans;

    //Or directly
    //return fibo(n-1)+fibo(n-2);

}

int main()
{
    int a;
    printf("Enter which term of fibonacci series you want : ");
    scanf("%d",&a);
    printf("%d", fibo(a));
    return 0;
}