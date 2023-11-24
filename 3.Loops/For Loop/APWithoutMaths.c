// Display this AP - 4,7,10,13,16,... UPTO N TERMS
#include <stdio.h>
int main()
{
    int n; //itne bar loop chalega
    printf("Enter your number: ");
    scanf("%d", &n);
    //We are going to use extra variables
    int a =4;
    for (int i = 4; i<=n;i++)
    {
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}