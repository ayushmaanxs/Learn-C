/*
Print the given pattern

      A
    A B A
  A B C B A
A B C D C B A

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int nsp = n - 1; // Number of spaces
    int nst = 1;     // Number of stars
    for (int i = 1; i <= n; i++)
    {
        for (int q = 1; q <= nsp; q++)
        { // spaces ke liye loop
            printf("  ");
        }
        nsp--;
        for (int j = 1; j <= i; j++)
        { // normal number triangle
            char ch = (char)(j + 64);
            printf("%c ", ch);
        }
        int a = i - 1;
        for (int k = 1; k <= i - 1; k++)
        { // extra numbers in reverse order
            char ch = (char)(a + 64);
            printf("%c ", ch);
            a--;
        }

        printf("\n");
    }
    return 0;
}