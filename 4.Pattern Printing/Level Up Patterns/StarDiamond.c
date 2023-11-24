/*
Print the given pattern

      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines: ");
    scanf("%d", &n);
    int nsp = n / 2;
    int nst = 1;
    int ml = n / 2 + 1; //middle line
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        { // Spaces
            printf("  ");
        }
        for (int k = 1; k <= nst; k++)
        { // Stars
            printf("* ");
        }
        if (i < ml)
        {
            nsp--;
            nst += 2; // nst=nst+2
        }
        else
        { // to print stars in reverse order after middle line
            nsp++;
            nst -= 2; // nst=nst-2
        };
        printf("\n");
    }
    return 0;
}