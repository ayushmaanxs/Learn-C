/*
Print the given pattern

        A
      A B
    A B C
  A B C D
A B C D E

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
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            char ch = (char)a;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}