// WAP to take N number of integers as input and display them

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    // int x = 6;
    // int *p = &x;
    // *p = 7;  7 is assigned to x  i.e,x=7
    //it meant ki *p me jo address store hai us address pe jakr uski value ko 7 assign kar do

    // int* ptr = (int*) malloc(10*4);
    int *ptr = (int *)malloc(10 * sizeof(int));
    int *p = ptr; // creating another pointer
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &(*ptr));
        ptr++;
    }
    int *t = p;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", (*p));
        p++;
    }
}