/*
Print the given Pattern

*****
*****
*****

*/

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    { // Outer loop -> number of horizontal lines i.e., number of stars in each column;number of rows
        for (int j = 1; j <= m; j++)
        { // Inner loop -> number of vertical lines i.e., number of stars in each row;number of columns
            printf("* ");
        };
        printf("\n"); // har line ke bad ek enter marne ke liye
    };
    return 0;
}