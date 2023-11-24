/*
Print the given pattern

* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of stars in first row: ");
    scanf("%d", &n);

    //First Method

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            printf("%d ",j);
        };
        printf("\n");
    };


    // Second Method
    // int a=n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=a;j++){
    //         printf("%d ",j);
    //     };
    //     a--;
    //     printf("\n");
    // };
    
    return 0;
}