/*
Print the given Pattern

* * * *
* * * *
* * * *

*/

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of stars in each row/column: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    { // number of rows
        for (int j = 1; j <= n; j++)
        { // number of columns
            printf("*  ");
        };
        printf("\n"); 
    };
    return 0;
}