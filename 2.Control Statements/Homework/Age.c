/*
If the ages of Ram,Shyam and Ajay are input through
the keyboard,Write a program to determine the youngest
of the three
*/

#include <stdio.h>
int main()
{
    int r, s, a;
    printf("Enter the age of Ram: ");
    scanf("%d", &r);
    printf("Enter the age of Shyam: ");
    scanf("%d", &s);
    printf("Enter the age of Ajay: ");
    scanf("%d", &a);
    if (r < s && r < a)
    {
        printf("Ram is the youngest among three");
    }
    if (s < r && s < a)
    {
        printf("Shyam is the youngest among three");
    }
    if (a < s && a < r)
    {
        printf("Ajay is the youngest among three");
    };
    return 0;
}