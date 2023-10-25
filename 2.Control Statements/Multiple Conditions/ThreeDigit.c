/*Take positive integer input and tell
if it is a three digit number or not */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
    {
        printf("%d is a three digit number", n);
    }
    // if(n<99 || n>1000){
    //     printf("%d is not a three digit number",n);
    // };
    else
    {
        printf("%d is not a three digit number", n);
    }
    return 0;
}