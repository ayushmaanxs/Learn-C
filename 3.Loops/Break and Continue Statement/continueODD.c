// WAP to print odd numbers from 1 to 100
#include <stdio.h>
int main()
{
    for (int i=1;i<=100;i++)
    {
        if (i%2==0)  //i is not a factor of 2
        {
            continue;
        };
        printf("%d ",i);
    };
    return 0;
}