/*
Given a point (x,y), write a program to find out if it lies on
the x-axis, y-axis or at the origin ,viz (0,0).
*/

#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the x coordinate: ");
    scanf("%d", &x);
    printf("Enter the y coordinate: ");
    scanf("%d", &y);
    if (x == 0 && y != 0)
    {
        printf("The point lies on the y axis");
    }
    else if (y == 0 && x != 0)
    {
        printf("The point lies on the x axis");
    }
    else
    {
        printf("The Point lies on the origin");
    };

    /*
    We can write the above code in this way as well
    if (x == 0 && y == 0)
    {
        printf("The point lies on the origin");
    }
    else if (y == 0 )
    {
        printf("The point lies on the x axis");
    }
    else if(x==0)
    {
        printf("The Point lies on the y axis");
    };
    */
    return 0;
}