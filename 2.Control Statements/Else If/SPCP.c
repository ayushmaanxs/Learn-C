/*
If cost price and selling price of an item is input through
the keyboard,Write a program to determine whether the seller
has made profit or incurred loss.Also determine how much profit
he made or loss incurred.
*/
#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the selling price: ");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("The seller has made a profit of : %d", sp - cp);
    }

    else if (cp > sp)
    {
        printf("The seller has incurred a loss of : %d", cp - sp);
        ;
    }

    else
    {
        printf("The seller has incurred a loss of : %d", cp - sp);
    };
    return 0;
}