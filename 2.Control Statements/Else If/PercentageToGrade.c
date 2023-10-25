/*
Take input %age of a student and print the grade according to marks:
1. 91-100 Excellent
2. 81-90 Very Good
3. 71-80 Good
4. 61-70 Can do better
5. 51-60 Average
6. 41-50 Below Average
7. < 40  Fail
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Your Percentage: ");
    scanf("%d", &n);
    if (n >= 91 )
    {
        printf("Excellent");
    }
    else if (n >= 81)
    {
        printf("Very Good");
    }
    else if (n >= 71)
    {
        printf("Good");
    }
    else if (n >= 61)
    {
        printf("Can do better");
    }
    else if (n >= 51)
    {
        printf("Average");
    }
    else if (n >= 41)
    {
        printf("Below Average");
    }
    else
    {
        printf("Fail");
    };
    return 0;
}