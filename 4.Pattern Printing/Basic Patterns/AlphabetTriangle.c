/*
Print the given pattern

A
A B
A B C
A B C D


We will print it using  ASCII Values
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)a;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}