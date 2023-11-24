/*
Print the given pattern

A B C D
A B C D
A B C D
A B C D


We will print it using  ASCII Values
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter upto how many alphabet you want ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 65; j <= 64 + n; j++)
        {
            char ch = (char)j;
            printf("%c ", ch);
        }
        printf("\n");
    };

    /*
        for (int i = 1; i <= n; i++)
        {
            int a = 1;
            for (int j = 1; j <= n; j++)
            {
                int d = a + 64;
                char ch = (char)d;
                printf("%c ", ch);
                a++;
            }
            printf("\n");
        };
    */

    return 0;
}