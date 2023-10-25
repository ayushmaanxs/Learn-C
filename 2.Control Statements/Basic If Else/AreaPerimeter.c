/*Given the length and breadth of a rectangle,
Write a program to find whether the area of the
rectangle is greater than its perimeter
*/
#include <stdio.h>
int main()
{
    int l, b, area, perimeter;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
    area = l * b;
    perimeter = 2 * (l + b);
    if (area > perimeter)
    {
        printf("The area is greater than perimeter");
    }

    if (area == perimeter)
    {
        printf("The area is equal to perimeter");
    }

    if (area < perimeter)
    {
        printf("The area is lesser than perimeter");
    };
    return 0;
}