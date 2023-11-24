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
            printf("* ");
        };
        printf("\n");
    };

    //Second Method

    // for(int i=n;i>=1;i--){
    //     for(int j=i;j>=1;j--){
    //         printf("* ");
    //     };
    //     printf("\n");
    // }; 

    //Third Method
    // int a=n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=a;j++){
    //         printf("* ");
    //     };
    //     a--;
    //     printf("\n");
    // };
    
    return 0;
}